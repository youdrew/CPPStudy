// 【学习目标】 作用域
// Created by Youdrew on 2021/11/14.
//




/*
 *          作用域（可见性）：
 *
 *                  :: ⬅️ 被称作"作用域运算符"
 *                  局部变量在其作用域内有更高的优先权（也就是说，同名变量，优先是局部变量）
 *
 *
 *
 */


#include <iostream>
namespace Ching{
    int a =14;
}

using namespace std;

int a = 12; //全局变量

int main(){
    int a = 10;
    cout << a << endl;
    cout << ::a << endl;   //取全局变量
    cout << Ching::a << endl;
}



