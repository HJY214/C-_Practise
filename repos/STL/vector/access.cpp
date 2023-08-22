#include <iostream>
#include <vector>
using namespace std;
//vector数据存取操作

void test()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    
    //[]访问
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout <<endl;

    //at访问
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout <<endl;

    //返回第一个元素
    cout << v1.front() << endl;
    //返回最后一个元素
    cout << v1.back() << endl;
}

int main(){
    test();
    system("pause");
    return 0;
}