#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//经理类
class Manager : public Worker
{
public:
    Manager(int id,string name, int Did);
    ~Manager();

    void showInfo();
    string getDeptName();

private:
    /* data */
};