#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
//deque 容器操作

void printf_(const deque<int> &d)
{
    for ( deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);
    printf_(d1);

    //排序 升序
    //支持随机访问都可以用sort算法直接对其进行排序
    sort(d1.begin(),d1.end());
    cout << "排序后 : "<<endl;
    printf_(d1);
}

int main(){
    test();
    system("pause");
    return 0;
}