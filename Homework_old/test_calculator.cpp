//
// Created by Youdrew on 2020/11/6.
//test calculator.cpp

#include <iostream>
#include <cmath>
using namespace std;

float number_1,number_2;

int main()
{
    cout << "请输入第一个数的值：" << endl;
    cin >> number_1;
    cout << "请输入第二个数的值：" << endl;
    cin >> number_2;
    cout << "number_1+number_2:" << number_1+number_2 << endl;
    cout << "number_1*number_2:" << number_1*number_2 << endl;
    cout << "number_1-number_2:" << number_1-number_2 << endl;
    cout << "number_1/number_2:" << number_1/number_2 << endl;
    cout << "number_1的number_2次方:" << pow(number_1,number_2) << endl;
    cout << "exp("<< number_1 <<"):" << exp(number_1) << endl;
    cout << "exp("<< number_1 <<"):" << number_1 << endl;
    cout << hex << number_1 << endl;
    return 0;
}