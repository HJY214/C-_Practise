#include<iostream>
#include<string>
using namespace std;
//学生类
class student
{
public:
	int m_id;
	string m_name;
	void show_student()
	{
		cout << "名字:" << m_name << " 学号:" << m_id << endl;

	}
	void setname(string name)
	{
		m_name = name;
	}
};

//int main()
//{
//	student s1;
//	//s1.m_name = "张三";
//	s1.setname("张四");
//	s1.m_id = 1;
//	s1.show_student();
//	
//	system("pause");
//	
//	return 0;
//}

