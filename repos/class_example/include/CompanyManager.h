#pragma once
#include <iostream>
#include <fstream>
#include "boss.h"
#include "Worker.h"
#include "manage.h"
#include "employee.h"
using namespace std;

#define FILENAME "staff.txt"

class CompanyManager
{
public:
    CompanyManager();
    ~CompanyManager();

    //菜单
    void menu();
    //退出
    void exitSystem();
    //增加成员函数
    void AddMember();
    //保存文件
    void save();

    //成员数量
    int m_member;
    //员工存放数组指针
    Worker **m_memberArray;
    bool m_fileEmpty;

    Worker **newSpace;
    Worker *worker;
    
private:
};

