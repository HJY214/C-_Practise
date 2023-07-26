#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray{
public:

    MyArray(int cap)
    {
        this->m_Capacity = cap;
        this->m_size = 0;
        this->Arrayadess = new T[this->m_Capacity];
    }

    //拷贝构造
    MyArray(const MyArray& arry)
    {
        //cout << " 拷贝调用" << endl; 
        this->m_Capacity = arry.m_Capacity;
        this->m_size = arry.m_size;
        //深拷贝
        this->Arrayadess = new T[arry.m_Capacity];

        for (int i = 0; i < m_size; i++)
        {
            this->Arrayadess[i] = arry.Arrayadess[i];
        }
    }

    //防止浅拷贝
    MyArray& operator=(const MyArray& arr)
    {
        //cout << " operator = 调用" << endl; 
        if (this->Arrayadess != NULL)
        {
            delete[] this->Arrayadess;
            this->Arrayadess = NULL;
            this->m_Capacity = 0;
            this->m_size = 0;
        }
        //深拷贝
        this->m_Capacity = arr.m_Capacity;
        this->m_size = arr.m_size;
        this->Arrayadess = new T[arr.m_Capacity];
        for (int i = 0; i < this->m_size; i++)
        {
           this->Arrayadess[i] = arr.Arrayadess[i];
        }
        return *this;
    }

    //尾插法
    void Push_Back(const T &val)
    {
        //判断容量
        if (this->m_Capacity == this->m_size)
        {
            return;
        }
        this->Arrayadess[this->m_size] = val;//末尾插入数据
        this->m_size++;//更新数组大小  
    }
    //尾删法
    void Push_Delete()
    {
        //判断容量
        if (this->m_size == 0)
        {
            return;
        }
        this->m_size--; 
    }
    //下标访问数组（重载）
    T& operator[](int index)
    {
        return this->Arrayadess[index];
    }
    //返回数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }
    //返回数组大小
    int getSize()
    {
        return this->m_size;
    }

    ~MyArray()
    {
        if (Arrayadess != NULL)
        {
            //cout << " 已经析构" << endl; 
            delete[] this->Arrayadess;
            this->Arrayadess = NULL;
            this->m_Capacity = 0;
            this->m_size = 0;
        }
        
    }

private:
    T *Arrayadess;

    int m_Capacity; //数组容量
    int m_size;     //数组大小
};