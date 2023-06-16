#include <iostream>
using namespace std;
//通用排序模板
//规则：从大到小
//算法：选择
//测试char int 数组

//交换函数模板
template<class T>
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

//排序算法
template<class T>
void mySort(T arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
       int max = i; 
       for (int j = i; j < len; j++)
       {
            if (arr[max] < arr[j])
            {
                max = j;
            }   
       }
       if (i != max)
       {
           mySwap(arr[i],arr[max]);
       }
    }
}

//打印数组的模板
template<class T>
void printArray(T arr,int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << arr[i]<< " " ;
    }
    cout<<endl;
}

void test()
{
    char charArray[] = "ablgdt";
    int num = sizeof(charArray)/sizeof(char);
    mySort(charArray,num);
    printArray(charArray,num);
}

void test1()
{
    int intArray[] = {2,9,3,6,7,8,1,4,5};
    int num = sizeof(intArray)/sizeof(int);
    mySort(intArray,num);
    printArray(intArray,num);
}

int main(){
    test();
    test1();
    system("pause");
    return 0;
}