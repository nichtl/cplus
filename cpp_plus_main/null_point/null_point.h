//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_NULL_POINT_H
#define CPPLEARNING_NULL_POINT_H

//空指针访问成员函数
// c++ 中空指针也是可以调用成员函数的,但是也要注意也没有用到this指针
//如果有用到this 需要判断this是否为空指针
class null_point {

};

class Person{


public:
    void showClassName() const{ cout << "this is Person class" << endl;}
    void showPersonAge() const{
        if(this !=NULL){
            cout << "this is Person age" <<this->age << endl;
        }
        else{
             cout << "this is Person age"<<12  << endl;
        }
    }

private:
    int age;
};


#endif //CPPLEARNING_NULL_POINT_H
