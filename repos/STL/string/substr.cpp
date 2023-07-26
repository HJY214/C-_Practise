#include <iostream>
using namespace std;
//string 子串

void test()
{
    string str1 = "afasfghjaj";
    string subStr = str1.substr(1,3);
    cout << "subStr = " << subStr <<endl;
}

void test1()
{
    string email = "zhangshan@sina.com";

    //获取用户名等信息
    int pos_symbol =  email.find("@");
    int pos_web = email.find("com");

    string name = email.substr(0,pos_symbol);
    string web = email.substr(pos_symbol+1,pos_web+2);
    cout << "name = " << name <<endl;
    cout << "web = " << web <<endl;
}

int main(){
    test1();
    system("pause");
    return 0;
}