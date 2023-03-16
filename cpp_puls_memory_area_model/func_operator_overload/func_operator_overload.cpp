//
// Created by nicht on 2023/2/20.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "func_operator_overload.h"

int main(){
  MyPrint print;
  print("8909");
  // MyPrint() 一个对象每次加小括号 会创建出一个匿名对象
  // 在当前行执行完毕 匿名函数对象 会被立刻释放
  MyPrint()("hello world"); // 匿名函数对象

}