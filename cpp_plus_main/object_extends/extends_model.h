//
// Created by nicht on 2023/2/22.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_EXTENDS_MODEL_H
#define CPPLEARNING_EXTENDS_MODEL_H

//  继承后的对象模型
//  子类继承后的对象模型
class extends_model {



};


class  Base{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class  son : public  Base{
public:
    int m_d;
};




#endif //CPPLEARNING_EXTENDS_MODEL_H
