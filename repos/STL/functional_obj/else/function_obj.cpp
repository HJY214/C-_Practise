#include <iostream>
using namespace std;

//函数对象（仿函数）
/*
- 函数对象使用时，可以像普通函数调用那样，可以有参数，可以有返回值
- 函数对象超出普通函数概念，函数对象有自己的状态
- 函数对象可以作为参数传递
*/
//1、函数对象使用，可以想普通函数调用，可以有参数，可以有返回值
class Myadd
{
public:
    int operator()(int v1,int v2)
    {
        return v1+v2;
    }
};
void test()
{
    Myadd my;
    cout << my(10,10) << endl;
}

//2、函数对象超出普通函数概念，有自己状态
class Myprint
{
public :
    Myprint()
    {
        count = 0;
    }
    int operator()(string t)
    {
        cout << t << endl;
        count++;
    }

    int count; //运行次数状态
};
void test1()
{
    Myprint my;
    my("张三");
    my("张三");
    my("张三");
    my("张三");
    my("张三");

    cout << "调用次数: " << my.count << endl;
}

//3、函数对象作为参数传递
void doPrint(Myprint &mp, string t)
{
    mp(t);
}
void test3()
{
    Myprint my;
    doPrint(my,"hello");
}

int main(){
    test3();
    system("pause");
    return 0;
}