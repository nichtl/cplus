//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "func_placeholer.h"

// c++ 中函数的形参列表里可以有占位参数,用来做占位,调用函数时必须填补该位置

// use eg
// 返回值类型 函数名称 (数据类型){}
// 在现阶段函数的占位参数存在意义不大,在以后高级进阶使用中会使用到

void func(int a,int){
    // 由于只是占位符 没有形参名称 无法使用
    // 但是在实际使用过程中必须传占位参数
     cout << "sum = " << a << endl;
};
int main(){
    func(10,10);// 占位参数必须填补
    return 0;
};