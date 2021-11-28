// 【对象数组】
// Created by Youdrew on 2021/11/23.
//




/*
 *  定义对象数组
 *  类名字 数组名[元素个数];
 *
 *  访问对象数组元素
 *  数组名[下标].成员名
 *
 *
 *  之前的类里面的对象都是有姓名的，这种数组是同名的，就像一个妈生了10个娃，这10个娃实在太像了，于是命名为娃娃[1],娃娃[2]...
 */


#include "Circle.h"
#include<iostream>
#include <iomanip>
using namespace std;


int main()
{
    cout << "请输入生成Circle数组的个数：";
    int NUM_CIRCLES;
    cin >> NUM_CIRCLES;


    Circle circle1[NUM_CIRCLES];                             // Define an array of Circle objects
    Circle circle2[2]={Circle(2,2,2),Circle()};     // 也可以通过

    // Use'a loop to initialize the radius of each object
    for (int index = 0; index < NUM_CIRCLES; index++)
    {
        double r;
        cout << "Enter the radius for circle " << (index+1) <<":";
        cin >> r;
        if (r==0)
            circle1[index].setRadius();      //如果输入0为，则随机生成一个
        else
            circle1[index].setRadius(r);
    }

    // Use a loop to get and print out the area of each object
    cout << fixed << showpoint << setprecision(2);
    cout << "\nHere are the areas of the " << NUM_CIRCLES << "circles. \n";
    for (int index = 0; index < NUM_CIRCLES; index++)
    {
        cout << "circle " << (index+1) << setw (8) << circle1[index].findArea() << endl;
    }
    return 0;
}
