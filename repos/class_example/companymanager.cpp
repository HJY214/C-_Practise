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
    //2、文件存在且有数据
    int num = this->get_SysNum();

    this->m_member = num;
    //开辟空间
    this->m_memberArray = new Worker*[this->m_member];
    //文件数据存入数组
    this->init_Array();
    //测试代码
    // for (int i = 0; i < m_member; i++)
    // {
    //     cout<< "职工编号 : "<< this->m_memberArray[i]->m_ID
    //     << " \t职工姓名 : "<< this->m_memberArray[i]->m_Name 
    //     << " \t岗位 : "<< this->m_memberArray[i]->m_DeptID 
    //     <<endl;
    // }
    
}

int CompanyManager::get_SysNum()
{
    ifstream ifs;
    ifs.open(FILENAME);//读文件

    int id;
    string name;
    int Did;

    int num = 0;

    while (ifs>>id && ifs>>name && ifs>>Did)
    {
        /*统计人数 */
        num++;
    }

   return num; 
}

void CompanyManager::init_Array()
{
    ifstream ifs;
    ifs.open(FILENAME);

    int id;
    string name;
    int Did;

    int index = 0;
    while (ifs>>id && ifs>>name && ifs>>Did)
    {
        Worker *worker = NULL;

        if (Did == 1)
        {
           worker = new Employee(id,name,Did);
        }
        else if (Did == 2)
        {
            worker = new Manager(id,name,Did);
        }
        else
        {
            worker = new Boss(id,name,Did);
        }        
        
        this->m_memberArray[index] = worker;
        index++;   
    }
    this->m_fileEmpty = false;
    ifs.close();  
}
    
//显示所有员工
void CompanyManager::Show_Emp()
{
    if (this->m_fileEmpty)
    {
        cout<<"文件不存在或为空！"<<endl;
    }
    else
    {
        for (int i = 0; i < m_member; i++)
        {
            //多态调用
            this->m_memberArray[i]->showInfo();
        } 
    }
    system("pause");
    system("cls");
}

//删除员工
void CompanyManager::Del_Emp()
{
    if (this->m_fileEmpty)
    {
        cout<<"文件不存在或为空！"<<endl;
    }
    else
    {
        int id = 0;
        cout<< "请输入需要删除的员工ID" <<endl;
        cin>>id;

        int ret = this->IsExist(id);
        if (ret != -1)
        {
            //cout<< "员工存在！" <<endl;
            //数据前移
            for (int i = ret; i < m_member - 1; i++)
            {
                this->m_memberArray[i] = this->m_memberArray[i+1];
            }
            this->m_member--;//更新员工数量
            //数据同步到文件中
            this->save();
            cout<< "删除成功！" <<endl;
        }
        else
        {
            cout<< "删除失败，未找到员工！" <<endl;
        }
    }
    system("pause");
    system("cls");
}

//判读职工是否存在
int CompanyManager::IsExist(int id)
{
    int index = -1;

    for (int i = 0; i < m_member; i++)
    {
       if (this->m_memberArray[i]->m_ID == id)
       {
            //找到员工id
            index = i;
            break;
       }
    }
    return index;
}

//修改职工信息
void CompanyManager::Mod_Emp()
{
    if (this->m_fileEmpty)
    {
        cout<<"文件不存在或为空！"<<endl;
    }
    else
    {
        int id = 0;
        cout<< "请输入需要修改信息的员工ID: " <<endl;
        cin>>id;

        int ret = this->IsExist(id);
        if (ret != -1)
        {
            //cout<< "员工存在！" <<endl;
            //删除职工
            delete this->m_memberArray[ret];

            int newId = 0;
            string newName="";
            int newDid;

            cout<< "查到: "<< id << " 号员工，请输入新编号: " <<endl;
            cin>>newId;
            cout<< "请输入新名字: " <<endl;
            cin>>newName;
            cout<< "请选择员工岗位：" <<endl;
            cout<< " 1、普通职工" <<endl;
            cout<< " 2、经理" <<endl;
            cout<< " 3、老板" <<endl;
            cin>>newDid;

            Worker *worker = NULL;
            switch (newDid)
            {
                case 1:
                    worker = new Employee(newId,newName,newDid);
                    break;
                case 2:
                    worker = new Manager(newId,newName,newDid);
                    break;
                case 3:
                    worker = new Boss(newId,newName,newDid);
                    break;                
                default:
                    break;
            }
            //更新此名员工信息
            this->m_memberArray[ret] = worker;
            //数据同步到文件中
            this->save();
            cout<< "修改成功！" <<endl;
        }
        else
        {
            cout<< "修改失败，未找到员工！" <<endl;
        }
    }
    system("pause");
    system("cls");
}

//查找职工
void CompanyManager::find_Emp()
{
    if (this->m_fileEmpty)
    {
        cout<<"文件不存在或为空！"<<endl;
    }
    else
    {
        int f_way = 0;
        int f_id = 0;
        string f_name = "";
        cout<<"选择查找方式： "<<endl;
        cout<< " 1、按编号查找" <<endl;
        cout<< " 2、按名字查找" <<endl;
        cin>>f_way;

        if (f_way == 1)
        {
            cout<<"请输入员工ID: "<<endl;
            cin>>f_id;

            int ret = this->IsExist(f_id);
            if (ret != -1)
            {
                //cout<< "员工存在！" <<endl;
                this->m_memberArray[ret]->showInfo();

                cout<< "查找成功！" <<endl;
            }
            else
            {
                cout<< "查找失败，未找到员工！" <<endl;
            }            
        }
        else if (f_way == 2)
        {
            cout<<"请输入员工名字: "<<endl;
            cin>>f_name;

            bool flag = false;
            for (int i = 0; i < m_member; i++)
            {
                if (this->m_memberArray[i]->m_Name == f_name)
                {
                    cout<< "查找成功,职工编号为： " 
                        << this->m_memberArray[i]->m_ID 
                        << " 号的信息如下： "<<endl;
                    flag = true;

                    this->m_memberArray[i]->showInfo();
                    break;
                }
            }
            if (!flag)
            {
                cout<< "查找失败，未找到员工！" <<endl;
            }           
        }    
    }
    system("pause");
    system("cls");
}

//排序
void CompanyManager::sort_Emp()
{
    if (this->m_fileEmpty)
    {
        cout<<"文件不存在或为空！"<<endl;
    }
    else
    {
        int select;
        cout<<"选择排序方式： "<<endl;
        cout<< " 1、按工号进行升序" <<endl;
        cout<< " 2、按工号进行降序" <<endl;
        cin>>select;

        for (int i = 0; i < m_member ; i++)
        {
            int temp_ = i;
            for (int j = i+1; j < m_member; j++)
            {
                if (select == 1)//升序
                {
                    if (this->m_memberArray[temp_]->m_ID > this->m_memberArray[j]->m_ID)
                    {
                        temp_ = j;
                    }
                }
                else//降序
                {
                    if (this->m_memberArray[temp_]->m_ID < this->m_memberArray[j]->m_ID)
                    {
                        temp_ = j;
                    }
                } 
            }
            if (i != temp_)
            {
               Worker *temp = this->m_memberArray[i];
               m_memberArray[i] = this->m_memberArray[temp_];
               this->m_memberArray[temp_] = temp;
            }  
        }
        //保存文件
        this->save();
        cout<<"已成功排序： "<<endl;
        this->Show_Emp();
    }
}

//清空文件
void CompanyManager::clean_file()
{
    cout<<"确认删除？ "<<endl;
    cout<< " 1、确认" <<endl;
    cout<< " 2、返回" <<endl;

    int select = 0;
    cin>>select;

    if (select == 1)
    {
       //清空文件
       ofstream ofs(FILENAME,ios::trunc);//清空并重新创建
       ofs.close();

        if (this->m_memberArray != NULL)
        {
            for (int i = 0; i < m_member; i++)
            {
                if (this->m_memberArray[i] != NULL)
                {
                    delete this->m_memberArray[i];
                }
            }
            delete[] this->m_memberArray;
            this->m_memberArray = NULL;
            this->m_member = 0;
            this->m_fileEmpty = true;
        }
        cout<<"清空成功！ "<<endl; 
    }
    system("pause");
    system("cls");
}

//菜单
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

//退出
void CompanyManager::exitSystem()
{
    cout<< " 欢迎下次使用！" <<endl;
    system("pause");
    exit(0);
}

//保存文件
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

//增加成员函数
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

            cout<< "请选择员工岗位：" <<endl;
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
        for (int i = 0; i < m_member; i++)
        {
           if (this->m_memberArray[i] != NULL)
           {
                delete this->m_memberArray[i];
           }
           
        }
        delete[] this->m_memberArray;
        this->m_memberArray = NULL;
    }

    delete[] newSpace;
    newSpace = NULL;
    delete worker;  
}