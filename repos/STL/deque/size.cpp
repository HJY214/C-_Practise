#include <iostream>
#include<deque>
using namespace std;
//deque容器大小调整
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
    if (d1.empty())
    {
        cout <<  "d1 为空 " << endl;
    }
    else
    {
        cout <<  "d1 不为空 " << endl;
         cout <<  "d1 size =  "<< d1.size() << endl;
    }
    
    //d1.resize(15);
    d1.resize(15,1);
    printf_(d1);

    d1.resize(8);
    printf_(d1);

}

int main(){
    test();
    system("pause");
    return 0;
}