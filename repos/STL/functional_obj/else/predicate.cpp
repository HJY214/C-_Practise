#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//仿函数 返回值类型为bool类型
//一元谓词
class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val>5;
    }
};
void test()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    //查找容器 有没有大于5数字
    //匿名函数对象GreaterFive
    vector<int>::iterator it =  find_if(v1.begin(),v1.end(),GreaterFive());
    if (it == v1.end())
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << "已找到大于五的数字： " << *it << endl;
    }   
}

//二元谓词
class MyCompare
{
public:
    bool operator()(int val1,int val2)
    {
       return val1 > val2;
    }
};
void test2()
{
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(50);
    v2.push_back(40);
    v2.push_back(90);
    
    sort(v2.begin(),v2.end());
    for (vector<int>::iterator it = v2.begin(); it != v2.end();it++)
    {
        cout << *it  << " ";
    }
    cout <<endl; 

    //使用函数对象改变算法策略
    sort(v2.begin(),v2.end(),MyCompare());
    for (vector<int>::iterator it = v2.begin(); it != v2.end();it++)
    {
        cout << *it  << " ";
    }
    cout <<endl; 
}

int main(){
    test2();
    system("pause");
    return 0;
}