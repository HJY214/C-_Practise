#include <iostream>
#include <string>
using namespace std;

//虚构和纯虚构函数
class Animal
{

public:
    // virtual ~Animal(){
    // cout<<"Animal析构函数"<<endl;
    // }
    virtual ~Animal() = 0;
    //纯虚函数
    virtual void speak() = 0;

};

Animal:: ~Animal() {
    cout<<"Animal纯虚析构函数"<<endl;
};
class Cat : public Animal
{
public:
    Cat(string name){
        m_string = new string(name);
    }
   ~Cat()
    {
        if (m_string != NULL)
        {
           cout<<"Cat析构函数"<<endl;
           delete m_string;
           m_string = NULL;
        }
    }
    void speak()
    {
        cout<<*m_string<<"小猫在说话"<<endl;
    }
    string *m_string;
};

void test1(){
    Animal* animal = new Cat("Tom");
    animal->speak();
    //父类指针在析构时不会调用子类析构函数
    delete animal;
} 

int main(){
    test1();
    system("pause");
    return 0;
}