#include <iostream>
#include <vector>
using namespace std;
//vector赋值

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
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
       v.push_back(i);
    }
    printf_(v);

    //赋值
    vector<int> v1;
    v1 = v;
    printf_(v1);

    //assign
    vector<int> v2;
    v2.assign(v1.begin(),v1.end());
    printf_(v2);

    //n个elem
    vector<int> v3;
    v3.assign(10,100);
    printf_(v3);
     
}

int main(){
    test();
    system("pause");
    return 0;
}