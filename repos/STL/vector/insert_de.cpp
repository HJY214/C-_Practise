#include <iostream>
#include <vector>
using namespace std;
//vector 插入、删除操作
/*
-pusk_back(elem);                       //尾部插入元素elem
-pop_back();                            //删除最后一个元素
-insert(const_iterator pos,elem)        //迭代器指向位置pos插入元素
-insert(const_iterator pos,int n,elem)  //迭代器指向位置pos插入n个元素
-erase(const_iterator pos);             //删除迭代器指向元素
-erase(const_iterator start,const_iterator end) //删除迭代器从start到end之间的元素
-clear                                  //删除容器中所有元素
*/
void prinf_(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin();it != v.end();it ++)
    {
       cout << *it << " ";
    }
     cout <<endl;
}

void test()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    prinf_(v1);

    //尾删
    v1.pop_back();
    prinf_(v1);

    //插入 迭代器插入
    v1.insert(v1.begin(),100);
    prinf_(v1);


    v1.insert(v1.begin(),2,1000);
    prinf_(v1);

    //删除
    v1.erase(v1.begin());
    prinf_(v1);

    //清空
    //v1.erase(v1.begin(),v1.end());
    v1.clear();
    prinf_(v1);
}

int main(){
    test();
    system("pause");
    return 0;
}