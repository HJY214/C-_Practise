#include <iostream>
#include "MyArray.hpp"
#include <string.h>
using namespace std;

void printf_inarr(MyArray<int>& arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

// void test()
// {
//     MyArray<int> t(5);
//     // MyArray<int> t1(t);
//     // MyArray<int> t2(100);
//     // t2 = t;
//     for (int i = 0; i < 5; i++)
//     {
//        t.Push_Back(i);
//     }
//     cout << " array = " << endl;
//     printf_inarr(t);

//     cout<<"数组容量 = "<<t.getCapacity()<<endl;
//     cout<<"数组大小 = "<<t.getSize()<<endl;

//     t.Push_Delete();
//     cout<<"数组大小 = "<<t.getSize()<<endl;
//     printf_inarr(t);
//     t.Push_Back(10);
//     cout<<"数组大小 = "<<t.getSize()<<endl;
//     printf_inarr(t);
// }
class Person
{
public:
    Person(){};
    Person(string name ,int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    int m_age;
    string m_name;

};

void printf_(MyArray<Person> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout<<"姓名： "<<arr[i].m_name<<endl;
        cout<<"年龄： "<<arr[i].m_age<<endl;
    }
}

void test01()
{
    MyArray<Person> arr(10);
    Person p1("悟空",999);
    Person p2("韩信",30);
    Person p3("妲己",20);
    Person p4("赵云",25);
    Person p5("吕布",35);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    printf_(arr);

    cout<<"容量： "<<arr.getCapacity()<<endl;
    cout<<"大小： "<<arr.getSize()<<endl;
    
}

int main(){
    test01();
    system("pause");
    return 0;
}