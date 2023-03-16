//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_STATIC_FUNC_H
#define CPPLEARNING_STATIC_FUNC_H


class static_func {



public:
    static  void  public_static_print(){cout << "1111" << endl;}
   // 静态函数也有访问权限 私有的类外访问不到
private:
    static  void  private_static_print(){}
};


#endif //CPPLEARNING_STATIC_FUNC_H
