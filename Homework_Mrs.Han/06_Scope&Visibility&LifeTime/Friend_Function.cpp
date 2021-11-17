// 【友元函数】
// Created by Youdrew on 2021/11/19.
//

/*
 *      友元函数：
 *
 *              类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
 *              尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
 *              友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。
 *              类的友元关系是单向的。
 *
 */



#include <iostream>
#include <math.h>
using namespace std;




class Point{
public:
    Point(double x=0,double y=0):x(x), y(y) {};
    friend void PrintData(Point Duixiang);               //友元函数的声明
    friend class Line;                                   //友元类的声明

private:
    double x,y;
};

class Line{                                             //友元类的声明
public:
    Line(Point Duixiang1,Point Duixiang2){
        double X_axis,Y_axis;
        X_axis = static_cast<double>(abs(Duixiang1.x-Duixiang2.x));
        Y_axis = static_cast<double>(abs(Duixiang1.y-Duixiang2.y));
        length = static_cast<double>(sqrt(X_axis*X_axis+Y_axis*Y_axis));
    };

    double getLength(){
        cout << static_cast<double>(length) << endl;
    };
private:
    double width,length;
    int style;
};


void PrintData(Point Duixiang){                          //友元函数的定义
    cout << Duixiang.x << "," << Duixiang.y << endl;
}

int main(){
    Point point1(12,4);
    PrintData(point1);

    Point point2(-12,-5);
    PrintData(point2);

    Line line1(point1,point2);
    line1.getLength();
}
