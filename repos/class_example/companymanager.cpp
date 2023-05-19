#include "CompanyManager.h"

CompanyManager::CompanyManager()
{
    worker = NULL;
    newSpace = NULL;

    ifstream ifs;
    //1、文件不存在
    ifs.open(FILENAME,ios::in);
    if (!ifs.is_open())
    {
        cout<<"文件不存在！"<<endl;
        this->m_fileEmpty = true;
        this->m_member = 0;
        this->m_memberArray = NULL;
        ifs.close();
        return;
    }
    //2、文件存在但无数据
    char ch;
    ifs>>ch;
    if (ifs.eof())
    {
        cout<<"文件为空！"<<endl;
        this->m_fileEmpty = true;
        this->m_member = 0;
        this->m_memberArray = NULL;
        ifs.close();
        return;
    }
}

void CompanyManager::menu()
{
    cout<<"***********************************************"<<endl;
    cout<<"***************欢迎使用人事管理系统************"<<endl;
    cout<<"***************** 0.退出管理程序 **************"<<endl;
    cout<<"***************** 1.增加员工信息 **************"<<endl;
    cout<<"***************** 2.显示职工信息 **************"<<endl;
    cout<<"***************** 3.删除离职职工 **************"<<endl;
    cout<<"***************** 4.修改职工信息 **************"<<endl;
    cout<<"***************** 5.查找职工信息 **************"<<endl;
    cout<<"***************** 6.按照编号排序 **************"<<endl;
    cout<<"***************** 7.清空所有文档 **************"<<endl;
    cout<<"***********************************************"<<endl;
    cout<<endl;
}

void CompanyManager::exitSystem()
{
    cout<< " 欢迎下次使用！" <<endl;
    system("pause");
    exit(0);
}
void CompanyManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME,ios::out);
    for (int i = 0; i < this->m_member; i++)
    {
        ofs << this->m_memberArray[i]->m_ID << " "
            << this->m_memberArray[i]->m_Name<<" "
            << this->m_memberArray[i]->m_DeptID<<endl;
    }
    ofs.close();
    
}

void CompanyManager::AddMember()
{
    cout<< "请输入需要增加的员工数量" <<endl;
    int add_num = 0;
    cin>>add_num;
    if (add_num>0)
    {
       //计算新空间大小
       int newsize = this->m_member + add_num;

       //开辟新空间
       newSpace = new Worker *[newsize];

       //将原来的空间放到新空间下
       if (this->m_memberArray != NULL)
       {
            for (int i = 0; i < this->m_member; i++)
            {
                newSpace[i] = this->m_memberArray[i];
            }   
       }

       //输入新数据
       for (int i = 0; i < add_num; i++)
       {
            int id;
            string name;
            int did;

            cout<< "请输入第 "<< i+1 <<" 个新员工的编号" <<endl;
            cin>>id;

            cout<< "请输入第 "<< i+1 <<" 个员工的姓名" <<endl;
            cin>>name;

            cout<< "请选择改员工岗位：" <<endl;
            cout<< " 1、普通职工" <<endl;
            cout<< " 2、经理" <<endl;
            cout<< " 3、老板" <<endl;
            cin>>did;

           
            switch (did)
            {
            case 1://员工
                worker = new Employee(id,name,1);
                break;
            case 2://经理
                worker = new Manager(id,name,2);
                break;
            case 3://老板
                worker = new Boss(id,name,3);
                break;
            default:
                break;
            }
            newSpace[this->m_member+i] = worker; 
       } 
        //释放原有空间
        delete[] this->m_memberArray;
        //更新现有空间
        this->m_memberArray = newSpace;
        //更新现有个数
        this->m_member = newsize;
        
        //保存到文件中
        this->save();
        cout<< "成功添加 "<< add_num <<" 名员工！" <<endl;
    }   
    else
    {
        cout<< "输入有误！" <<endl;
    }
    //按任意键清屏
    system("pause");
    system("cls");
}

CompanyManager::~CompanyManager()
{
    if (this->m_memberArray != NULL)
    {
        delete[] this->m_memberArray;
        this->m_memberArray = NULL;
    }

    delete[] newSpace;
    newSpace = NULL;
    delete worker;  
}