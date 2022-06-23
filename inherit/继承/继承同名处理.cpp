#include <iostream>

using namespace std;


class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	int m_A;
};

void test1()
{
	Base b;
	Son s;
	cout << "m_A = " << s.m_A << endl;
	cout << "m_A.b = " << b.m_A << endl;
}
int main()
{
	test1();

	system("pause");
	return 0;
}