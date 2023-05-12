#include <iostream>
using namespace std;

//制作饮品
class AbstrackDrink
{
public:
    //煮水
    virtual void Boil() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入
    virtual void Pour() = 0;

    //辅料
    virtual void Material() = 0;

    void makeDrink(){
        Boil();
        Brew();
        Pour();
        Material();
    }
};

class Coffee : public AbstrackDrink
{
public:
    void Boil(){
        cout << " 煮水"<<endl;
    }
    void Brew(){
         cout << " 冲泡咖啡"<<endl;
    }
    void Pour(){
         cout << " 倒入杯中"<<endl;
    }
    void Material(){
         cout << " 加糖和牛奶"<<endl;
    }

};

class Tea : public AbstrackDrink
{
public:
    void Boil(){
        cout << " 煮水"<<endl;
    }
    void Brew(){
         cout << " 冲泡茶叶"<<endl;
    }
    void Pour(){
         cout << " 倒入杯中"<<endl;
    }
    void Material(){
         cout << " 加入柠檬"<<endl;
    }

};

void doWork(AbstrackDrink* abs){
    abs->makeDrink();
}

void test1(){
    //制作咖啡
    AbstrackDrink* drink_ = new Coffee;
    drink_->makeDrink();
    delete drink_;

    //制作茶水
    drink_ = new Tea;
    drink_->makeDrink();
    delete drink_;
}

int main(){
    test1();
    system("pause");
    return 0;
}