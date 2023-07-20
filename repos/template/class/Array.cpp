#include <iostream>
#include "MyArray.hpp"
using namespace std;

void printf_inarr(MyArray<int>& arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

void test()
{
    MyArray<int> t(5);
    // MyArray<int> t1(t);
    // MyArray<int> t2(100);
    // t2 = t;
    for (int i = 0; i < 5; i++)
    {
       t.Push_Back(i);
    }
    cout << " array = " << endl;
    printf_inarr(t);

    cout<<"数组容量 = "<<t.getCapacity()<<endl;
    cout<<"数组大小 = "<<t.getSize()<<endl;

    t.Push_Delete();
    cout<<"数组大小 = "<<t.getSize()<<endl;
    printf_inarr(t);
    t.Push_Back(10);
    cout<<"数组大小 = "<<t.getSize()<<endl;
    printf_inarr(t);
    
}

int main(){
    test();
    system("pause");
    return 0;
}