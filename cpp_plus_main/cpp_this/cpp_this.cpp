//
// Created by nicht on 2023/2/14.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "cpp_this.h"
// this指针
// cpp 提供特殊的this指针用于确定实际运行过程中访问的具体的对象实例

int main(){
    Person person(1);
    Person  p =  person.getPerson();
    cout << p.getAge()  << endl;

}