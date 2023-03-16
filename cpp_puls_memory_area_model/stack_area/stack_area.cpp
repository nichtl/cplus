//
// Created by nicht on 2023/2/10.
//
#include "iostream";
#include "stdio.h";

using namespace std;


// 程序运行后
//栈区
#include "stack_area.h"
//函数里不要返回局部变量的引用
int *  func(int arg){
    //同样形参也是在栈上
    int a =10;
    return &a;
}

int main(){
  // 接收a的地址
  int * p =  func(1);
  cout <<  *p << endl; // 10
  cout <<  *p << endl; //32767 乱码  a放在栈上 第一次可以打印出10 是编译器做了保留 第二次乱码 编译器释放了





}