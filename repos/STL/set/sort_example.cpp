#include <iostream>
#include <set>
using namespace std;
//set容器排序

class ComPare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};

void test()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(30);

    for (set<int>::iterator it = s1.begin();it!= s1.end();it++ )
    {
        cout << *(it) << " ";
    }
    cout << endl;

    //指定排序规则从大到小
    set<int,ComPare> s2;
    s2.insert(10);
    s2.insert(40);
    s2.insert(20);
    s2.insert(30);

    for (set<int,ComPare>::iterator it= s2.begin();it!= s2.end();it++)
    {
        cout << *(it) << " ";
    }
    cout << endl; 
}

//自定义数据类型
class Person
{
public:
    Person(string name,int age)
    {
        this->m_age = age;
        this->m_name = name;
    }

    string m_name;
    int m_age;
};

class compare
{
public:
    bool operator()(const Person &p1,const Person &p2)
    {
        return p1.m_age < p2.m_age;
    }
};

void test1()
{
    //自定义排序规则
    set<Person,compare> s1;

    //创建person对象
    Person p1("张三",18);
    Person p2("李四",20);
    Person p3("王五",30);
    Person p4("赵六",25);

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);

    for (set<Person>::iterator it = s1.begin();it != s1.end();it++)
    {
        cout << "姓名为： "<< (*it).m_name << "   年龄为： " << (*it).m_age <<endl;
    }
  
}


int main(){
    test1();
    system("pause");
    return 0;
}