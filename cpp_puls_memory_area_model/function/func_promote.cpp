//
// Created by nicht on 2023/2/10.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "func_promote.h"


// 函数形参是可以有默认值的
int add(int a=0, int b=0, int c=10){
    return  a + b + c;
}
// 函数形参是可以有默认值的  如果某个参数有默认值后 从该参数位置从左向右都必须右参数
// 参数c 没有默认值是错误的 error
//int add2(int a=10, int b=0, int c){
//    return  a + b + c;
//}

// 有默认值的定义函数 在具体实现是不能再覆盖函数默认值
// def  声明
int func( int x=10, int y=10);
// implement error
//int func( int x=10, int y=10){
//    return  x+y;
//}
//right
int func( int x, int y){
    return  x+y;
}
int main(){
 cout << add(10,NULL,20) << endl;



}
