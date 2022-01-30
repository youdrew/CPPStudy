//
// Created by Youdrew on 2022/1/30.
//

#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

#endif //CPPSTUDY_POINT_H

class Point
{
public:
    //Default constructor
    Point(){};
    // construcior
    Point(double new_x, double new_y){};

    /*******Member Fucntions*******/
    //Accessors
    double GetX(){};
    double GetY(){};
    //Mutators
    void SetX(double x){};
    void SetY(double Y){};

private:
    double xCOORD, yCOORD;
};