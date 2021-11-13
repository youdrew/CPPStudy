// 【学习目标】：设置函数的不同调用方式
// Created by Youdrew on 2021/11/9
// 建立一个getVolume函数

#include <iostream>
#include <iomanip>
using namespace std;

int getVolume(int length, int width = 2, int height = 3); //设置函数的默认值


int main() {

    const int X = 10, Y = 12, Z = 15;
    cout << "Some box data is " ;
    cout << getVolume(X, Y, Z) << endl;   //第一次调用，因为没有endl，所以上一句话等endl出现再输出
    cout << "Some box data is " ;
    cout << getVolume(X, Y) << endl;  //第二次调用
    cout << "Some box data is " ;
    cout << getVolume(X) << endl;  //第三次调用
    return 0;
}

int getVolume(int length, int width, int height) {
    cout << setw(5) << length << setw(5) << width << setw(5)    //setw（）的作用是用于提前留出空格
         << height << '\t';
    return length * width * height;
}