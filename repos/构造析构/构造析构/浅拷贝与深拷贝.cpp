#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	int m_age;
	int* m_High;
	//���캯��
	Person()
	{
		cout << "�޲ι��캯�� " << endl;
	}
	//��������
	~Person()
	{
		if (m_High != NULL)
		{
			delete m_High;
			m_High = NULL;
		}
		cout << "��������" << endl;
	}
	//�вι���
	Person(int a,int high)
	{
		m_age = a;
		m_High = new int(high);
		cout << "�вι��캯�� " << endl;
	}
	//��������
	Person(const Person& a)
	{
		cout << "�������캯�� " << endl;
		m_age = a.m_age;
		//m_High = a.m_High;
		m_High = new int(*a.m_High);
	}
};

void test()
{
	Person p(10, 160);
	cout << "���䣺  "<<p.m_age << "��ߣ�  " << *p.m_High << endl;
	Person p1(p);
	cout << "���䣺  " << p1.m_age << "��ߣ�  " << *p1.m_High << endl;
}

int main()
{
	test();
	system("pause");

	return 0;
}