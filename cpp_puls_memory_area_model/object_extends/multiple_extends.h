//
// Created by nicht on 2023/2/23.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_MULTIPLE_EXTENDS_H
#define CPPLEARNING_MULTIPLE_EXTENDS_H

// 多重继承 仅作了解 不推荐
class multiple_extends {

};

class  base_a {
public:
    base_a(){m_a=100; age=1;}
    int m_a;
    int age;
};



class  base_b :virtual public base_a{
public:
    base_b(){m_b=200; age=2;}
    int m_b;
    int age;
};

class  base_d :virtual public base_a{
public:
    base_d(){m_d=300; age=3;}
    int m_d;
    int age;
};

class base_e : public base_b,public  base_d{
public:
    base_e(){m_e=400;age=4;}
    int m_e;
    int age;
};

class  base_c : public  base_a , protected  base_b{
public:
    base_c(){m_c=300;}
    int m_c;
};


// 菱形继承
// e 继承了bd
// bd 都继承了a
// 重复继承 会重复创建两个 a






#endif //CPPLEARNING_MULTIPLE_EXTENDS_H
