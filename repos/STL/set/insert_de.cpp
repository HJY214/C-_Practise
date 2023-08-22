#include <iostream>
#include<set>
using namespace std;
//set容器的插入和删除

void printf_(set<int> &s)
{   
    for (set<int>::iterator it = s.begin();it != s.end();it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

void test()
{
    set<int> s1;

    s1.insert(30);
    s1.insert(10);
    s1.insert(20);
    s1.insert(50);

    printf_(s1);

    //删除
    s1.erase(s1.begin());
    printf_(s1);

    //删除重载
    s1.erase(30);
    printf_(s1);

    s1.clear();
}

int main(){
    test();
    system("pause");
    return 0;
}