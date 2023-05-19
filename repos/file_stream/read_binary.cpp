#include <iostream>
using namespace std;
#include <fstream>
#include <string>
//读文件 二进制
class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test1(){
    //1、创建流
    ifstream ifs;
    //2、打开方式
    ifs.open("Person.txt",ios::in | ios::binary);
    if (!ifs.is_open())
    {
        cout << "读文件错误！"<<endl;
        return;
    }
    
    //3、读数据
    //第一种
    // char buf[1024] = {0};
    // while (ifs>>buf)
    // {
    //    cout << buf <<endl;
    // }

    //第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf,sizeof(buf)))
    // {
    //     cout << buf <<endl;
    // }
    Person p ;
    ifs.read((char*)&p,sizeof(Person));
    cout << "我是"<<p.m_Name <<",今年"<<p.m_Age <<"岁了!"<<endl;

    //4、关闭
    ifs.close();
}

int main(){
    test1();
    system("pause");
    return 0;
}