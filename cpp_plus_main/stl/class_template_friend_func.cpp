//
// Created by nicht on 2023/3/20.
//
#include "iostream"
#include "stdio.h"

using namespace std;

#include "class_template_friend_func.h"

int main(){

    Personfc<std::string,int> p("John",18);
    print(p);
    print_2(p);

}