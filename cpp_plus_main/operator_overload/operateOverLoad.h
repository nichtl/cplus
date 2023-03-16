//
// Created by nicht on 2023/2/15.
//
#include "iostream"
#include "stdio.h"

using namespace std;

#ifndef CPPLEARNING_OPERATEOVERLOAD_H
#define CPPLEARNING_OPERATEOVERLOAD_H

// 运算符重载  对于内置的数据类型编译器指定如何进行运行操作但是对于自定义的类的运算法是不知道的需要进行重载自定义运算逻辑
// eg: 自定义类相加  Person + Person
class operateOverLoad {

};


class Person{
public:
    int m_a;
    int m_b;
    ~Person() { cout << "person destory" << endl;}



};
//运算符重载也可以发生函数重载

Person operator+(Person& p1 ,int  p2){
    Person tmp ;
    tmp.m_a = p1.m_a+p2;
    tmp.m_b = p1.m_b+p2;
    return  tmp;
}

//重载 加号
Person operator+(Person& p1,Person& p2) {
    Person tmp ;
    tmp.m_a = p1.m_a+p2.m_a;
    tmp.m_b = p1.m_b+p2.m_b;
    return tmp;
}

// 左移运算符重载 <<
std::ostream& operator<<(std::ostream& ct,Person& p) {
ct<<"m_a="<<p.m_a<<",m_b="<<p.m_b;
return ct;
}
class myInterger{
public:
    myInterger(){
        m_a = 0;
    }
    int getM_a() const { return m_a; }
    // 递增运算符重载 ++ 前置
    myInterger& operator++(){
        this->m_a++;
        return *this;
    }
    //++ 函数后置
   const myInterger operator++(int){
       myInterger tmp = *this;
       this->m_a++;
       return tmp;
    }
private:
    int m_a;
};
// 重载赋值运算符 =
class  Age{

public:
    Age(){
         cout << "no construct " << endl;
        m_age =  new int (1);
    }
        Age(int* age){
        cout << " construct " << endl;
        m_age=age ;}
        // 重载拷贝构造函数
        //拷贝构造函数是构造函数的一个重载形式
        //拷贝构造函数的参数只有一个且必须是类类型对象的引用
        Age(const Age& age){
           cout << "调用拷贝" << endl;
           m_age=age.m_age;
        }
    ~Age(){
        cout << "remove this point " << m_age  <<"value ="<< *m_age<< endl;
        if(m_age!=NULL){delete m_age; m_age=NULL;}
    }

   int *  getM_age() { return m_age;}
   void setM_age(int * age) { m_age = age;}
    Age&  operator=(Age& myi) {
         cout << "overload operator " << endl;
        // 深拷贝 如果 自身存的指针不为空先删除
        if (m_age != NULL) {
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(* myi.m_age);
        return *this;
    }

private:

    int * m_age;
};

// 关系运算符重载 如> < =  !=


class  Person_m{

public:
    Person_m(string name,int age){
     m_name = name;
     m_age  = age;
    }

    bool  operator==(Person_m &p){
        if(this->m_name ==p.m_name && this->m_age == p.m_age ){return  true;}

        return false;
    }
    bool  operator!=(Person_m &p){
        if(this->m_name !=p.m_name && this->m_age != p.m_age ){return  true;}
        return false;
    }

    bool  operator>(Person_m &p){
        if( this->m_age > p.m_age ){return  true;}
        return false;
    }

    bool  operator<(Person_m &p){
        if( this->m_age < p.m_age ){return  true;}
        return false;
    }

private:
    string  m_name;
    int m_age;

};


















#endif //CPPLEARNING_OPERATEOVERLOAD_H
