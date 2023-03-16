//
// Created by nicht on 2023/2/10.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "global_area.h"

int main(){
   //全局区
   //全局变量 、静态变量、常量
  // 属于全局区


   //不属于全局区的 函数体内的变量
   int a=10;
   int b=10;

    cout << "局部变量a的地址" << &a << endl;
    cout << "局部变量b的地址" << &b<< endl;


    return  0;
}






