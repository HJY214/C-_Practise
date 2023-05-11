#include <iostream>
using namespace std;

//多态
class Animal
{
    public:
    //虚函数
    virtual void speak(){
        cout<<"动物说话"<<endl;
    }
};

class Cat : public Animal
{
    public:
    //重写 函数返回值 函数名 参数列表 完全相同
    //重载 函数返回值 函数名 相同 参数列表不同
    void speak(){
        cout<<"小猫在说话"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void speak(){
        cout<<"小狗在说话"<<endl;
    }
};

//执行说话函数
//  1、继承关系
//  2、子类重写父类的虚函数

//使用场景
//父类的指针或者引用 指向子类对象

void dospeak(Animal &animal){
    animal.speak();
}
void test1(){
    Cat cat;
    Dog dog;
    dospeak(cat);
    dospeak(dog);
}

int main(){
    test1();
    system("pause");
    return 0;
}