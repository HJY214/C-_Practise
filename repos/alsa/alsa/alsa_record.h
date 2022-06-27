#pragma once
#ifndef COM_HXIONG_ALSA_RECORD_H
#define COM_HXIONG_ALSA_RECORD_H

//�궨��
#define RECORD_FAIL   -1
#define RECORD_SUCCESS 0
#define RECORD_SAMPLE_RATE      8000
#define RECORD_BUFFER_TIME_MAX  500000
#define RECORD_DEVICE_NAME      "hw:0,1"


//wav ��ʽ���ļ�ͷ
typedef struct {
    char chunk_id[4];   /* "RIFF" */
    char chunk_size[4]; /* file total size - 8(byte) */
    char format[4];    /* "WAVE" */

    /* sub-chunk "fmt" */
    char sub_chunk_id[4];   /* "fmt " */
    char sub_chunk_size[4]; /* 16 for PCM */
    char audio_format[2];   /* PCM = 1*/
    char audio_channels[2];   /* Mono = 1, Stereo = 2, etc. */
    char samplerate[4];    /* 8000, 44100, etc. */
    char byterate[4];  /* = SampleRate * NumChannels * BitsPerSample/8 */
    char block_align[2];    /* = NumChannels * BitsPerSample/8 */
    char bits_persample[2]; /* 8bits, 16bits, etc. */
    //char fmt_chunk_end[2];  /* ���ӵ��������ݣ�ֵΪ0 */

    /* sub-chunk "data" */
    char sub_chunk2_id[4];   /* "data" */
    char sub_chunk2_size[4]; /* data size */
} wav_format_t;



//�Զ���Ľṹ�������Ŀ��ʱΪ�˰�command �еĲ�����һ��ת������do_alsa_record ����ת��record_handle_t �в���
typedef struct {
    int duration;  //¼�Ƶ�ʱ��
    int format;    //¼�Ƶ�pcm��ʽ
    int rate;      //������
    int channel;   //channel ����
    // ������Ҫ�����������Լ������
} record_params_t;
//path Ϊ¼�Ƶ�wav��Ƶ�ļ��ı���·��
int do_alsa_record(char* path, record_params_t* params);

#endif