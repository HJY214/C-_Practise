#include <iostream>
#include <map>
using namespace std;
//map查找与统计

void test()
{
    map<int,int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(3,40));

    map<int,int>::iterator pos = m.find(3);

    if (pos != m.end())
    {
        cout << "找到元素key : " << (*pos).first << " value: " << pos->second << endl;
    }
    else
    {
         cout << "找到元素! " << endl;
    }

    //统计
    //map不允许插入重复值
    int num = m.count(3);
     cout << "找到元素key : " << num << endl;
}

int main(){
    test();
    system("pause");
    return 0;
}