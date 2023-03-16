//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "cpp_friend.h"

// 友元函数
// 在程序中 有些私有属性 不想通过类中函数暴露 也想让类外特殊的一些函数或者类进行访问 就需要用到友元
// 友元的三种类型
// 全局函数做友元
// 类做友元
// 成员函数做友元


int main(){
    BRoom b;
    visiter v;
    member_function mv;

    v.visitRoom();
    visitRoom(b);
    mv.member_can_visit();
}
















