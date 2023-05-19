#pragma once
#include <iostream>
using namespace std;

//职工抽象基类
class Worker
{
public:
    //显示个人信息
    virtual void showInfo() = 0;
    //显示岗位名称
    virtual string getDeptName() = 0;

    int m_ID;
    string m_Name;
    int m_DeptID;
};