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
//	//���������
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
//	cout << "����Ϊ�� " << *p.m_Age << endl;
//	cout << "����Ϊ�� " << *p1.m_Age << endl;
//	cout << "����Ϊ�� " << *p2.m_Age << endl;
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