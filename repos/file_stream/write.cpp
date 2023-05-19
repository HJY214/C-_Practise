#include <iostream>
using namespace std;
#include <fstream>
//写文件
void test1(){
    //1、创建流
    ofstream ofs;
    //2、打开方式
    ofs.open("text.txt",ios::out);
    //3、写内容
    ofs << "姓名:hjy"<< endl;
    ofs << "性别:man"<< endl;
    ofs << "age:18"<< endl;
    //4、关闭
    ofs.close();
}

int main(){
    test1();
    system("pause");
    return 0;
}