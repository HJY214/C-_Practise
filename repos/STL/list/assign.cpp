#include <iostream>
#include<list>
using namespace std;
//list容器赋值和交换

void print_(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin();it != l.end();it++)
    {
        cout << *(it) << " ";
    }
    cout <<endl;
}

void test()
{
    list<int> l;

    //数据写入
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    print_(l);

    list<int> l2 = l;
    print_(l2);

    list<int>l3;
    l3.assign(l2.begin(),l2.end());
    print_(l3);

    list<int>l4;
    l4.assign(4,100);
    print_(l4);
}

void test1()
{
    list<int> l;

    //数据写入
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    cout << "交换前: " << endl;
    print_(l);

    list<int> l2;
    l2.assign(10,100);
    print_(l2);

    cout << "交换后: " << endl;
    l2.swap(l);
    print_(l);
    print_(l2);

}

int main(){
    test1();
    system("pause");
    return 0;
}