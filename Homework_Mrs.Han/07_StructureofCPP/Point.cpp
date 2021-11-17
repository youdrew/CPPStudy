//
// Created by Youdrew on 2021/11/18.
//



// 这里面存放类的实现

#include "Point.h"
#include <iostream>
using namespace std;

int Point::count=0;                 //使用类名初始化静态数据成员

Point::Point(const Point &p) : x(p.x), y(p.y)
{
    count++;
}

void Point::showCount()
{
    cout << " Object count = " << count << endl;
}