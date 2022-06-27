#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	int m_age;
	int* m_High;
	//构造函数
	Person()
	{
		cout << "无参构造函数 " << endl;
	}
	//析构函数
	~Person()
	{
		if (m_High != NULL)
		{
			delete m_High;
			m_High = NULL;
		}
		cout << "析构函数" << endl;
	}
	//有参构造
	Person(int a,int high)
	{
		m_age = a;
		m_High = new int(high);
		cout << "有参构造函数 " << endl;
	}
	//拷贝构造
	Person(const Person& a)
	{
		cout << "拷贝构造函数 " << endl;
		m_age = a.m_age;
		//m_High = a.m_High;
		m_High = new int(*a.m_High);
	}
};

void test()
{
	Person p(10, 160);
	cout << "年龄：  "<<p.m_age << "身高：  " << *p.m_High << endl;
	Person p1(p);
	cout << "年龄：  " << p1.m_age << "身高：  " << *p1.m_High << endl;
}

int main()
{
	test();
	system("pause");

	return 0;
}