#include <iostream>
#include <map>
using namespace std;

void test01()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,40));
    m1.insert(pair<int,int>(5,30));
    m1.insert(pair<int,int>(4,50));

    if (m1.empty())
    {
        cout << "m1 为空！" << endl;
    }
    else
    {
        cout << "m1 不为空！" << endl;
        cout << "size 大小为 : " << m1.size() << endl;
    }
}

void printf_(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin(); it!= m.end();it++)
    {
        cout << " key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test2()
{
    map<int ,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,40));
    m1.insert(pair<int,int>(5,30));
    m1.insert(pair<int,int>(4,50));

    map<int ,int> m2;
    m2.insert(pair<int,int>(10,100));
    m2.insert(pair<int,int>(20,200));
    m2.insert(pair<int,int>(30,300));
    m2.insert(pair<int,int>(40,400));

    cout << "交换前 :" << endl;
    printf_(m1);
    printf_(m2);

    cout << "交换后 :" << endl;
    m1.swap(m2);
    printf_(m1);
    printf_(m2);
}

int main(){
    test2();
    system("pause");
    return 0;
}