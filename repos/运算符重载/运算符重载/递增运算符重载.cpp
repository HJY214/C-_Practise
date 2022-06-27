#include<iostream>
//#include<string>
//using namespace std;
////重载递增运算符
//class myInteger
//{
//	friend ostream& operator<<(ostream& cout, myInteger myint);
//public:
//	myInteger()
//	{
//		num = 0;
//	}
//	//重载前置++运算符递增 返回引用是为了对同一个对象进行递增
//	myInteger& operator++()
//	{
//		num++;
//		return *this;
//	}
//	//重载后置++运算符递增
//	myInteger operator++(int)
//	{
//		myInteger temp;
//		temp = *this;
//		num++;
//		return temp;
//	}
//private:
//	int num;
//};
//ostream& operator<<(ostream& cout, myInteger myint)//cout<<p
//{
//	cout << "num = " << myint.num;
//	return cout;
//}
//
//void test()
//{
//	myInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test1()
//{
//	myInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	//test();
//	test1();
//	system("pause");
//
//	return 0;
//}