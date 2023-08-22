#include <iostream>
#include<list>
using namespace std;
//案例描述：person自定义数据类型排序，姓名年龄身高
//排序规则：先按照年龄升序，如果年龄一样这按照身高降序
class Person
{
public:
    Person(string name,int age,int height)
    {
        this->m_name = name;
        this->m_age = age;
        this->m_height = height;
    }

    string m_name;
    int m_age;
    int m_height;
};

bool comparePerson(Person &p1,Person &p2)
{
    //按照年龄 升序
    if (p1.m_age == p2.m_age)
    {
        //按照身高降序
        return p1.m_height > p2.m_height;
    }
    return p1.m_age < p2.m_age;
}

void test()
{
    list<Person> l1;
    Person p1("张飞",35,165);
    Person p2("刘备",35,175);
    Person p3("赵云",25,190);
    Person p4("曹操",40,180);
    Person p5("关羽",35,200);
    Person p6("孙权",38,170);

    l1.push_back(p1);
    l1.push_back(p2);
    l1.push_back(p3);
    l1.push_back(p4);
    l1.push_back(p5);
    l1.push_back(p6);

    for (list<Person>::iterator it = l1.begin();it != l1.end();it++)
    {
        cout <<"姓名：" << (*it).m_name << "  年龄：" << (*it).m_age << "  身高：" << (*it).m_height <<endl;
    }
    
    cout << "------------排序后----------------" << endl;
    l1.sort(comparePerson);
    for (list<Person>::iterator it = l1.begin();it != l1.end();it++)
    {
        cout <<"姓名：" << (*it).m_name << "  年龄：" << (*it).m_age << "  身高：" << (*it).m_height <<endl;
    }

}

int main(){
    test();
    system("pause");
    return 0;
}