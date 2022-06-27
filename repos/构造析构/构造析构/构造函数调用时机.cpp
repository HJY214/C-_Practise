#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	int m_age;
//	//构造函数
//	Person()
//	{
//		cout << "无参构造函数 " << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数" << endl;
//	}
//	//有参构造
//	Person(int a)
//	{
//		m_age = a;
//		cout << "有参构造函数 " << endl;
//	}
//	//拷贝构造
//	Person(const Person& a)
//	{
//		cout << "拷贝构造函数 " << endl;
//		m_age = a.m_age;
//	}
//};
////1、使用已经创建完毕的对象初始化新对象
//void test1()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2年龄：  "<<p2.m_age << endl;
//}
////2、使用值传递的方式给函数传值
//void doword(Person p)
//{
//
//}
//void test2()
//{
//	Person p;
//	doword(p);
//}
////3、使用返回值
//Person doword2()
//{
//	Person p;
//	cout << "p1地址：  " << &p<< endl;
//	return p;
//}
//void test3()
//{
//	Person p = doword2();
//	cout << "p2地址：  " << &p << endl;
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	system("pause");
//
//	return 0;
//}