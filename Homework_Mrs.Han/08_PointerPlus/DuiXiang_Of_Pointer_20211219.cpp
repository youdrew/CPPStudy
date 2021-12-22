// 【对象指针】
// Created by Youdrew on 2021/12/19.
// 指向一个对象的指针。


#include <iostream>
#include "/Users/youdrew/CLionProjects/CPPStudy/Homework_Mrs.Han/05_Class&Object/Circle.h"
using namespace std;


int main(){
    Circle circle1(2,1,2);
    Circle *ptr1;                    // 声明对象指针
    ptr1 = & circle1;                // 赋值对象指针

    cout << ptr1->getXcoord();       // 调用circle1里面的函数 需要加->
    cout << ptr1->getYcoord();
    cout << endl;

    return 0;
}