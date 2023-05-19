#include <iostream>
using namespace std;
#include "manage.h"

Manager::Manager(int id,string name, int Did)
{
    this->m_ID = id;
    this->m_Name = name;
    this->m_DeptID = Did;   
}

void Manager::showInfo()
{
    cout<< "职工编号 : "<< this->m_ID
        << " \t职工姓名 : "<< this->m_Name 
        << " \t岗位 : "<< this->getDeptName() 
        << " \t职责:完成老板交代的任务,并下发任务 "<<endl;
}

string Manager::getDeptName()
{
    return string("经理");
}