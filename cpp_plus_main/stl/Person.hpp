//
// Created by nicht on 2023/3/20.
//
#pragma once
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_PERSON_H
#define CPPLEARNING_PERSON_H

//类模板分文件实现
template<class  T1,class  T2>
class Person {
public:
    Person(T1 name,T2 age);
    void showPerson();
    T1 m_name;
    T2 m_age;
};

template <class  T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age) {
    m_name = name;
    m_age  = age;
}

// 类外实现
template <class  T1,class T2>
void Person<T1,T2> ::showPerson() {
    std::cout << this->m_name << std::endl;
    std::cout << this->m_age  << std::endl;
}

#endif //CPPLEARNING_PERSON_H
