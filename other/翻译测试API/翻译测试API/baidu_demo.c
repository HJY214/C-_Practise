#define CURL_STATICLIB
#include <stdio.h>
#include <curl.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

#pragma comment ( lib, "libcurl.lib" )
#pragma comment ( lib, "ws2_32.lib" )
#pragma comment ( lib, "winmm.lib" )
#pragma comment ( lib, "wldap32.lib" )

int main(void)
{
    CURL* curl;
    CURLcode res;

    curl = curl_easy_init();
    if (curl) {
        char myurl[1000] = "http://api.fanyi.baidu.com/api/trans/vip/translate?";
        char* appid = "20220110001051440";    //replace myAppid with your own appid
        char* q = "更别说哪个老师要是敢动手，家长可能冲到教室和老师拼命，这也导致现在的老师可谓是进退两难，在老师眼中如果不够严厉,是约束不了淘气的学生，但过于严厉，会引起家长的不满";          //replace apple with your own text to be translate, ensure that the input text is encoded with UTF-8!
        char* from = "zh";          //replace en with your own language type of input text
        char* to = "en";            //replace zh with your own language type of output text
        char salt[60];
        int a = rand();
        sprintf(salt, "%d", a);
        char* secret_key = "U_YGzLifOWJMRIAlLSpc";   //replace mySecretKey with your own mySecretKey
        char sign[500] = "";
        strcat(sign, appid);
        strcat(sign, q);
        strcat(sign, salt);
        strcat(sign, secret_key);
        printf("%s\n", sign);
        unsigned char md[16];
        int i;
        char tmp[3] = { '\0' }, buf[30] = { '\0' };
        MD5((unsigned char*)sign, strlen((unsigned char*)sign), md);
        for (i = 0; i < 16; i++) {
            sprintf(tmp, "%2.2x", md[i]);
            strcat(buf, tmp);
        }
        printf("%s\n", buf);
        strcat(myurl, "appid=");
        strcat(myurl, appid);
        strcat(myurl, "&q=");
        strcat(myurl, q);
        strcat(myurl, "&from=");
        strcat(myurl, from);
        strcat(myurl, "&to=");
        strcat(myurl, to);
        strcat(myurl, "&salt=");
        strcat(myurl, salt);
        strcat(myurl, "&sign=");
        strcat(myurl, buf);
        printf("%s\n", myurl);
        //ÉèÖÃ·ÃÎÊµÄµØÖ·
        curl_easy_setopt(curl, CURLOPT_URL, myurl);
        res = curl_easy_perform(curl);
        /* Check for errors */
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));


        /* always cleanup */
        curl_easy_cleanup(curl);
    }
    return 0;
}