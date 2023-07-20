#include <iostream>
using namespace std;

//类模板与继承
template<class T>
class inherit
{

public:
    T m;

};

//子类继承必须指定相关类型
// class Son : public inherit<int>
// {

// };


template<class T1,class T2>
class Son1 : public inherit<T2>
{
public:
    Son1()
    {
        cout<< "T1类型为: " << typeid(T1).name()<<endl;
        cout<< "T2类型为: " << typeid(T2).name()<<endl;
    }
    T1 obj;
};

void test()
{
    Son1<int, char> S2;

}

int main(){
    test();
    system("pause");
    return 0;
}