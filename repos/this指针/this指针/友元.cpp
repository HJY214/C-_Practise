#include<iostream>
#include<string>
using namespace std;

//class Build
//{
//	//在类中进行声明 可以访问到私密成员内容（友元）
//	friend void goodboy(Build& p);
//
//public:
//	Build()
//	{
//		m_sitroom = "客厅";
//		m_bedroom = "卧室";
//	}
//public:
//	//客厅
//	string m_sitroom;
//private:
//	//卧室
//	string m_bedroom;
//};
//
//void goodboy(Build &p)
//{
//	cout << "好朋友的全局函数 正在访问： " << p.m_sitroom << endl;
//	cout << "好朋友的全局函数 正在访问： " << p.m_bedroom << endl;
//}
//
//void test()
//{
//	Build p;
//	goodboy(p);
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