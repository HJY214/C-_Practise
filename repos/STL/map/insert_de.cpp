#include <iostream>
#include <map>
using namespace std;
//map容器插入和删除

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
    //插入：第一种
    m.insert(pair<int ,int>(1,10));

    //插入：第二种
    m.insert(make_pair(2,20));

    //插入：第三种
    m.insert(map<int,int>::value_type(3,30));

    //插入：第四种(主要做访问)
    m[4] = 40;

    printf_(m);

    //删除
    m.erase(m.begin());
    printf_(m);

    m.erase(3);//按照key删除
    printf_(m);

    m.clear();
    printf_(m);
}

int main(){
    test();
    system("pause");
    return 0;
}