#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printf_(int val)
{
    cout<< val <<endl;
}

//vector容器存放内置数据类型
void test()
{
    //创建容器
    vector<int> v;
    //插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //迭代器访问容器中数据
    // vector<int>::iterator itBegin = v.begin(); //起始迭代器：指向容器第一个元素
    // vector<int>::iterator itEnd = v.end();//结束迭代器：指向容器中最后一个元素的下一个位置

    // //第一种遍历
    // while (itBegin != itEnd)
    // {
    //     cout<< *itBegin <<endl;
    //     itBegin++;
    // }

    //第二种遍历
    // for(vector<int>::iterator it = v.begin();it != v.end(); it++)
    // {
    //     cout<< *it <<endl;
    // }

    //第三种遍历 利用STL遍历算法
    for_each(v.begin(),v.end(),printf_);
}


int main(){
    test();
    system("pause");
    return 0;
}