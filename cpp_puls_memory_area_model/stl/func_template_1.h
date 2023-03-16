//
// Created by nicht on 2023/3/15.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_TEMPLATE_1_H
#define CPPLEARNING_TEMPLATE_1_H


class template_1 {

};

template<typename T > void t_swap(T &a,T &b){
    T tmp =a;
    a=b;
    b=tmp;
}
template <class  T> void test(){
     cout << 2 << endl;
};


// 数组排序 从大到小 选择排序
template <class  T>
void my_sort(T arr[], int len){
    for (int i=0;i<len ;++i) {
        int max = i;
        for (int j = i+1; j <len; ++j) {
            if(arr[max]<arr[j]){
                max = j;
            }
        }
        if(max!=i){
            t_swap(arr[i],arr[max]);
        }
    }
}
template<class  T>
void my_print(T arr[],int len){
    for (int i = 0; i < len; ++i) {
         cout << arr[i] <<",";
    }
}


template<class  T>
void my_print_1(){
     cout << "调用模板函数" << endl;
}

void my_print_1(){
     cout << "调用普通函数" << endl;
}
class  person{
public:
    person(int age){m_age = age;};
    int m_age;
};

template <class  T>
const bool  t_compare(T &a,T &b) {
    if(a>b){return true;}
    return false;
}

// 模版重载 实现特定比较逻辑

template <>
const bool  t_compare(person &a,person &b) {
    if(a.m_age>b.m_age){return true;}
    return false;
}




#endif //CPPLEARNING_TEMPLATE_1_H
