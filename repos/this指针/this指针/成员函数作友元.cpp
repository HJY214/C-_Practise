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
	m_sitroom = "����";
	m_bedroom = "����";
}

goodboy::goodboy()
{
	//���콨�������
	p = new Build;
}
void goodboy::visit()
{
	cout << "�����ѵ�ȫ�ֺ��� ���ڷ��ʣ� " << p->m_sitroom << endl;
	cout << "�����ѵ�ȫ�ֺ��� ���ڷ��ʣ� " << p->m_bedroom << endl;
}

void goodboy::visit2()
{
	cout << "�����ѵ�ȫ�ֺ��� ���ڷ���2�� " << p->m_sitroom << endl;
	//cout << "�����ѵ�ȫ�ֺ��� ���ڷ���2�� " << p->m_bedroom << endl;
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