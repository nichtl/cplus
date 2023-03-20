//
// Created by nicht on 2023/3/20.
//
#include "iostream";
#include "stdio.h";

using namespace std;
// 一般类模板 都是定义和实现都是在一个hpp类型文件中
// 模板是两次编译。第一次编译时只对模板进行编译，不生成具体函数，在调用时才生成具体函数。
// 所以在这个项目中，编译main.cpp时，会编译Person.h，而Person.h里只有函数声明，
// 不进行编译。则在链接器寻找函数时，因为寻找不到函数出现错误。
// 而Person.cpp编译时，函数模板只进行第一次编译，因为没有具体使用，
// 所以没有进行第二次编译，没有生成具体函数。所以在main.cpp链接时，因为寻找不到函数出现错误。
#include "Person.hpp"


int main(){
    Person<std::string,int> p("John",18);
    p.showPerson();
};