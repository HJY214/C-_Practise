#include <iostream>
using namespace std;
//字符串查找和替换

//1、查找
void test()
{
    string str1 = "abcdefaasde";

    int pos = str1.find("de");
    if (pos == -1)
    {
         cout << "未找到字符串"<<endl;
    }
    else
    {
        cout << "找到字符串 , position = " << pos <<endl;
    }
    //rfind 从右往左查找（默认从左往右）
    pos = str1.rfind("de");
    cout << "找到字符串 , position = " << pos <<endl; 
}

//2、替换
void test1()
{
    string str1 = "abcdefaasde";
    //从1号位置起3个字符替换为“1111”
    str1.replace(1,3,"1111");
    cout << "str1 = " << str1 <<endl;
}

int main(){
    test1();
    system("pause");
    return 0;
}