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
    //统计系统中人数
    int get_SysNum();
    //初始化员工
    void init_Array();
    //显示所有员工
    void Show_Emp();
    //删除员工
    void Del_Emp();
    //判读职工是否存在
    int IsExist(int id);
    //修改职工信息
    void Mod_Emp();
    //查找职工
    void find_Emp();
    //排序
    void sort_Emp();
    //清空文件
    void clean_file();

    //成员数量
    int m_member;
    //员工存放数组指针
    Worker **m_memberArray;
    bool m_fileEmpty;

    Worker **newSpace;
    Worker *worker;
    
private:
};

