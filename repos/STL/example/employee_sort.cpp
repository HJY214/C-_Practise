//需求：
//招聘十个员工（ABCDEFGHIJ）,并分配在各个部门工作
//员工信息：姓名 工资组成；部门：策划、美术、研发
//随机给十名员工分配部门和工资
//插入部门和员工
//分部门显示员工信息

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define TANFA 2

class Woker
{
public:
    string m_name;
    int m_salary;
};

void creatWoker(vector<Woker> &v)
{
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Woker woker;
        woker.m_name = "员工-";
        woker.m_name += nameSeed[i];

        woker.m_salary = rand()%10000 + 10000; //10000~19999

        //将员工放入容器
        v.push_back(woker);
    }
}

void setGroup(multimap<int,Woker> &m,vector<Woker> &v)
{
    for (vector<Woker>::iterator it = v.begin();it != v.end();it++)
    {
        //产生部门编号
        int ID = rand()%3;
        //分组显示
        m.insert(make_pair(ID,*it));
    }   
}

void showWoker(multimap<int,Woker> &m)
{
    cout << " --------------------------------- " << endl;
    // 0 A B 先获取位置
    cout << " 策划部门： " << endl;
    multimap<int,Woker>::iterator pos =  m.find(CEHUA);
    int count = m.count(CEHUA);//统计人数
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << " 姓名： "<< pos->second.m_name << "  薪水: " << pos->second.m_salary << endl;
    }

    cout << " --------------------------------- " << endl;
    cout << " 美术部门： " << endl;
    pos =  m.find(MEISHU);
    count = m.count(MEISHU);//统计人数
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << " 姓名： "<< pos->second.m_name << "  薪水: " << pos->second.m_salary << endl;
    }

    cout << " --------------------------------- " << endl;
    cout << " 研发部门： " << endl;
    pos =  m.find(TANFA);
    count = m.count(TANFA);//统计人数
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << " 姓名： "<< pos->second.m_name << "  薪水: " << pos->second.m_salary << endl;
    }
    cout << " --------------------------------- " << endl;
    m.clear();
}

void test()
{
    //1、创建员工
    vector<Woker> VWoker;
    creatWoker(VWoker);

    // //2、员工分组
    multimap<int,Woker> MWoker;
    setGroup(MWoker,VWoker);

    //3、显示员工信息
    showWoker(MWoker);

    //测试
    // for (vector<Woker>::iterator it = VWoker.begin();it != VWoker.end();it++)
    // { 
    //     cout << "姓名： "<< (*it).m_name << "   薪水 : " << (*it).m_salary << endl;
    // }
    // cout << endl;
    
}

int main(){
    srand((unsigned int) time(NULL));
    test();
    system("pause");
    return 0;
}