#include <iostream>
#include<list>
using namespace std;
//list插入和删除

/*
-insert(pos,elem)
-insert(pos,n,elem)
-insert(pos,beg,end)
-clear()            //移除容器所有数据
-erase(beg,end)     //删除区间数据，返回下一个数据位置
-erase(pos)         //删除pos位置数据，返回下一个数据位置
-remove(elem)       //删除容器中elem元素
*/

void print_(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin();it != l.end();it++)
    {
        cout << *(it) << " ";
    }
    cout <<endl;
}

void test()
{
    list<int> l1;

    //尾插
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);

    //头插
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    print_(l1);

    //头删
    l1.pop_front();
    print_(l1);

    //insert插入
    list<int>::iterator it = l1.begin();
    l1.insert(++it,1000);
    print_(l1);

    //删除
    it = l1.begin();
    l1.erase(++it);
    print_(l1);

    //移除
    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    print_(l1);
    l1.remove(10000);
    print_(l1);
}

int main(){
    test();
    system("pause");
    return 0;
}