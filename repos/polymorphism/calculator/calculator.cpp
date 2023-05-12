#include <iostream>
using namespace std;

//两种方式实现:普通和多态

//***********************1、普通******************//
class Calculator{
    public:
    int getResult(string oper){
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        
        return 0;
    }
    int m_Num1;
    int m_Num2;
};

void test1(){
    Calculator c;
    c.m_Num1 = 30;
    c.m_Num2 = 20;

    cout <<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
    cout <<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
    cout <<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
}

//***********************2、多态******************//
//1、结构清晰
//2、可读性强
//3、对于后期和前期扩展维护性高
class AbstractCalculator{
    public:
    virtual int getResult(){
        return 0;
    }
    int m_Num1;
    int m_Num2;
};

//加法计算器
class AddCalculator : public AbstractCalculator{
    public:
        int getResult(){
        return m_Num1+m_Num2;
    }
};

//减法计算器
class SubCalculator : public AbstractCalculator{
    public:
        int getResult(){
        return m_Num1-m_Num2;
    }
};

//乘法计算器
class MulCalculator : public AbstractCalculator{
    public:
        int getResult(){
        return m_Num1*m_Num2;
    }
};

void test2(){
    //父类指针或者引用指向子类对象

    //加法
    AbstractCalculator* abc_ = new AddCalculator;
    abc_->m_Num1 = 100;
    abc_->m_Num2 = 100;
    cout <<abc_->m_Num1<<" + "<<abc_->m_Num2<<" = "<<abc_->getResult()<<endl;
    delete abc_;

    //减法
    abc_ = new SubCalculator;
    abc_->m_Num1 = 20;
    abc_->m_Num2 = 10;
    cout <<abc_->m_Num1<<" - "<<abc_->m_Num2<<" = "<<abc_->getResult()<<endl;
    delete abc_;

    //乘法
    abc_ = new MulCalculator;
    abc_->m_Num1 = 20;
    abc_->m_Num2 = 10;
    cout <<abc_->m_Num1<<" * "<<abc_->m_Num2<<" = "<<abc_->getResult()<<endl;
    delete abc_;
}

int main(){
    //test1();
    test2();
    system("pause");
    return 0;
}