#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	int m_age;
//	//���캯��
//	Person()
//	{
//		cout << "�޲ι��캯�� " << endl;
//	}
//	//��������
//	~Person()
//	{
//		cout << "��������" << endl;
//	}
//	//�вι���
//	Person(int a)
//	{
//		m_age = a;
//		cout << "�вι��캯�� " << endl;
//	}
//	//��������
//	Person(const Person& a)
//	{
//		cout << "�������캯�� " << endl;
//		m_age = a.m_age;
//	}
//};
////1��ʹ���Ѿ�������ϵĶ����ʼ���¶���
//void test1()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2���䣺  "<<p2.m_age << endl;
//}
////2��ʹ��ֵ���ݵķ�ʽ��������ֵ
//void doword(Person p)
//{
//
//}
//void test2()
//{
//	Person p;
//	doword(p);
//}
////3��ʹ�÷���ֵ
//Person doword2()
//{
//	Person p;
//	cout << "p1��ַ��  " << &p<< endl;
//	return p;
//}
//void test3()
//{
//	Person p = doword2();
//	cout << "p2��ַ��  " << &p << endl;
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