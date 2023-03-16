//
// Created by nicht on 2023/2/23.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "extends_same_name_membe_property.h"

int main (){
    PB pb("a_name", "b_name");
      cout << pb.name << endl; // 访问自己的名字
      cout << pb.PA::name << endl; // 访问父类指定作用域]
    // 同名函数访问
    pb.print();
    pb.PA::print();
    // pb.print(100); // 虽然父类子类只有这一个重载的有参函数 但是子类会隐藏掉 父类的所有的同名函数 必须知道作用域
    pb.PA::print(1);
}