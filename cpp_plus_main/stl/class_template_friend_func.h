//
// Created by nicht on 2023/3/20.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_CLASS_TEMPLATE_FRIEND_FUNC_H
#define CPPLEARNING_CLASS_TEMPLATE_FRIEND_FUNC_H

// 类模版友元函数
class class_template_friend_func {

};
template<class  T1,class T2>
class  Personfc;

template<class  T1,class T2>
void print_2(Personfc<T1,T2> &p){
    std::cout<<"类外实现"<<std::endl;
    std::cout << "name== "<<p.m_name<<",  age=="<<p.m_age << std::endl;
}
template<class  T1,class  T2>
class Personfc {
    // 类内实现全局友元函数
   friend void print(Personfc<T1,T2> &p){
         std::cout <<"类内实现"<<std::endl;
         std::cout << "name== "<<p.m_name<<",  age=="<<p.m_age << std::endl;
    }
    // 类模板 友元函数 全局函数 类外实现 加空参数模版 标记我模版函数
    // 否则会被当 普通 函数 而 类外实现的是模版函数 导致找不到
    friend void print_2<>(Personfc<T1,T2> &p);
public:
    Personfc(T1 name,T2 age){
       m_name = name;
       m_age = age;
   };
    void showPerson();
private:
    T1 m_name;
    T2 m_age;
};



#endif //CPPLEARNING_CLASS_TEMPLATE_FRIEND_FUNC_H
