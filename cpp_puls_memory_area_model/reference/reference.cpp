//
// Created by nicht on 2023/2/10.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "reference.h"
// 引用相当于给变量取一个别名
// 指针是定义了一个变量 这个变量存的是一块内存的地址

// 引用 和指针的区别
// "指针指向一块内存，它的内容是所指内存的地址；而引用则是某块内存的别名，引用不改变指向。"

// 参数为copy实参 一块内存
void mySwap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
}

//参数为一块内存地址
void mySwap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 参数为 一块内存的别名
void mySwapReference(int & a, int& b) {
    int temp =a;
    a=b;
    b=temp;

}
// 返回引用
int&  return_reference(){
    int a=10;
    return  a;
}
// 通过static 提升变量生命周期 全局区释放是在程序结束后系统自动释放
int&  return_reference_01(){
     static int a=10;
    return  a;
}

//常量引用 放置函数修改
void showValue( const int &value){
     //  value  =129 常量引用不能修改数据
     cout << value << endl;
}

int main(){
    // 引用本质
    // 引用的本质在c++内部是一个指针常量

    // 发现是引用,转换为 int* const ref = &a;
    //  void func(int & ref){
    //   ref = 100 ;  ref是引用 转换为 *ref=100
    //  }
    //  int main(){
    //   int a =10 ;
    //   自动转换为 int* const ref = &a; 指针常量是指针指向不可变,这也说明为什么引用不可更改
    //   int &ref = a; // 引用必须引用一块合法的内存区域
    //   int &ref = 10; 10是字面量 并不指向一块内存区域
    //   const int &ref = 10; // 加上const 可以 相当于编译器帮我们创建一块临时的区域存10 int temp =10;  const int &ref   = temp;
    //   ref = 20;  内部发现 ref是引用自动帮我们转换为 *ref = 20;
    //
    //  }



    // 引用使用注意事项
    // 1 引用创建时必须初始化
    // 2 引用创建后不能再改变
    // 引用做函数参数 如果不想方法内修改实参 加上 cosnt  eg  const int &a

    //  常量引用
    int gh =10;
    showValue(gh);


    // 引用做函数的返回值
    // 1. 不要返回局部变量的引用  局部变量在内存位于栈区 方法执行完就会被回收

     int &ref = return_reference();
      cout <<"ref="<< ref << endl;
      cout <<"ref="<< ref << endl;


    // 函数的调用可以作为左值
    //相当于引用 再赋值
    return_reference()=1000;
    cout <<"ref="<< ref << endl;
    cout <<"ref="<< ref << endl;




    int a = 10 ;//开辟4个字节的内存;
    int c= 20;
    mySwap(a,c); // 值传递 函数形参是对a c 值的 copy 不会改变实参

    mySwap(&a,&c); // 通过地址传递可以影响到实参

    mySwapReference(a,c);//引用传递 也可以影响到实参

    cout << "a="<< a << endl;
    cout << "c="<< c << endl;

    // int  &b ; 必须初始化
    int  &b = a; //
     //&b=c; 不能改为c的别名


    b=20;// 改变了同一块内存的值

     cout << "a="<< a << endl;
     cout << "b="<< b << endl;

     b=100;

    cout << "a="<< a << endl;
    cout << "b="<< b << endl;


}
