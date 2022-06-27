#include<iostream>
#include<string>
using namespace std;

class Build;
class goodboy
{
public:
	goodboy();

	void visit();
	void visit2();

	Build* p;
};

class Build
{
	friend void goodboy::visit();
public:
	Build();
public:
	string m_sitroom;
private:
	string m_bedroom;

};

Build::Build()
{
	m_sitroom = "客厅";
	m_bedroom = "卧室";
}

goodboy::goodboy()
{
	//创造建筑物对象
	p = new Build;
}
void goodboy::visit()
{
	cout << "好朋友的全局函数 正在访问： " << p->m_sitroom << endl;
	cout << "好朋友的全局函数 正在访问： " << p->m_bedroom << endl;
}

void goodboy::visit2()
{
	cout << "好朋友的全局函数 正在访问2： " << p->m_sitroom << endl;
	//cout << "好朋友的全局函数 正在访问2： " << p->m_bedroom << endl;
}

void test()
{
	goodboy gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test();

	system("pause");

	return 0;
}