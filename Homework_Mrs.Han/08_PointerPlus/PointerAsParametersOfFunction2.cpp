// 【指针作为函数的参数】2
// Created by Youdrew on 2021/12/15.
//  这里演示的是一个更复杂的参数传递例子，计算输入值的整数部分和小数部分。


#include <iostream>
using namespace std;

void splitFloat(float x, int *intPart, float *fracPart) {
    *intPart = static_cast<int>(x); //取x的整数部分
    *fracPart = x - *intPart; //取x的小数部分
    }


int main(){

    cout << "Enter 3 float point numbers:" << endl;
    for(int i = 0; i < 3; i++) {
        float x, f;
        int n;
        cin >> x;
        splitFloat(x, &n, &f); //变量地址作为实参
        cout << "Integer Part = " << n << " Fraction Part = " << f << endl;
    }

    return 0;
}