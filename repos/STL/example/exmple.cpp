#include <iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;
/*
五名选手：选手ABCD,10个评委对每一个打分，去除最高分和最低分，取平均分
*/

class Person
{
public:
    Person(string name,int score)
    {
        this->m_name = name;
        this->m_score = score;
    }

    string m_name;
    int m_score;
};

void creatPerson(vector<Person> &P)
{
for (int i = 0; i < 5; i++)
{
    string nameSeed = "ABCDE";
    string name = "选手";
    name += nameSeed[i];

    int score = 0;
    Person p(name,score);
    P.push_back(p);
}
}

//打分
void setScore(vector<Person> &V)
{
    for(vector<Person>::iterator it = V.begin();it!=V.end();it++)
    {
        //分数放入deque容器中
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60; //60~100
            d.push_back(score);
         }
        
        //排序
        sort(d.begin(),d.end());

        //除去最高分和最低分
        d.pop_front();
        d.pop_back();

        //获取平均分
        int sum = 0;
        for (deque<int>::iterator dit = d.begin();dit != d.end();dit++)
        {
            sum += *dit;
        }
        int finalscore = sum/d.size();
        // cout << "分数： "<< finalscore <<endl;
        
        //赋值给选手上
        it->m_score = finalscore;
    }
}

void showScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        cout << " 姓名：" << it->m_name << " 分数： " << it->m_score << endl;
    }
}

int main(){
    //随机种子
    srand((unsigned int) time(NULL));

    //1、创建五名选手
    vector<Person> v;
    creatPerson(v);
    // for (vector<Person>::iterator it = v.begin();it != v.end();it++)
    // {
    //     cout << "姓名： " << (*it).m_name << " 分数 : " << (*it).m_score << endl;
    // }

    //2、打分
    setScore(v);

    //3、显示得分
    showScore(v);

    system("pause");
    return 0;
}