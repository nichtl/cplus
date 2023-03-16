//
// Created by nicht on 2023/3/2.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_STATIC_POLYMORPHISM_H
#define CPPLEARNING_STATIC_POLYMORPHISM_H

// 静态多态
class static_polymorphism {

};


class Animal{
public:
   virtual void speak()=0;
   Animal(){ cout << "animal create" << endl;}
   ~Animal(){ cout << "animal destory" << endl;}

};

class Dog: public Animal {
public:
    void speak() { cout << " dog speak  " << "wang" << endl; }

    Dog() { cout << "dog create " << endl; }

    ~Dog() { cout << " dog destroy " << endl; }

};
class  Cat : public Animal {
public:
    void speak() { cout << "cat speak " << " miao " << endl; }

    Cat() { cout << "cat create" << endl; }

    ~Cat() { cout << "cat destroy" << endl; }
};
//地址早绑定  在编译阶段确定函数地址
void animalspeak(Animal  & animal){
     animal.speak();
};


void  create(){
    Dog d;
    Cat c; //分配于栈上
// Dog * d = new Dog(); 分配于堆上
// Cat * c = new Cat();
// delete d;
// delete c;
};

// 如果想让对应的子类执行重写函数 需要 在父类函数 加上  virtual 使其变为虚函数

// 多态原理

#endif //CPPLEARNING_STATIC_POLYMORPHISM_H
