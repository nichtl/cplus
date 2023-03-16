//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";
#include "string"
using namespace std;

#include "cube.h"


int main(){
    cube cube1(10,10,10);
    cube cube2(10,10,10);
      cout << cube1.getArea() << endl;
      cout << cube1.getVolume() << endl;
    string  r =  areaIsEqual(cube1,cube2)?"yes":"no";
    string  y = cube1.areaEquals(cube2)?"yes":"no";
       cout << "inner func compare area is equals = "<< y << endl;
       cout << "global func compare area is equals = "<< r << endl;
    return 0;
}