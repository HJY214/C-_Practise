#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

//常用遍历算法 for_each
void print_(int val)
{
    cout << val << " ";
}
//仿函数
class print02
{
public:
    int operator()(int val)
    {
         cout << val << " ";
    }
};

void test1()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
       v.push_back(i);
    }
    
    for_each(v.begin(),v.end(),print_);
    cout << endl;

    for_each(v.begin(),v.end(),print02());
    cout << endl;
    
}

//常用遍历算法 transform
class Transform
{
public:
    int operator()(int val)
    {
        return val+100;
    }

};

void test2()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    vector<int> vTarget; //目标容器
    vTarget=v;//提前开辟空间

    transform(v.begin(),v.end(),vTarget.begin(),Transform());

    for_each(vTarget.begin(),vTarget.end(),print02());
    cout << endl;
}



int main(){
    //test1();
    test2();
    system("pause");
    return 0;
}