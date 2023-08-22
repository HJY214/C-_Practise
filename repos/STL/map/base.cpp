#include <iostream>
#include <map>
using namespace std;
//map容器构造和赋值

void printf_(map<int,int> &m)
{
    for (map<int,int>::iterator it = m.begin(); it != m.end();it++ )
    {
        cout << " key = " << (*it).first << " value = " << it->second << endl;
    }
    cout << endl;
    
}

void test()
{
    map<int,int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,40));
    m.insert(pair<int,int>(5,30));
    m.insert(pair<int,int>(4,50));
    printf_(m);

    //拷贝构造
    map<int,int> m1(m);
    printf_(m1);

    map<int,int> m2;
    m2 = m1;
    printf_(m2);
}

int main(){
    test();
    system("pause");
    return 0;
}