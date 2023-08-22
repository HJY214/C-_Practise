#include <iostream>
#include<deque>
using namespace std;
//deque 容器赋值操作

//加const只读不修改
void printf_(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printf_(d1);

    deque<int> d2 = d1;
    printf_(d2);

    deque<int> d3(d2.begin(),d2.end());
    printf_(d3);

    deque<int> d4(10,100);
     printf_(d4);
}

int main(){
    test();
    system("pause");
    return 0;
}