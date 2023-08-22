#include <iostream>
#include<set>
using namespace std;
//set大小和交换

void printf_(set<int> &s)
{   
    for (set<int>::iterator it = s.begin();it != s.end();it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

void test()
{   
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    printf_(s1);

    if (s1.empty())
    {
       cout << " S1为空" << endl;
    }
    else
    {
        cout << " S1不为空" << endl;
        cout << "S1的大小: " << s1.size() <<endl;
    }

}

void test1()
{
    set<int> s2;
    s2.insert(10);
    s2.insert(30);
    s2.insert(20);
    s2.insert(40); 

    set<int> s3;
    s3.insert(100);
    s3.insert(200);
    s3.insert(300);
    s3.insert(400); 

    cout << "交换前： " << endl;
    printf_(s2);
    printf_(s3);

    cout << "交换后： " << endl;
    s2.swap(s3);
    printf_(s2);
    printf_(s3);

}

int main(){
    test1();
    system("pause");
    return 0;
}