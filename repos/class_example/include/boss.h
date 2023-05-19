#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//老板类
class Boss : public Worker
{
public:
    Boss(int id,string name, int Did);
    ~Boss();

    void showInfo();
    string getDeptName();

private:
    /* data */
};