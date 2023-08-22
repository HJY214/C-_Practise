#include <iostream>
#include<set>
using namespace std;
//set查找和统计

void test()
{
    //查找
    set<int> s1;

    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(20);
    s1.insert(50);

    set<int>::iterator pos =  s1.find(30);

    if (pos != s1.end())
    {
        cout << "找到元素: " << *pos <<endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }  
}

void test1()
{
    //统计
    set<int> s2;

    s2.insert(10);
    s2.insert(30);
    s2.insert(40);
    s2.insert(20);
    s2.insert(50);

    int num = s2.count(10);
    cout << "s2元素个数为: " << num <<endl;

}

//set容器和multiset容器区别
void test2()
{
    set<int> s1;

   pair<set<int>::iterator, bool> ret =  s1.insert(10);
   
   if (ret.second)
   {
        cout << "第一次插入成功！" << endl;
   }
   else
   {
    cout << "第一次插入失败！" << endl;
   }

   ret = s1.insert(10);
    if (ret.second)
   {
        cout << "第一次插入成功！" << endl;
   }
   else
   {
    cout << "第一次插入失败！" << endl;
   }
}

int main(){
    test2();
    system("pause");
    return 0;
}