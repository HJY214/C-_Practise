#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//	friend void test();
//private:
//	//成员函数重载
//	//void operator<<(cout)
//	int m_A;
//	int m_B;
//
//};
////2、全局函数重载左移运算符
//ostream& operator<<(ostream &cout,Person &p)//cout<<p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
//	return cout;
//}
//void test()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 120;
//	cout << p<<endl;
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//
//	return 0;
//}