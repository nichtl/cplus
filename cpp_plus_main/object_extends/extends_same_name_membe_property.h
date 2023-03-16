//
// Created by nicht on 2023/2/23.
//
#include "iostream";
#include "stdio.h";
#include "string"
using namespace std;

#ifndef CPPLEARNING_EXTENDS_SAME_NAME_MEMBE_PROPERTY_H
#define CPPLEARNING_EXTENDS_SAME_NAME_MEMBE_PROPERTY_H

// 父类 子类 同名成员属性 和 同名成员函数 访问

class extends_same_name_membe_property {

};

class PA{
public:
    PA(string mname){name =mname; }
    void print(){ cout << name << endl;}
    void print(int i){ cout << i << endl;} //
    string  name;
};

class  PB : public  PA{
public:
    PB(string paname,string pbname): PA(paname){name =pbname; }
    void print(){ cout << name << endl;}
    string name;
};

#endif //CPPLEARNING_EXTENDS_SAME_NAME_MEMBE_PROPERTY_H
