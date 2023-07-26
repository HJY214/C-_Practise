#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
public:
    Person(string name,int age){
        this->m_age = age;
        this->m_name = name;
    }

    int m_age;
    string m_name;
};

void test()
{
    vector<Person> v;

    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    //添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    //遍历
    for (vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        //cout<< "姓名： " << (*it).m_name <<  " 年龄： " << (*it).m_age <<endl;
        cout<< "姓名： " << it->m_name <<  " 年龄： " << it->m_age <<endl;
    }   
}

//存放自定义指针
void test1(){
    vector<Person*> v;

    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    //添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    //遍历容器
    for (vector<Person*>::iterator it = v.begin();it != v.end();it++)
    {
       //cout<< "姓名： " << (*it)->m_name <<  " 年龄： " << (*it)->m_age <<endl;
       cout<< "::姓名： " << (**it).m_name <<  " 年龄： " << (**it).m_age <<endl;
    }
    
}

int main(){
    test1();
    system("pause");
    return 0;
}