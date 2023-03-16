//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_CPP_THIS_H
#define CPPLEARNING_CPP_THIS_H


class cpp_this {




};

class Person{
public:
    Person(int age){
        this->age = age;
    }
    Person getPerson(){
      return  *this;  //值返回调用copy构造函数 每次返回都是新的对象
    }
    Person& getPerson2(){
        return  *this; //始终返回自身
    }
    int getAge(){return  age;}

private:
    int age;
};


#endif //CPPLEARNING_CPP_THIS_H

















