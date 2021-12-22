// 【函数指针&指针函数】
// Created by Youdrew on 2021/12/15.
//
#include <iostream>
using namespace std;

/*
【函数指针】指向函数的指针变量，即重点是一个指针。一种特殊的指针，它指向函数的入口。
 要声明指向特定类型的函数指针，可以首先编写这个函数的原型，然后用 (*p) 来替换函数名，这样 p 就是这类函数的指针。
 */
int NothingHappen(int x);   //定义一个函数
int (*p) (int);     //定义一个空的函数指针，只能指向返回值为int的，形参为一个int

/*
【指针函数】指针类型的函数，是一个函数，函数返回类型是某一类型的指针。
 返回的是个地址。
 但是注意⚠️不要把局部变量的地址作为返回值。那样是非法的。
*/
int *PointerFunction(int x,int y);   //定义了一个指针函数

int main(){
    p = NothingHappen;
    (*p)(1);//用指针调用函数
    PointerFunction(1,2);

    return 0;
}

int NothingHappen(int x){
    cout << "Something Happened" << endl;
}

int *PointerFunction(int x,int y){
    cout << "Does Anything Happened?" << endl;
}