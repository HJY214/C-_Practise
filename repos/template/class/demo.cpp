#include <iostream>
#include <string>
using namespace std;

//类模板
template<class NameType,class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->name_ = name;
        this->age_ = age;
    }

    void show()
    {
        cout << "name: "<< this->name_ <<endl;
        cout << "age: "<< this->age_ <<endl;
    }

    NameType name_;
    AgeType age_;

private:
    /* data */
};

void test()
{
    Person<string, int> p1("张三", 18);
    p1.show();
}

int main(){
    test();
    system("pause");
    return 0;
}