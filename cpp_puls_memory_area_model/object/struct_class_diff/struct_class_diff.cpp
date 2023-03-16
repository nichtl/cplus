//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "struct_class_diff.h"


int main(){

    struct_class_diff_class class_a;
    //  class_a.class_a =10; 类外不可以访问
     //'class_a' is a private member of 'struct_class_diff_class'

    struct_class_diff_struct struct_a;
    struct_a.struct_a =10;

}