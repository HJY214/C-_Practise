#include <iostream>
using namespace std;
//计算机组装
//--------------零件-------------------//
class CPU
{
public : 
    virtual void calculate() = 0;
};

class VideoCard
{
public : 
    virtual void display() = 0;
};

class Memory
{
public : 
    virtual void storage() = 0;
};

//--------------整机-------------------//
class Computer
{
public:
    Computer(CPU *cpu,VideoCard *card,Memory *memory){
        m_cpu = cpu;
        m_vc = card;
        m_mem = memory;
    }
    ~Computer(){
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
        cout << "释放堆区！"<< endl; 
    }
    void work(){
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
private:    
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

//--------------具体厂商-------------------//
class InterCPU : public CPU
{
public:
    void calculate(){
        cout << "英特尔芯片运行中！"<< endl;
    }
};
class InterVideoCard : public VideoCard
{
public:
    void display(){
        cout << "英特尔显卡运行中！"<< endl;
    }
};
class InterMemory : public Memory
{
public:
    void storage(){
        cout << "英特尔内存运行中！"<< endl;
    }
};

class LenCPU : public CPU
{
public:
    void calculate(){
        cout << "联想芯片运行中！"<< endl;
    }
};
class LenVideoCard : public VideoCard
{
public:
    void display(){
        cout << "联想显卡运行中！"<< endl;
    }
};
class LenMemory : public Memory
{
public:
    void storage(){
        cout << "联想内存运行中！"<< endl;
    }
};

void test1(){
    CPU *cpu_ = new InterCPU;
    VideoCard *card_ = new InterVideoCard;
    Memory *memory_ = new InterMemory;
    cout << "--------------第一台电脑运行中--------------"<< endl;
    Computer *c1 = new Computer(cpu_,card_,memory_);
    c1->work();
    delete c1;
    cout << "--------------第二台电脑运行中--------------"<< endl;
    Computer *c2 = new Computer(new LenCPU,new LenVideoCard,new LenMemory);
    c2->work();
    delete c2;
    cout << "--------------第三台电脑运行中--------------"<< endl;
    Computer *c3 = new Computer(new InterCPU,new LenVideoCard,new InterMemory);
    c3->work();
    delete c3;
}

int main(){
    test1();
    system("pause");
    return 0;
}