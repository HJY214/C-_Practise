#include<iostream>
#include<string>
using namespace std;

class Person
{
	//公共权限
public:
	void setname(string name)//接口
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
	//私人权限
private:
	string m_name;//可读可写
	int m_age;//只读
	string m_lover;//只写
};

int main()
{
	Person s1;
	s1.setname("张三");
	s1.setlover("李四");
	cout << "名字:  " << s1.getname() << endl;
	cout << "年龄：  " << s1.getage() << endl;
	system("pause");

	return 0;
}