//
// Created by Youdrew on 2021/11/18.
//

#include "Point.h"
#include <iostream>
using namespace std;

int main() {
    Point a(4, 5);                                              //定义对象a，其构造函数使count增1
    cout <<"Point A: "<<a.getX()<<", "<<a.getY(); Point::showCount(); //输出对象个数
    Point b(a);                                                       //定义对象b，其构造函数回使count增1
    cout <<"Point B: "<<b.getX()<<", "<<b.getY(); Point::showCount(); //输出对象个数

    TestVar = 1; // 在.h中定义的外部变量
    return 0;
}