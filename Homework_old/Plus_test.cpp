//
// Created by Youdrew on 2020/11/10.
//这个程序用来测试，前置++ 和 后置++ 之间的区别的。
//首先，a++ 和 ++a 执行的功能是 a 的自增，也就是完成 a = a+１；单独使用时，这两者的执行结果没有太大的差异






#include <iostream>
using namespace std;

int a1=6;
int a2=6;
int b1;
int b2;

int main(){
    b1 = a1++; //将a1的值赋给b1，然后a1自增1；
    b2 = ++a2; //a2自增1，然后赋值给b2；

    cout << a1 << '\t' << a2 << endl; //都会改变a原始的值
    cout << b1 << '\t' << b2 << endl;
}

