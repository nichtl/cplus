//
// Created by nicht on 2023/2/23.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "multiple_extends.h"
int main(){
    //base_d c;
    base_e e;
      cout << e.age << endl;
      cout << e.m_a << endl;
      cout << e.base_b::m_a << endl;
      cout << e.base_d::m_a << endl;



//
//     cout << sizeof(c) << endl;
//     cout << sizeof(e) << endl;
//     cout << sizeof(e.base_d::age) << endl;
//
//     e.base_a::age=9;
//
//     cout << sizeof(e) << endl;
//     cout << sizeof(e.base_d::age) << endl;

}
// virtual
// VS中, 正常情况下, 所有虚函数都写在一个虚函数表中, 即派生类使用基类的虚函数表, 不会新建自己的虚函数表;
//如果使用虚继承, 则派生类, 新建虚函数表和虚继承表, 即额外增加8个字节(两个表);
//50 60 d1 03   01 00 00 00   │ ········P`······ │  虚函数表和虚继承表
//64 00 00 00   64 00 00 00   2c 01 00 00   64 00 00 00

// public
// 64 00 00 00   64 00 00 00   64 00 00 00   2c 01 00 00

//e.base_b
//   b0 b0 c1 0e   01 00 00 00   │ ················ │
//   c8 00 00 00   02 00 00 00   c8 b0 c1 0e   01 00 00 00   │ ················ │
//   2c 01 00 00   03 00 00 00   90 01 00 00   04 00 00 00   │ ,··············· │
//   64 00 00 00   09 00 00 00


//e.base_d


















