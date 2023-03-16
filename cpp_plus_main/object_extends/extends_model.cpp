//
// Created by nicht on 2023/2/22.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "extends_model.h"

int main (){
     son s;
     //sizeof 是16 子类会继承父类所有权限的属性 即使是不能访问
     // 编译器会隐藏不能访问的属性 一旦访问编译器就会报错不能访问
     cout << sizeof(s) << endl;

     


}