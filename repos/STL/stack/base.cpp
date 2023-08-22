#include <iostream>
#include<stack>
using namespace std;
//栈stack容器 （类似杯子容器）

void test()
{
    //先进后出数据结构
    stack<int> s;

    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

     cout << " 栈大小"  << s.size() << endl;
    //只要不为空查看栈顶，然后出栈
    while (!s.empty())
    {
       cout << " 栈顶元素"  << s.top() << endl;
       s.pop();
    }
    cout << " 栈大小"  << s.size() << endl;
}

int main(){
    test();
    system("pause");
    return 0;
}