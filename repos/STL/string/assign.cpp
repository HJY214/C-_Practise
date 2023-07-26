#include <iostream>
using namespace std;
//string赋值
/*
string& operator=(const char* s);           //char*字符串赋值到当前字符串
string& operator=(const string &s);         //字符串s赋值到当前字符串
string& operator=(char c);                  //字符赋值给到当前字符串
string& assign(const char* s);              //字符串赋值给当前字符串
string& assign(const char* s,int n);        //把字符串前n个字符赋值给到当前字符串
string& assign(const string &s);            //字符串s赋值给到当前字符串
string& assign(int n,char c);               //用n个字符c赋给到当前字符串
*/

void test()
{
    string str1;
    str1 = "hello world!";
    cout<< " str1 = " << str1 <<endl;

    string str2;
    str2 = str1;
    cout<< " str2 = " << str2 <<endl;

    string str3;
    str3 = 'a';
    cout<< " str3 = " << str3 <<endl;
    
    string str4;
    str4.assign("hello C++");
    cout<< " str4 = " << str4 <<endl;

    string str5;
    str5.assign("hello C++",5);
    cout<< " str5 = " << str5 <<endl;

    string str6;
    str6.assign(10,'w');
    cout<< " str6 = " << str6 <<endl;
}

int main(){
    test();
    system("pause");
    return 0;
}