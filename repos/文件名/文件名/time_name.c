#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//struct tm
//{
//    int tm_sec;  /*�룬������Χ0-59�� ��������61*/
//    int tm_min;  /*���ӣ�0-59*/
//    int tm_hour; /*Сʱ�� 0-23*/
//    int tm_mday; /*�գ���һ�����еĵڼ��죬1-31*/
//    int tm_mon;  /*�£� ��һ������0-11*/  
//    int tm_year;  /*�꣬ ��1900�����Ѿ�������*/  
//    int tm_wday; /*���ڣ�һ���еĵڼ��죬 ������������0-6*/
//    int tm_yday; /*�ӽ���1��1�յ�Ŀǰ����������Χ0-365*/
//    int tm_isdst; /*�չ��Լʱ������*/
//};

int main(void)
{
    time_t current = time(NULL);
    struct tm* timer = localtime(&current);

    //printf("current date and time:\n%d-%d-%d; week: %d; %d-%d-%d\n",
    //    timer->tm_year + 1900,
    //    timer->tm_mon + 1,
    //    timer->tm_mday,
    //    timer->tm_wday,
    //    timer->tm_hour,
    //    timer->tm_min,
    //    timer->tm_sec);

    char str1[80];//(1)
    char str2[80];
    char str3[80] = ".pcm";
    strftime(str1, 80, "%Y-%m-%d", timer);
    strftime(str2, 80, "_%H:%M:%S", timer);

    //printf(str1);
    //printf(str2);

    char* temp;//���ڴ����������ɵ��ַ���

    temp = (char*)malloc(sizeof(char) * 50);//�����ڴ�ռ䣬�˴������СΪ50���ַ�(char)�Ĵ�С (2)

    strcpy(temp,str1);//(3)

    strcat(temp,str2);

    strcat(temp, str3);

    printf(temp);

    free(temp);//(4)�ͷ��ڴ�

    return 0;
}