//【学习目标】函数的使用
// Created by Youdrew on 2021/11/10.
//
//


#include <iostream>
using namespace std;
//计算x的n次方
double power(double x, int n) {
    double val = 1.0;
    while (n--)       //只要n！=0循环就会继续，并且每次循环之后都会n--
        val *= x;   //C *= A 相当于 C = C * A
    return val;
}
int main() {
    cout << "5 to the power 2 is " << power(5, 2) << endl;
    return 0; }


