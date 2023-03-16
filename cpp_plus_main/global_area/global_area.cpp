//
// Created by nicht on 2023/2/10.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "global_area.h"

//全局变量
int g_a = 10;
int g_b = 10;
// 全局常量
const int c_g_a=10;
const int c_g_b=10;

int main(){
   //全局区
   //全局变量、静态变量、const 修饰的全局常量  字符串常量
   // 属于全局区  不再函数体内定义的变量以及在类中定义的常量
   // 全局变量a的地址4503519416
   // 全局变量b的地址4503519420
    cout << "全局变量a的地址" << (long)&g_a << endl;
    cout << "全局变量b的地址" << (long)&g_b << endl;
   // 上面的全局变量的内存地址 和 下面局部变量的地址可以看出 全部变量和 局部变量的 地址内存段起始地址不同
   // 说明全局变量 和局部变量 是在两个区域中的

   // 静态变量 被static修饰的变量即为静态变量 也会被放到全局区中 从打印的内存地址段 可以看出全局变量和静态变量都在一个内存段内
   //静态变量a的地址4503519424
   //静态变量b的地址4503519428
   static int s_a=10;
   static int s_b=10;
    cout << "静态变量a的地址" << (long)&s_a << endl;
    cout << "静态变量b的地址" << (long)&s_b << endl;

    //常量 常量也是存在全局区中 不过是存到一个独立的常量区的
    // 字符串常量
    cout << "字符串常量地址 "<< (long)&"hello world" << endl;
    // 全局常量  const修饰的全局变量
    cout << "全局常量地址 a "<< (long)&c_g_a << endl;
    cout << "全局常量地址 b "<< (long)&c_g_b << endl;

    //局部常量  const 修饰局部变量
    const  int c_l_a = 10;
    const  int c_l_b = 10;
    cout << "局部常量地址 a "<< (long)&c_l_a << endl;
    cout << "局部常量地址 b "<< (long)&c_l_b << endl;


   //不属于全局区的 局部变量 局部常量
   // 函数体内的变量 const修饰的局部变量 -> 局部常量
   // 局部变量a的地址140732824114920
   //局部变量b的地址140732824114916
   int a=10;
   int b=10;



    cout << "局部变量a的地址" << (long)&a << endl;
    cout << "局部变量b的地址" << (long )&b<< endl;


    return  0;
}






