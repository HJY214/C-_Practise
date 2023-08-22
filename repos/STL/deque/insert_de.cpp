#include <iostream>
#include <deque>
using namespace std;
//deque容器插入和删除

void printf_(const deque<int> &d)
{
    for ( deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
       cout << *it << " ";
    }
    cout << endl;
}

//两端
void test()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(100);
    d1.push_front(200);
    printf_(d1);
    //尾删
    d1.pop_back();
    printf_(d1);
    //头删
    d1.pop_front();
    printf_(d1);
}

void test1()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(100);
    d1.push_front(200);
    printf_(d1);

    //insert
    d1.insert(d1.begin(),1000);
    printf_(d1);

    d1.insert(d1.begin(),2,10000);
    printf_(d1);

    //区间插入
    deque<int>d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);

    d1.insert(d1.begin(),d2.begin(),d2.end());
    printf_(d1);
}

void test2()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(100);
    d1.push_front(200);
    printf_(d1);

    //删除
    deque<int>::iterator it = d1.begin();
    it++;
    d1.erase(it);
    printf_(d1);

    //区间方式删除
    d1.clear();
    //d1.erase(d1.begin(),d1.end());
     printf_(d1);
}

int main(){
    test2();
    system("pause");
    return 0;
}