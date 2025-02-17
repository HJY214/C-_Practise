#include <iostream>
#include<list>
using namespace std;
//list容器大小操作

void printf_(const list<int> &l)
{
    for(list<int>::const_iterator it = l.begin();it != l.end();it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

void test()
{
    list<int> l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    printf_(l1);

    if (l1.empty())
    {
        cout <<"l1为空!" << endl;
    }
    else
    {
        cout <<"l1不为空!" << endl;
        cout << "l1 个数为： " << l1.size() << endl;
    }
    
    l1.resize(10,100);
    printf_(l1);

    l1.resize(2);
    printf_(l1);
}

int main(){
    test();
    system("pause");
    return 0;
}