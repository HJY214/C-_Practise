#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//员工类
class Employee : public Worker
{
public:
    Employee(int id,string name, int Did);
    ~Employee();

    void showInfo();
    string getDeptName();

private:
    /* data */
};

