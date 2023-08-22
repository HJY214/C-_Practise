#include <iostream>
#include <map>
using namespace std;
//map排序

class sort
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};


void test()
{
    map<int,int,sort> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(6,60));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(8,80));

    for (map<int,int,sort>::iterator it= m.begin();it != m.end();it++)
    {
        cout <<  " key =  " << (*it).first << " value =  " << it->second << endl;
    }
    
}

int main(){
    test();
    system("pause");
    return 0;
}