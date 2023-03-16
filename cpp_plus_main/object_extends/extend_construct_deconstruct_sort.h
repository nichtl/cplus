//
// Created by nicht on 2023/2/23.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_EXTEND_CONSTRUCT_DECONSTRUCT_SORT_H
#define CPPLEARNING_EXTEND_CONSTRUCT_DECONSTRUCT_SORT_H

// 继续类 的类的构造 和析构顺序
class extend_construct_deconstruct_sort {

};

class Base_A{
public:
    Base_A(){
         cout << "Base_A construct " << endl;
    }

    ~Base_A(){
         cout << "Base Destroy Base_A " << endl;
    }
};


class  Son : public Base_A{

public:
    Son(){
        cout << "son constructor"<<endl;
    }

    ~Son(){
         cout << "son deconstructor" << endl;
    }



};





#endif //CPPLEARNING_EXTEND_CONSTRUCT_DECONSTRUCT_SORT_H
