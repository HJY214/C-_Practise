#include<iostream>
#include<string>
using namespace std;
//ѧ����
class student
{
public:
	int m_id;
	string m_name;
	void show_student()
	{
		cout << "����:" << m_name << " ѧ��:" << m_id << endl;

	}
	void setname(string name)
	{
		m_name = name;
	}
};

//int main()
//{
//	student s1;
//	//s1.m_name = "����";
//	s1.setname("����");
//	s1.m_id = 1;
//	s1.show_student();
//	
//	system("pause");
//	
//	return 0;
//}

