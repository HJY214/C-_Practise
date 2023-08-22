#include <iostream>
#include<list>
using namespace std;
//list反转和排序

bool myCampare();

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
    //反转
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    cout <<"反转前: " <<endl;
    print_(l1);

    //反转
    l1.reverse();
    cout <<"反转后 : " <<endl;
    print_(l1);
}

bool myCampare(int v1,int v2)
{
    //降序 让第一个数大于第二个数
    return v1 > v2;
}

void test1()
{
    list<int> l2;

    l2.push_back(10);
    l2.push_back(20);
    l2.push_back(400);
    l2.push_back(80);
    l2.push_back(50);
    l2.push_back(40);
    l2.push_back(70);

    //排序
    cout << " 排序前: " << endl;
    print_(l2);
    //不支持随机访问迭代器需要使用内部算法
    cout << " 排序后: " << endl;
    list<int>::iterator it = l2.begin();
    l2.sort();
    print_(l2);

    l2.reverse();
    print_(l2);
}

int main(){
    test1();
    system("pause");
    return 0;
}