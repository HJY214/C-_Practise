#include <iostream>
#include <list>
using namespace std;
//list数据存取

void test()
{
    list<int> l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    //不支持随机访问
    cout << "第一个元素为： " << l1.front() << endl; 
    cout << "最后元素为： " << l1.back() << endl; 

    //支持双向
    list<int>::iterator it = l1.begin();
    it--;
    it++;
    
}

int main(){
    test();
    system("pause");
    return 0;
}