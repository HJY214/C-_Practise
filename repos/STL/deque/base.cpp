#include <iostream>
#include <deque>
using namespace std;
//deque 构造函数

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
    
    deque<int> d2(d1.begin(),d1.end());
     printf_(d2);
}

int main(){
    test();
    system("pause");
    return 0;
}