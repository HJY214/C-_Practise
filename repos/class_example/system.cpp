#include <iostream>
#include "CompanyManager.h"
using namespace std;

// void test1(){
//     Worker *worker = NULL;
//     worker = new Employee(1,"张三",1);
//     worker->showInfo();
//     delete worker;

//     worker = new Manager(2,"李四",2);
//     worker->showInfo();
//     delete worker;

//     worker = new Boss(3,"王五",3);
//     worker->showInfo();
//     delete worker;

// }


int main(){
    CompanyManager m_;

    int choice = 0;

    while (true)
    {
        //菜单显示
        m_.menu();

        cout<< " 请输出您的选择：" <<endl;
        cin >> choice;//接收键盘输入
        if (!cin)
        {
            cout<< " 输入错误！ 请输入现有序号" <<endl;
            cin.clear(); 
			cin.sync();   //清空流
        }

        switch (choice)
        {
            case 0://退出管理系统
                m_.exitSystem();
                break;
            case 1://增加职工信息
                m_.AddMember();
                break;
            case 2://显示职工信息
                break;
            case 3://删除离职员工
                break;
            case 4://修改离职员工
                break;
            case 5://查找离职员工
                break;
            case 6://按照编号排序
                break;
            case 7://清空所有文档
                break;
            
            default:
            system("cls");
                break;
        }

    }
    

    system("pause");
    return 0;
}