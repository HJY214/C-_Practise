#include<iostream>
#include<string>
using namespace std;

class Person
{
	//����Ȩ��
public:
	void setname(string name)//�ӿ�
	{
		m_name = name;
	}
	string getname()
	{
		return m_name;
	}
	int getage()
	{
		m_age = 2;
		return m_age;
	}
	void setlover(string lover)
	{
		m_lover = lover;
	}
	//˽��Ȩ��
private:
	string m_name;//�ɶ���д
	int m_age;//ֻ��
	string m_lover;//ֻд
};

int main()
{
	Person s1;
	s1.setname("����");
	s1.setlover("����");
	cout << "����:  " << s1.getname() << endl;
	cout << "���䣺  " << s1.getage() << endl;
	system("pause");

	return 0;
}