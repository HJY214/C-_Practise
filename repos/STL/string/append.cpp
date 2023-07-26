#include <iostream>
using namespace std;

//string 拼接
/*
string& operator+=(const char* s);           //重载+=运算符
string& operator+=(const string &s);         //重载+=运算符
string& operator+=(char c);                  //重载+=运算符
string& append(const char* s);               //字符串链接给当前字符串末尾
string& append(const char* s,int n);         //把字符串前n个字符赋值给到当前字符串末尾
string& append(const string &s);             //同operator+=(const string &s)
string& append(const string &s，int pos,int n);               //字符串中从pos开始的n个字符连接到字符串结尾
*/

void test()
{
    string str1 = "我";
    
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl; 
    str1 += ':';
    cout << "str1 = " << str1 << endl;
    string str3 = "lol cf";

    string str2 = "I";
    str2.append(" Love ");
    cout << "str2 = " << str2 << endl;

    str2.append("game: adbda",6);
    cout << "str2 = " << str2 << endl;

    str2.append(str3,4,2);
    cout << "str2 = " << str2 << endl;

}

int main(){
    test();
    system("pause");
    return 0;
}