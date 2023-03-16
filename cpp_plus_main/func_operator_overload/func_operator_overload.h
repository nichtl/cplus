//
// Created by nicht on 2023/2/20.
//
#include "iostream";
#include "stdio.h";
#include "string"
using namespace std;

#ifndef CPPLEARNING_FUNC_OPERATOR_OVERLOAD_H
#define CPPLEARNING_FUNC_OPERATOR_OVERLOAD_H


class func_operator_overload {

};

class MyPrint{
public:
    // 重载函数运算符
    // 重载 () 小括号 又称为伪函数
    void operator()(string text){
         cout << "func overload  call  "<< text << endl;
    }

};


#endif //CPPLEARNING_FUNC_OPERATOR_OVERLOAD_H
