//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_MEMBER_VARIABLE_FUNC_POSITION_H
#define CPPLEARNING_MEMBER_VARIABLE_FUNC_POSITION_H

// 成员变量  成员函数 分开储存
class member_variable_func_position {



};
class Persion{
    // 空的为1
    int m_A; //  sizeof = 4
    static int m_B;  // sizeof =4 static 和成员变量分开存的
    void func();// 非静态成员函数不属于类 对象上
   static void func2();//静态成员函数 也不属于类对象上
};


#endif //CPPLEARNING_MEMBER_VARIABLE_FUNC_POSITION_H
