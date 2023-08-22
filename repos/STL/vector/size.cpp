#include <iostream>
#include <vector>
using namespace std;
//vector容量和大小操作

void print_(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
       v1.push_back(i);
    }
    print_(v1);

    if (v1.empty())//容器为空
    {
        cout << "v1为空!" <<endl;
    }
    else
    {
        cout << "v1不为空!" <<endl;
        cout << "v1容量为 : " << v1.capacity() <<endl;
        cout << "v1大小为 : " << v1.size() <<endl;
    }

    //重新指定大小
    v1.resize(15,100);
    print_(v1);
    cout << "v1容量为 : " << v1.capacity() <<endl;
    cout << "v1大小为 : " << v1.size() <<endl;

    v1.resize(5);
    print_(v1);
    cout << "v1容量为 : " << v1.capacity() <<endl;
    cout << "v1大小为 : " << v1.size() <<endl;
    
}

int main(){
    test();
    system("pause");
    return 0;
}