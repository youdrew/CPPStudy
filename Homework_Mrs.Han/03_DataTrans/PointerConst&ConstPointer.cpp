// 【常量指针】
// Created by Youdrew on 2021/11/17.
//


/*
 *     【常量指针】指向一个常量的指针，但是指针本身不是一个"常量"（Const）。
 *               具有只能够读取内存中数据，却不能够修改内存中数据的属性的指针，称为指向常量的指针，简称常量指针。
 *               声明：const int * p; int const * p;
 *
 *
 *
 *     【指针常量】这个指针本身是一个常量，它的所指的方向不能被改变。指向的变量可以改变。
 *               声明：int * const p=&a;
 *               注：指针常量必须在声明的同时对其初始化，不允许先声明一个指针常量随后再对其赋值，这和声明一般的常量是一样的。
 */


#include <iostream>
using namespace std;





//常量指针：指向一个常量的指针
int c=10;const int d= 20;
const int *p2=&c;
const int *p3=&d;

//指针常量：指针本身是一个常量
int a=10; const int b=20;
int *const p1=&a;

//错误演示❌不能把常量的地址直接给指针
// int *p3=&b

int main()
    {
    *p1 =30;         //指针常量修改被指向内容的值
    p2 = &d;         //指向方向不能改变，但是可以改变内容
    }


