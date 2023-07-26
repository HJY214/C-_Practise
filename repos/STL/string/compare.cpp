#include <iostream>
using namespace std;
//字符串比较

void test()
{
    string str1 = "xello";
    string str2 = "zello";

    if (str1.compare(str2) == 0)
    {
        cout << "str1 = str2 " <<endl;
    }
    else if ((str1.compare(str2)>0))
    {
        cout << "str1 > str2 " <<endl;
    }
    else
    {
        cout << "str1 < str2 " <<endl;
    }
    
}

int main(){
    test();
    system("pause");
    return 0;
}