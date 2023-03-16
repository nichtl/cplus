//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "func_overload.h"


// 函数的重载
// 作用:函数名称可以相同,提高复用性
// 函数重载满足条件
//  - 同一个作用域下
//  - 函数名称相同
//  - 函数参数类型不同,或者个数不同,或者顺序不同
//  函数的返回值不能作为函数重载的条件 也就是说返回类型必须是一样的
// use eg
// func_overLoad
void func(){
     cout << "func call" << endl;
}
// over load
void func( int a){
    cout << "func call a=" << a << endl;
}
//

// 引用作为函数参数 坑
void func_reference(int &a){
     cout << "func int &a call" << endl;
}

void func_reference(const int &a){
    cout << "func  const int &a call" << endl;
}
// 函数重载碰到默认参数 keng

void  func_default(int a){
     cout << "func_default a " <<a << endl;
}


void  func_default(int a,int b=10){
    cout << "func_default a,b =" <<a <<","<<b<< endl;
}
int main(){
    func();
    func(10);

    int a= 10 ;
    func_reference(a);// func int &a call

    func_reference(10); //func  const int &a call
    // func_default(10); //当函数重载时 给与了默认值时   func_default(int a) 可以调用
                      // func_default(int a,int b=10) b有默认值 可以调用 就会报错
}

















