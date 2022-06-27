#include<iostream>
#include<string>
using namespace std;

//class Build;
//class goodboy
//{
//public:
//	 goodboy();
//public:
//	void visit();
//	Build* p;
//};
//
//class Build
//{
//	friend class goodboy;
//public:
//	Build();
//public:
//	string m_sitroom;
//private:
//	string m_bedroom;
//
//};
//
//	//cout << "好朋友的全局函数 正在访问： " << p.m_sitroom << endl;
//	//cout << "好朋友的全局函数 正在访问： " << p.m_bedroom << endl;
//
//Build::Build()
//{
//	m_sitroom = "客厅";
//	m_bedroom = "卧室";
//}
//
//goodboy::goodboy()
//{
//	//创造建筑物对象
//	p = new Build;
//}
//void goodboy::visit()
//{
//	cout << "好朋友的全局函数 正在访问： " << p->m_sitroom << endl;
//	cout << "好朋友的全局函数 正在访问： " << p->m_bedroom << endl;
//}
//
//void test()
//{
//	goodboy g;
//	g.visit();
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