#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//struct tm
//{
//    int tm_sec;  /*秒，正常范围0-59， 但允许至61*/
//    int tm_min;  /*分钟，0-59*/
//    int tm_hour; /*小时， 0-23*/
//    int tm_mday; /*日，即一个月中的第几天，1-31*/
//    int tm_mon;  /*月， 从一月算起，0-11*/  
//    int tm_year;  /*年， 从1900至今已经多少年*/  
//    int tm_wday; /*星期，一周中的第几天， 从星期日算起，0-6*/
//    int tm_yday; /*从今年1月1日到目前的天数，范围0-365*/
//    int tm_isdst; /*日光节约时间的旗标*/
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

    char* temp;//用于储存最终生成的字符串

    temp = (char*)malloc(sizeof(char) * 50);//申请内存空间，此处申请大小为50个字符(char)的大小 (2)

    strcpy(temp,str1);//(3)

    strcat(temp,str2);

    strcat(temp, str3);

    printf(temp);

    free(temp);//(4)释放内存

    return 0;
}