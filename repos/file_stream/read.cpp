#include <iostream>
using namespace std;
#include <fstream>
#include <string>
//写文件
void test1(){
    //1、创建流
    ifstream ifs;
    //2、打开方式
    ifs.open("text.txt",ios::in);
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
    
    //第三种
    string buf;
    while (getline(ifs,buf))
    {
         cout << buf <<endl;
    }

    //第四种
    // char c;
    // while ((c = ifs.get()) != EOF) //end of file
    // {
    //    cout << c ;
    // }

    //4、关闭
    ifs.close();
}

int main(){
    test1();
    system("pause");
    return 0;
}