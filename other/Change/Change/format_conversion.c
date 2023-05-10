#include <stdio.h>
#include <string.h>
/**
 * Convert PCM16LE raw data to WAVE format
 * @param pcmpath      Input PCM file.
 * @param channels     Channel number of PCM file.
 * @param sample_rate  Sample rate of PCM file.
 * @param wavepath     Output WAVE file.
 */
int simplest_pcm16le_to_wave(const char* pcmpath, int channels, int sample_rate, const char* wavepath)
{

    typedef struct WAVE_HEADER {
        char         fccID[4];     //"RIFF"
        unsigned   long    dwSize; //WAVE格式音频的大小(最后写入)
        char         fccType[4];   //"WAVE"
    }WAVE_HEADER;

    typedef struct WAVE_FMT {
        char         fccID[4];                  //"fmt"
        unsigned   long       dwSize;           // WAVE_FMT占的字节数，16字节
        unsigned   short     wFormatTag;        // 如果为PCM，改值为 1
        unsigned   short     wChannels;         // 通道数，单通道=1，双通道=2        
        unsigned   long       dwSamplesPerSec;  // 采用频率 
        unsigned   long       dwAvgBytesPerSec; 
        unsigned   short     wBlockAlign;
        unsigned   short     uiBitsPerSample;   //每个采样点的bit数，8bits=8, 16bits=16
    }WAVE_FMT;

    typedef struct WAVE_DATA {
        char       fccID[4];        //"data"
        unsigned long dwSize;       
    }WAVE_DATA;


    if (channels == 0 || sample_rate == 0) {
        channels = 2;
        sample_rate = 44100;
    }
    int bits = 16;

    WAVE_HEADER   pcmHEADER;
    WAVE_FMT   pcmFMT;
    WAVE_DATA   pcmDATA;

    unsigned   short   m_pcmData;
    FILE* fp, * fpout;

    fp = fopen(pcmpath, "rb");
    if (fp == NULL) {
        printf("open pcm file error\n");
        return -1;
    }
    fpout = fopen(wavepath, "wb+");
    if (fpout == NULL) {
        printf("create wav file error\n");
        return -1;
    }
    //WAVE_HEADER
    memcpy(pcmHEADER.fccID, "RIFF", strlen("RIFF"));
    memcpy(pcmHEADER.fccType, "WAVE", strlen("WAVE"));
    fseek(fpout, sizeof(WAVE_HEADER), 1);
    //WAVE_FMT
    pcmFMT.dwSamplesPerSec = sample_rate;
    pcmFMT.dwAvgBytesPerSec = pcmFMT.dwSamplesPerSec * sizeof(m_pcmData);
    pcmFMT.uiBitsPerSample = bits;
    memcpy(pcmFMT.fccID, "fmt ", strlen("fmt "));
    pcmFMT.dwSize = 16;
    pcmFMT.wBlockAlign = 2;
    pcmFMT.wChannels = channels;
    pcmFMT.wFormatTag = 1;

    fwrite(&pcmFMT, sizeof(WAVE_FMT), 1, fpout);

    //WAVE_DATA;
    memcpy(pcmDATA.fccID, "data", strlen("data"));
    pcmDATA.dwSize = 0;
    fseek(fpout, sizeof(WAVE_DATA), SEEK_CUR);

    fread(&m_pcmData, sizeof(unsigned short), 1, fp);
    while (!feof(fp)) {
        pcmDATA.dwSize += 2;
        fwrite(&m_pcmData, sizeof(unsigned short), 1, fpout);
        fread(&m_pcmData, sizeof(unsigned short), 1, fp);
    }

    pcmHEADER.dwSize = 36 + pcmDATA.dwSize;

    rewind(fpout);
    fwrite(&pcmHEADER, sizeof(WAVE_HEADER), 1, fpout);
    fseek(fpout, sizeof(WAVE_FMT), SEEK_CUR);
    fwrite(&pcmDATA, sizeof(WAVE_DATA), 1, fpout);

    fclose(fp);
    fclose(fpout);

    return 0;
}
int main()
{
    simplest_pcm16le_to_wave("NocturneNo2inEflat_44.1k_s16le.pcm", 2, 44100, "output_nocture.wav");

    return 0;
}