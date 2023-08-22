#include <iostream>
#include <vector>
using namespace std;

void test()
{
    vector<int> v;

    //利用reserve预留空间
    v.reserve(100000);
    int num;
    int *p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);

        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
        
    }
    cout << "扩存次数 : " << num << endl;
    cout << "v的容量 : " << v.capacity() << endl;
    cout << "v的大小 : " << v.size() << endl;
}

int main(){
    test();
    system("pause");
    return 0;
}