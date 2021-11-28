// 【球类】
// Created by Engine on 2021/11/23.
// This header file contains the Circle class declaration.
#ifndef CIRCLE_H
#define CIRCLE_H
#include <cmath>

class Circle
{
private:
    double radius; // Circle radius
    int centerX, centerY; // Center coordinates
public:
    Circle() // Default constructor
    {
        // accepts no arguments
        radius = 1.0;
        centerX = centerY = 0;
    }
    Circle(double r) // Constructor 2
    {
        // accepts 1 argument
        radius = r;
        centerX = centerY = 0;
    }
    Circle(double r, int x, int y) // Constructor 3
    {
        // accepts 3 arguments
        radius = r;
        centerX = x;
        centerY = y;
    }

    //设定半径
    void setRadius(){               //默认设置半径值，如果没有输入值，则自动生成一个半径值
        radius=rand();
    }
    void setRadius(double r)        //重载，如果有输入半径的值的话
    {
        radius = r;
    }


    //设定位置
    void setposition(){centerX=rand();centerY=rand();}
    void setposition(int x,int y){centerX=x;centerY=y;}


    int getXcoord()
    {
        return centerX;
    }
    int getYcoord()
    {
        return centerY;
    }
    double findArea()
    {
        return 3.14 * pow(radius, 2);
    }

};

// End Circle class declaration
#endif
