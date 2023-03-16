//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_CIRCLE_H
#define CPPLEARNING_CIRCLE_H

const double PI = 3.14;
//  公共权限 public
//  保护权限 protect   类内可以访问 类外不能访问  但保护权限 类的继承类可以访问
//  私有权限 private   类内可以访问 类外不能访问  但私有权限 类的继承类不可以访问
class circle {
public:
    double  area(){
        return  2*PI*radius;
    }
    circle(double r){
        radius = r;
    }
private:
    double radius;
};


#endif //CPPLEARNING_CIRCLE_H
