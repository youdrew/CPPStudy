// 【内存管理于molloc关键字的使用】
// Created by Youdrew on 2021/12/19.
//


/*
    【内存管理器】
                系统中存在一个内存管理器(MM，Memory Manager)， 它负责管理一堆闲置内存。它被设计用于解决此类问题。
                MM提供的服务:应用程序可以向MM申请(借出) -块指定大小的内存，用完之后再释放(还回)。

    malloc()
                参数size: 指定要申请的内存空间的大小。
                返回值: void* ， 指向这一块内存地址。

 */

#include <iostream>
using namespace std;


int main(){

    //最基础的演示
    void * ptr1 = malloc(512);   //向MM借512个字节
    free(ptr1);                       //释放刚刚512个字节

    //应用程序在使用malloc申请的内存的时候，需要将返回值转为目标类型。







    return 0;
}