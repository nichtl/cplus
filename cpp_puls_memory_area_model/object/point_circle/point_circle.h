//
// Created by nicht on 2023/2/13.
//
#pragma once
#include "iostream";
#include "stdio.h";

using namespace std;

#ifndef CPPLEARNING_POINT_CIRCLE_H
#define CPPLEARNING_POINT_CIRCLE_H





class  point{
public:
    point(int x, int y);
    ~point();
//    point(const point& p);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

private:
    int x;
    int y;
};

class circle {
public:
    circle(const point &center, int r);
    ~circle();
    const point &getCenter() const;

    void setCenter(const point &center);

    int getR() const;

    void setR(int r);

private:
    point center;
    int r;
};

void judgePointPositionRelativeToCircle(const point &point, const circle &circle);

#endif //CPPLEARNING_POINT_CIRCLE_H
