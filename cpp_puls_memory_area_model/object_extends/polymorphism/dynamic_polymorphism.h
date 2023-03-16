//
// Created by nicht on 2023/3/2.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_DYNAMIC_POLYMORPHISM_H
#define CPPLEARNING_DYNAMIC_POLYMORPHISM_H

// 动态多态
class dynamic_polymorphism {

};

class Calculator{
public:
//    int getResult(string optr){
//        int result = 0;
//        if(optr=="+"){result =   m_a+m_b;}
//        return  result;
//    }
    virtual  ~Calculator()=0;
    int m_a;
    int m_b;
};





#endif //CPPLEARNING_DYNAMIC_POLYMORPHISM_H
