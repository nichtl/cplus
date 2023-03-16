//
// Created by nicht on 2023/2/13.
//
#include "iostream";
#include "stdio.h";

using namespace std;

#include "point_circle.h"
circle::circle(const point &center, int r) : center(center), r(r) { cout << "circle create" << endl;}
circle::~circle() {
    cout << "~circle" << endl;
}

const point &circle::getCenter() const {
    return center;
}

void circle::setCenter(const point &center) {
    circle::center = center;
}

int circle::getR() const {
    return r;
}

void circle::setR(int r) {
    circle::r = r;
}



point::~point() noexcept {
     cout << "~point " << endl;
}
point::point(int x, int y) : x(x), y(y) { cout << "point construct " << endl;}
//point::point(const point &p) {
//     cout << "copy construct" << endl;
//      x = p.getX();
//      y = p.getY();
//}
int point::getX() const {
    return x;
}

void point::setX(int x) {
    point::x = x;
}

int point::getY() const {
    return y;
}

void point::setY(int y) {
    point::y = y;
}

void judgePointPositionRelativeToCircle(const point &point, const circle &circle){
  int distance =   ( point.getX() - circle.getCenter().getX() ) * ( point.getX() - circle.getCenter().getX() )+
    ( point.getY() - circle.getCenter().getY() )  * ( point.getY() - circle.getCenter().getY() );
  int r = circle.getR()*circle.getR();

  if(r == distance){ cout << " 点在圆上" << endl;}
  else if(r < distance){ cout << "点在圆外" << endl;}
  else{
       cout << "点在圆内" << endl;
  }
}

int main(){
   point center(10,0);
   circle c(center,10);

   point  p(10,10);

   point p1 = p;
     circle c1(c);

     cout << "c1 x,y"<<c.getCenter().getX()<<","<<c.getCenter().getY() << endl;

    center.setX(2);
    center.setY(3);
    cout << "c1 x,y"<<c.getCenter().getX()<<","<<c.getCenter().getY() << endl;


    judgePointPositionRelativeToCircle(p,c);










}

















