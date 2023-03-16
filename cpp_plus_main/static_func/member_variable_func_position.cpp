//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "member_variable_func_position.h"

int  Persion::m_B=9;

int main(){
    Persion p;
    //c++ 会给每个空对象分配一个字节
    //每个对象都是有独一无二的内存空间
    //如果不是空的就按实际字节分配
     cout << sizeof(p)<< endl;
}