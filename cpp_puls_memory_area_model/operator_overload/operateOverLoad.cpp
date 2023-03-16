//
// Created by nicht on 2023/2/15.
//


#include "operateOverLoad.h"

int main(){
    Person p1;
    Person p2;
    p1.m_a=1;
    p2.m_a=1;
    p1.m_b=2;
    p2.m_b=2;
    Person p3=p1 + p2;
    cout << "a "<< p3.m_a<<"b "<<p3.m_b << endl;
    cout << p3  << endl;
    cout << p3  << endl;
    cout << p3  << endl;


    myInterger myi ;
    cout <<   (++myi)++.getM_a() << endl;
    cout << myi.getM_a()<< endl;
     // cout <<   ((myi++)++)++.getM_a()   << endl; 后置++ 返回值不加const 修饰 这行代码是可以编译通过的但是除了第一次++ 其余两次后置++都是作用于返回的临时变量上的
     // 为什么更为直观 重载后置++ 返回值加上const 不允许对返回值修改

    Age b(new int(2));
    Age c(new int(3));
    Age d(new int(4));
    Age g;
    //     Age g=b; // 报错了 这是因为g的赋值是调用拷贝构造函数 不是 是通过赋值运算符重载
    //    拷贝构造函数 以及 赋值运算符重载
    //    1.两者最大的不同就是
    //
    //    当一个对象已经存在，
    //    来初始化另一个新对象时，
    //    （Point c=a;） 会调用拷贝构造函数。
    //
    //    当两个对象都已经存在，
    //    实现赋值时，（a=b; ）
    //    是通过赋值运算符重载，不调用拷贝构造函数
      cout << b.getM_age() << endl;
      cout << g.getM_age() << endl;
//    Age e;
//    Age f;

     d = b = c;


    cout << "g = " <<*g.getM_age() << endl;

//    cout <<" e = " << *e.getM_age() << endl;
//    cout <<" f = " << *f.getM_age() << endl;
    cout << "d = " <<*d.getM_age() << endl;
    cout << "c = " <<*c.getM_age() << endl;
    cout << "b = " <<*b.getM_age() << endl;

    // 关系运算符重载

    Person_m lisi("lisi",16);
    Person_m wangwu("wangwu",17);

    if(lisi >wangwu){
         cout << "lisi " << endl;
    }
    if(lisi<wangwu){
         cout << "wangwu" << endl;
    }




}