#include<iostream>
//#include<string>
//using namespace std;
////���ص��������
//class myInteger
//{
//	friend ostream& operator<<(ostream& cout, myInteger myint);
//public:
//	myInteger()
//	{
//		num = 0;
//	}
//	//����ǰ��++��������� ����������Ϊ�˶�ͬһ��������е���
//	myInteger& operator++()
//	{
//		num++;
//		return *this;
//	}
//	//���غ���++���������
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