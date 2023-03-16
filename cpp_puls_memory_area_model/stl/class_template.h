//
// Created by nicht on 2023/3/16.
//
#include "iostream"
#include "stdio.h"

#ifndef CPPLEARNING_CLASS_TEMPLATE_H
#define CPPLEARNING_CLASS_TEMPLATE_H

// 类模版
// 类模版作用 建立一个通用类 类中的成员 数据类型可以不具体制定 用一个虚拟的类型来代替
class class_template {


};

// 类模版
// 类模版作用 建立一个通用类 类中的成员 数据类型可以不具体制定 用一个虚拟的类型来代替
template<class  NameType=std::string ,class AgeType=int>
class Person{
public:
    Person(NameType name,AgeType age){
        this->m_name = name;
        this->m_age  = age;
    }
    void print(){
         std::cout << "m_name ="<<m_name <<",m_age="<<m_age<< std::endl;
    }
    NameType m_name;
    AgeType  m_age;
};
// 类模板对象作函数参数  直接指定模版参数类型
void  showPerson(Person<std::string,int> &p){
  p.print();
};

// 类模板对象作函数参数  类参数模板化
template <class  T1,class T2>
void showPerson_1(Person<T1,T2> &p){
     std::cout << "t1 类型 = "<< typeid(T1).name()  << std::endl;
    std::cout  << "t2 类型 = "<< typeid(T2).name()  << std::endl;
    p.print();
}

// 类模板化

template <class  T>
void showPerson_2(T &p){
    std::cout << "T 类型 = "<< typeid(T).name()  << std::endl;
    p.print();
}




class  Person1{
public:
    void showPerson1(){
         std::cout << "this  is  showPerson1" << std::endl;
    }
};


class  Person2{
public:
    void showPerson2(){
        std::cout << "this  is  showPerson2" << std::endl;
    }
};

template<class  T>
class  myClass{
public:
    T obj;
    void func1(){
        obj.showPerson1();
    }
    void func2(){
        obj.showPerson2();
    }


};





#endif //CPPLEARNING_CLASS_TEMPLATE_H
