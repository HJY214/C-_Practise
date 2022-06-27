#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载运算符
//	Person& operator=(Person& p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//
//
//	int* m_Age;
//};
//
//void test()
//{
//	Person p(18);
//	Person p1(20);
//	Person p2(40);
//	p2 = p1 = p;
//	cout << "年龄为： " << *p.m_Age << endl;
//	cout << "年龄为： " << *p1.m_Age << endl;
//	cout << "年龄为： " << *p2.m_Age << endl;
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