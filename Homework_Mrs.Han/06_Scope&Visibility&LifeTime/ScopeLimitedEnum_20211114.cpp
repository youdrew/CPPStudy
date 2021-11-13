// 【学习目标】 限定作用域的枚举类型
// Created by Youdrew on 2021/11/14.
// https://blog.csdn.net/qq_26189301/article/details/114188067



#include <iostream>
namespace Test1{
    int a =14;
}

namespace Test2{
    enum class Color {
        red = 0,
        green,
        blue,
        }
}

using namespace std;

int a = 12; //全局变量

int main(){
    int a = 10;
    cout << a << endl;
    cout << ::a << endl;   //取全局变量
    cout << Ching::a << endl;
}

