//
// Created by nicht on 2023/3/16.
//
#include "iostream";
#include "stdio.h";

#include "class_template.h"

int main(){
    std::string  name="pkg";
    int age=0;
    //必须显式指定模版参数 不能自动推导
    Person<std::string,int> p(name,age);

    // 类模板参数可以有默认类型
    Person<std::string> p1(name,age);
   //  Person<int> p2(name,age);   错误默认参数模版 只能按参数顺序默认 不能跳跃指定参数类型
    Person<> p3(name,age);

    showPerson(p);


    // 类模板 中的成员函数 不是在一开始时创建 而是在运行到调用的阶段时才会去创建
    myClass<Person1> m1;
    m1.func1();
    //m1.func2(); error  In template: no member named 'showPerson2' in 'Person1'

    myClass<Person2> m2;
    // m2.func1(); error In template: no member named 'showPerson1' in 'Person2'
    m2.func2();

    // 类模板对象作函数参数
    showPerson(p);
    showPerson_1(p);
    showPerson_2(p); //


}