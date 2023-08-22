#include <iostream>
#include<queue>
using namespace std;
//队列queue 容器（类似管道）

class Person
{
public:
    Person(string name ,int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    string m_name;
    int m_age;
};

void test()
{   
    //创建队列
    queue<Person> q;

    //准备数据
    Person p1("悟空",999);
    Person p2("唐僧",50);
    Person p3("猪八戒",888);
    Person p4("沙僧",777);

    //入列
    q.push(p2);
    q.push(p1);
    q.push(p3);
    q.push(p4);

    cout << "队列大小: " << q.size() << endl;
    //队列不为空，查看队头队尾，出队
    while (!q.empty())
    {
        //队头
        cout << "队头 -- 名字： " << q.front().m_name << " 队头 -- 年龄： " << q.front().m_age << endl;
        //队尾
        cout << "队尾 -- 名字： " << q.back().m_name << " 队尾 -- 年龄： " << q.back().m_age <<endl;

        q.pop();
    }
    cout << "队列大小: " << q.size() << endl;
     
}

int main(){
    test();
    system("pause");
    return 0;
}