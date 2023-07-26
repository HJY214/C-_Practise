#include <iostream>
using namespace std;
//string 插入和删除

void test()
{
    string str1 = "hello";

    //插入
    str1.insert(1,"222");
    cout << "str1 = " << str1 <<endl;
    //删除
    str1.erase(1,3);
    cout << "str1 = " << str1 <<endl;
}

int main(){
    test();
    system("pause");
    return 0;
}