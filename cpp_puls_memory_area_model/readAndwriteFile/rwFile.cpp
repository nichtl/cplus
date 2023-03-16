//
// Created by nicht on 2023/3/15.
//
#include "iostream"
#include "stdio.h"
using namespace std;

#include "rwFile.h"
int  main(){
    /**
     * fstream提供三种类，实现C++对文件的操作

        ofstream：写操作，由ostream引申而来

        ifstream：读操作，由istream引申而来

        fstream ：同时读写操作，由iostream引申而来
     */


  string filepath = "/Users/xujian8/Desktop/demo.txt";
  ofstream ofs; //写文件流对象
  ifstream ifs; //读
  fstream  fs; // 既读又写 ios::in | ios::out
   /**  文件打开方式 ios::in  为读文件 只能读
   *               ios::out 写文件
    *              ios::ate 初始位置：文件尾
    *              ios::app 追加写
    *              ios::trunc 若文件存在先删除再创建
    *              ios::binary 二进制方式
   **/
  fs.open(filepath,ios::in | ios::out);
  ofs.open(filepath,ios::out);
  if(ofs.is_open()){
      ofs<<"111";
  }
  ofs.close();
  ifs.open(filepath,ios::in);
  if(ifs.is_open()){
      char cb[16]={0};
       // read method 1
//      while(ifs >> cb){
//           cout << cb << endl;
//      }

      // read method 2
//      while(ifs.getline(cb, sizeof(cb))){
//           cout << cb << endl;
//      }
      string  buffer;
      //  method3 全局函数 getline
//      while(getline(ifs,buffer)){
//           cout << buffer << endl;
//      }
       char c;
       while(!ifs.eof()){
           ifs.read(cb, sizeof(cb));
            cout << cb << endl;
       }
//     method 4
//       while( (c= ifs.get())!=EOF ){
//            cout << c << endl;
//       }


//      while(!ifs.eof()){
//            ifs.getline(cb,16);
//        cout <<  cb << endl;
//      }
  }






}