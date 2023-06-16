#include <iostream>
using namespace std;

//函数模板
template<typename T> //声明模板

void mySwap(T &a, T &b)
{
    T tem = a;
    a= b;
    b=tem;
}

void test()
{
    int a=10;
    int b=20;

    //两种方式使用函数模板
    //1、自动类型推导
    //mySwap(a,b);

    //2、显示指定类型
    mySwap<int>(a,b);
    cout<< "a = " << a <<endl;
    cout<< "b = " << b <<endl;
}

// int main(){
//     test();
//     system("pause");
//     return 0;
// }