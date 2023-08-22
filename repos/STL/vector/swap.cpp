#include <iostream>
#include <vector>
using namespace std;
//vector 容器互换

void printf_(vector<int> &val)
{
    for (vector<int>::iterator it = val.begin();it != val.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//1、基本使用
void test()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    cout << "交换前："<< endl; 
    printf_(v1);
    
    vector<int> v2;
    for (int i = 10; i >0; i--)
    {
       v2.push_back(i);
    }
    printf_(v2);
    
    cout << "交换后："<< endl; 
    v1.swap(v2);
    printf_(v1);
    printf_(v2);
}

//2、实际用途（收缩内存）
void test1()
{
    vector<int> v;
    for (int i = 0; i < 10000; i++)
    {
       v.push_back(i);
    }
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;

    v.resize(3);
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;

    //swap收缩
    vector<int> (v).swap(v);
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;

}

int main(){
    test1();
    system("pause");
    return 0;
}