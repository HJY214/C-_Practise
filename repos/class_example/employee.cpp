#include <iostream>
using namespace std;
#include "employee.h"

Employee::Employee(int id,string name, int Did)
{
    this->m_ID = id;
    this->m_Name = name;
    this->m_DeptID = Did;   
}

void Employee::showInfo()
{
    cout<< "职工编号 : "<< this->m_ID
        << " \t职工姓名 : "<< this->m_Name 
        << " \t岗位 : "<< this->getDeptName() 
        << " \t职责:完成经理交代的任务 "<<endl;
}

string Employee::getDeptName()
{
    return string("员工");
}
