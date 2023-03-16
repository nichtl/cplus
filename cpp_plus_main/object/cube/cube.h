//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_CUBE_H
#define CPPLEARNING_CUBE_H
//求一个立方体 面积 体积
class cube {
public:
    cube(int len, int  c_width, int c_height){
        length = len;
        width = c_width;
        height = c_height;
    }

    void setLength(int len){length = len;}
    void setHeight(int s_height) { height = s_height;}
    void setWidth(int s_width) { width = s_width;}
    int  getHeight() { return height; }
    int  getWidth() { return width; }
    int getLength(){return  length;}

    int  getArea(){
        return  2*(getLength()*getWidth()+getLength()*getHeight()+getWidth()*getHeight());
    }
    int  getVolume(){
        return  getLength()*getWidth()*getHeight();
    }

    bool areaEquals(cube &c){
        if( c.getLength() == getLength()
            && c.getWidth() == getWidth()
            && c.getHeight() == getHeight()){
            return  true;
        }
        if(c.getArea() == getArea()){return  true;}
        return false;
    }



private:
    int length;
    int width;
    int height;

};
bool  areaIsEqual(cube &c1, cube &c2){

    if( c1.getLength() == c2.getLength()
       && c1.getWidth() == c2.getWidth()
       && c1.getHeight() == c2.getHeight()){
        return  true;
    }
    if(c1.getArea() == c2.getArea()){return  true;}
    return false;
}


#endif //CPPLEARNING_CUBE_H
