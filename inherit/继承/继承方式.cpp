#include <iostream>

using namespace std;

//�����̳�
//class Base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_a = 10;
//		m_b = 10;
//		//m_c = 10;
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 100; //�����޷�����
//}
//
////�����̳�
//class Base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_a = 10; //��Ϊ����Ȩ��
//		m_b = 10;
//		//m_c = 10;
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s2.m_a = 100;
//	//s2.m_b = 100; //�����޷�����
//}
////˽�м̳�
//class Base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_a = 10; //��Ϊ˽��Ȩ��
//		m_b = 10;
//		//m_c = 10;
//	}
//};
//
//class grandson : public Son3
//{
//public:
//	void func()
//	{
//		m_a = 100;
//	}
//};
//void test03()
//{
//	Son3 s;
//	//s.m_a = 100;
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}
