// 【new】和【delete】关键字学习
// Created by Youdrew on 2021/12/19.

//  之前学习的molloc管理的是内存，（严格来说）实际上并不是一个个变量（对象）。
//  它只是用指针来指代那个内存地址。
//  在C++的使用中，用用new / delete操作符取代 malloc/free（后者几乎就不使用了）



#include "/Users/youdrew/CLionProjects/CPPStudy/Homework_Mrs.Han/07_StructureofCPP/Point.h"
#include <iostream>
using namespace std;

int main() {

    //最基础的演示 molloc/free
    void *ptr1 = malloc(512);   //向MM借512个字节
    free(ptr1);                       //释放刚刚512个字节


    int* ptr2 = new int(256);       //向MM借了一个int类型的空间，储存的值是256
    cout << "ptr2: " << *ptr2 << endl;    //测试

    int* ptr3=new int[128];         //向MM借了128个内存空间
    for (int i = 0; i < 128; ++i) { //赋值
        ptr3[i]=i+1;
        cout << ptr3[i] << endl;
    }

    delete[] ptr2,ptr3;                    //释放刚刚512个字节，但是指针的值是没有变化的，所以
    ptr2,ptr3=NULL;                        //一般在释放完成之后，将指针指向NULL防止误用




    return 0;
}