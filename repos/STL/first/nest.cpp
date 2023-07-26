#include <iostream>
#include <vector>
#include <string>
using namespace std;

//容器嵌套
void test()
{
    vector< vector<int>> v;

    //创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    //小容器插数据
    for (int i = 0; i < 4; i++)
    {
       v1.push_back(i+1);
       v2.push_back(i+2);
       v3.push_back(i+3);
       v4.push_back(i+4);
    }
    //放入大容器
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    //通过大容器遍历数据
    for(vector<vector <int>>::iterator it = v.begin(); it != v.end();it++)
    {
        // (*it) ----容器<vector <int>、
        for(vector<int>::iterator it_s = (*it).begin(); it_s != (*it).end();it_s++)
        {
             cout<< *it_s << " ";
        }
        cout<<endl;
    }
}

int main(){
    test();
    system("pause");
    return 0;
}