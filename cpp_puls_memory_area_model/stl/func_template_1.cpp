//
// Created by nicht on 2023/3/15.
//
#include "iostream"
#include "stdio.h"

using namespace std;

#include "func_template_1.h"
int main(){
     int a=10,b=20;
     double c=30;
     t_swap(a,b);// 自动推导类型
     t_swap<int>(a,b); //指定类型
     test<int>(); //当没有参数时 无法自动推导 必须指定 模版类型
     cout << "a="<<a<<" ,b="<<b << endl;

     char  cr[] = "abcdefg";
     int   arr[] ={7,6,8,5,2,1,3,4};
     my_sort(cr,  sizeof(cr)/sizeof(char));
     my_print(cr, sizeof(cr));

     my_sort(arr,  sizeof(arr)/sizeof(int));
     my_print(arr, sizeof(arr)/sizeof(int));


     //普通函数 和模版函数同名且都满足调用条件时优先调用普通函数, 如果想强制使用模版函数 使用空模版参数列表
     my_print_1();
     my_print_1<void>();


    person p(1);
    person q(2);

    bool  f= t_compare(q,p);

     cout << f << endl;



}