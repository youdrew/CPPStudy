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

// 【malloc】和【free】函数
// Created by Engene on 2021/12/20
// 动态内存分配测试

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct TestVar{
    char name[32];
};

int main()
{
    int size = 2* sizeof(TestVar);    //这两步申请两个TestVar大小的内存。
    TestVar * ptr1=(TestVar*)malloc(size);

    //测试
    cout << &(ptr1[0]) << "   : " << *(ptr1[0].name) << " " <<*((ptr1[0].name)+1) << endl;
    cout << &(ptr1[1]) << "   : " << *(ptr1[1].name) << " " <<*((ptr1[1].name)+1) << endl;

    //给申请的两个内存赋值
    strcpy(ptr1[0].name,"First one.");
    strcpy(ptr1[1].name,"Sceond one.");

    //测试
    cout << &(ptr1[0]) << "   : " << *(ptr1[0].name) << " " <<*((ptr1[0].name)+1) << endl;
    cout << &(ptr1[1]) << "   : " << *(ptr1[1].name) << " " <<*((ptr1[1].name)+1) << endl;

    free(ptr1);

    return 0;
}