#include <iostream>
#include<string>
using namespace std;

//类模板对象做函数参数
template<class T1,class T2>
class Person
{

public:
    Person(T1 name,T2 age)
    {
        this->name_ = name;
        this->age_ = age;
    }

    void show()
    {
        cout << "name: "<< this->name_ <<endl;
        cout << "age: "<< this->age_ <<endl;
    }
    T1 name_;
    T2 age_;
};

//1、指定传入类型
void printfPerson1(Person<string,int> &p)
{
    p.show();
}

void test01()
{
    Person<string,int> m("张三",18);
    printfPerson1(m);
    
}

//2、参数模板化
template<class T1,class T2>
void printfPerson2(Person<T1, T2> &p)
{
    p.show();
    cout << "T1 Type: " << typeid(T1).name() << endl;
    cout << "T2 Type: " << typeid(T2).name()<< endl;
}

void test02()
{
     Person<string,int> t("李四",18);
     printfPerson2(t);
}

//3、整个类模板化
template<class T>
void printfPerson3(T &p)
{
    p.show();
     cout << "T1 Type: " << typeid(T).name() << endl;
}


void test03()
{
     Person<string,int> n("王五",19);
     printfPerson3(n);
}

int main(){
    test03();
    system("pause");
    return 0;
}