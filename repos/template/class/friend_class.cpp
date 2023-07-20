#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2>
class Person;

//类外实现
template<class T1,class T2>
void showPerson2(Person<T1,T2> p)
{
        cout<< "类外姓名: " << p.m_name <<endl;
        cout<< "类外年龄: " << p.m_age <<endl;
}

template <class T1,class T2>
class Person
{
    //全局函数，类内实现
    friend void showPerson(Person<T1,T2> p)
    {
        cout<< "姓名: " << p.m_name <<endl;
        cout<< "年龄: " << p.m_age <<endl;
    }
    //全局函数，类外实现
    //加空模板参数列表
    //放到最前
    friend void showPerson2<>(Person<T1,T2> p);
public:
    Person(T1 name,T2 age)
    {
        this->m_name = name;
        this->m_age = age;
    }
private:
    T1 m_name;
    T2 m_age;
};

//1、全局函数类内实现
void test()
{
    Person<string, int> S1("张三",19);
    showPerson(S1);
    Person<string, int> S2("李四",20);
    showPerson2(S2);
}

int main(){
    test();
    system("pause");
    return 0;
}