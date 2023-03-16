//
// Created by nicht on 2023/2/10.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "heap_area.h"
// 堆区
// 也是运行时区域
// 不同于栈区的创建和释放是系统控制的\
// 堆区是由程序员分配释放,程序结束时由操作系统回收该区域
// c++ 中new 关键字开辟内存区域
// 堆区的数据 只要程序员不删除 或 程序未结束之前
int * heap_create(){
    int *a = new  int(10);
    return  a;
}
void  head_create_each_array(){
    int * arr=  new int[10]; // 返回的连续空间的首地址

    for(int i=0; i<10;i++){
        arr[i]=i+100; // 100-109
    }
    for (int i = 0; i < 10; ++i) {
       cout << arr[i] << endl;
    }

    //释放数组要加中括号
    delete[] arr;


}


void delete_create(){
    int *a = new int(10);
    // 删除开辟的内存
    cout << "删除前 "<< *a << endl; //
    delete a;
    // delete a 后必须将指针置为 null
    a=NULL;
    // cout << "删除后 "<< *a << endl; //
    // delete a执行后再次解引用 发现其仍然可以得到 10的数据
    // delete一个指针时，指针指向的内存区域并不会被清空，因为这样会占用CPU周期，此时它是一个危险的指针，
    // 会造成一些未定义的现象。像这样的代码有可能会工作很多年，只会在某个时候崩溃，因为程序中的其他地方发生了一些小的改变导致。
    // 这也很好地解释了为什么我们Delete一个指针后要将其置为NULL，是为了保证我们使用的是一个有效的指针，而不是会造成不可预知错误的野指针。
    // C++不会阻止你写入内存中的任意位置。当我们使用new或分配内存时malloc，C ++会在内存中找到一些未使用的空间，
    // 将其标记为“已分配”（以便不会意外地再次分发），并为我们提供其地址。当使用delete操作指针，
    // C++会将其指向的内存区域标记为“未分配”，并可能将其交给任何要求它的人。我们仍然可以写入并从中读取，
    // 但此时，其他人可能正在使用它。当我们在内存中写入该位置时，可能会覆盖其他位置分配的某些值，
    //特别是类指针，根据类的结构去分配内存大小时，改变内容，那么内存大小也就改变了，再去操作类对象或类成员就会出错。
    //因此，切记，delete指针后，一定要将其置空。
    //原文链接：https://blog.csdn.net/bajianxiaofendui/article/details/86742824
    new int(11);
    new int(12);
   // cout << "覆盖后 "<< *a << endl; //
   //  cout << "覆盖后 "<< *a << endl; //

}



int main(){
    // 在堆上开辟内存 存10
    int * p =  heap_create() ;
    cout << "开辟字节数"<< sizeof (*p)<< endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //删除后必须将指针置为NULL
    delete_create();

    head_create_each_array();




    return 0;
}