#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

//内建函数对象 算术仿函数

//negate 一元仿函数 取反函数
void test1()
{
    negate<int> n;
    cout << n(50) << endl;
}
//plus 二元元仿函数 
void test2()
{
    plus<int> t;
     cout << t(50,10) << endl;
}
/************************************************************/
//内建函数对象 关系仿函数
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};

void test3(){
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(8);
    v1.push_back(2);
    v1.push_back(22);
    v1.push_back(40);

    for (vector<int>::iterator it = v1.begin();it != v1.end();it++)
    {
        cout << *it << " ";
    }
    cout <<endl;

    //降序
    // sort(v1.begin(),v1.end(),MyCompare());
    //内建函数
    sort(v1.begin(),v1.end(),greater<int>());

    for (vector<int>::iterator it = v1.begin();it != v1.end();it++)
    {
        cout << *it << " ";
    }
    cout <<endl;

}
/************************************************************/
//内建函数对象 逻辑仿函数
//逻辑非 logical_not

void test4()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(true);
    v.push_back(false);

    for (vector<bool>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout <<endl;

    //利用逻辑非搬运到v2中并取反
    vector<bool> v1;
    v1.resize(v.size());

    transform(v.begin(),v.end(),v1.begin(),logical_not<bool>()) ; 

    for (vector<bool>::iterator it = v1.begin();it != v1.end();it++)
    {
        cout << *it << " ";
    }
    cout <<endl;
}

int main(){
    test4();
    system("pause");
    return 0;
}