//
// Created by nicht on 2023/2/20.
//
#include "iostream";
#include "stdio.h";
#include "string"
using namespace std;

#ifndef CPPLEARNING_OBJECT_EXTENDS_H
#define CPPLEARNING_OBJECT_EXTENDS_H


class object_extends {

};

class  animal{
public:
    virtual void animal_call()=0;
    virtual void animal_name()=0;

protected:
    string name;
    string call;
public:
    string price;
private:
    string t;
};
// 公共继承  保持原有继承父类 的属性权限
// 在父类里是public 在子类里仍然是public
// 在父类里是protected  在子类里仍然是protected
// 公共继承访问不到父类的 private 域 的属性
class  dog : public  animal{
public:
    dog(string m_name){name = m_name;}
    void animal_name(){
         cout << "animal_name = "<< name << endl;
    }
    void animal_call(){
         cout << "wang wang" << endl;
    }
};
// 保护继承
// 父类的 public 和 protected 在子类中全部变为protected 权限的 属性
//  访问不到父类的 private 域 的属性
class dog1 :protected  animal{

};


// 私有继承
// 父类中公共权限 的属性 和 保护权限的 属性 在子类中全部变为 private 私有权限
//  访问不到父类的 private 域 的属性
class dog2 : private  animal{

};



#endif //CPPLEARNING_OBJECT_EXTENDS_H
