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
//
//	}
//	//有参构造
//	Person(int a)
//	{ 
//		m_age = a;
//		cout << "有参构造函数 " << endl;
//	}
//	//拷贝构造
//	Person(const Person &a)
//	{
//		cout << "拷贝构造函数 " << endl;
//		m_age = a.m_age;
//	 }
//};
//调用
//void test1()
//{ 
//	//1、有括号调参
//	Person p1;//默认调用
//	Person p2(10);
//	Person p3(p2);
//
//	cout << "p2年龄为：  " <<p2.m_age<< endl;
//	cout << "p3年龄为：  " << p3.m_age << endl;
//	//2、显示法
//	Person p2 = Person(10);
//	//Person(10)//匿名对象
//
//	//3、隐式转换法
//	Person p4 = 10;
//	Person p5 = p4;
//}
//
//int main()
//{
//	test1();
//
//	system("pause");
//
//	return 0;
//}