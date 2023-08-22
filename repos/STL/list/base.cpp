#include <iostream>
#include<list>
using namespace std;
//list容器构造函数 （链表）
void print_(const list<int> &L)
{
    for (list<int>::const_iterator it = L.begin(); it!= L.end();it++)
    {
        cout << *it << " ";
    }
    cout <<endl;
}

void test()
{
    //创建list容器
    list<int> l;

    //添加数据
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    print_(l);

    //区间构造
    list<int> L2(l.begin(),l.end());
    print_(L2);

    //拷贝构造
    list<int> L3(L2);
    print_(L3);

    //n个elem
    list<int> L4(4,100);
    print_(L4);
}

int main(){
    test();
    system("pause");
    return 0;
}