#include <iostream>
#include <vector>
using namespace std;
//vetor 容器构造

void printf_(vector<int> &val)
{
    for (vector<int>::iterator it = val.begin();it != val.end();it++)
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
    printf_(v1);

    //区间方式
    vector<int> v2(v1.begin(),v1.end());
    printf_(v2);

    //n个elem方式构造
    vector<int> v3(10,100);
    printf_(v3);

    //拷贝构造
    vector<int> v4(v3);
    printf_(v4);
}

int main(){
    test();
    system("pause");
    return 0;
}