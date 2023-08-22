#include <iostream>
#include<set>
using namespace std;

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

    //插入只有insert
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    s1.insert(10);

    //特点：插入时自动排序
    //set容器不允许插入重复值
    printf_(s1);

    //拷贝构造
    set<int> s2(s1);
    printf_(s2);

    //赋值
    set<int> s3;
    s3 = s2;
    printf_(s3);
}

int main(){
    test();
    system("pause");
    return 0;
}