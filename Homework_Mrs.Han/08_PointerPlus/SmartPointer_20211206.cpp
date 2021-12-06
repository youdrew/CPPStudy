// 【智能指针】C++11引入的新概念
// Created by Youdrew on 2021/12/6.
/*
 * 参考网址；
 *          https://www.cnblogs.com/linuxandmcu/p/10409723.html
 *
 * 在传统C+里我们只好使用new和 delete去『记得』对资源进行释放。而11引入了智能指针的概念,使用了引用计数的想法。让程序员不再需要关心手动释放内存。
 *
 * 解决思路：
 *          RAII：（C++特有） Resource Acquisition Is Initialization
 *          利用作用域来析构，一旦超出了作用域就析构。因此我们只需要在构造函数的时候申请空间,而在析构函数(在离开作用域时调用)的时候释放空间
 *          这样,就减轻了程序员编码过程中,考虑资源释放的问题,这就是RAII。
 *
 *
 * 智能指针：
            用起来像指针
            会自己对资源进行释放


   C++提供了三种智能指针：
                            shared_ptr;     强指针

                            unique_ptr;     unique_ptr,对早期的auto_ptr进行了修正
                                            unique_ptr 相对于其他两个智能指针更加简单，它和 shared_ptr 使用差不多，但是功能更为单一.
                                            它是一个独占型的智能指针，不允许其他的智能指针共享其内部的指针，更像原生的指针（但更为安全，能够自己释放内存）。
                                            不允许赋值和拷贝操作，只能够移动。

                            weak_ptr;       弱指针 一般和"强指针"一起用

                            *使用的时候需要关联头文件<memory>

 *
*/

#include <iostream>
using namespace std;



int main(){
    int a = 7;
    int *p1 = &a;//建立常规指针

    unique_ptr<int>up1(p1); //新建了一个up1

    cout << *p1 << "," << *up1 <<endl;

    unique_ptr up2 = move(up1);
    cout<< *up2 <<endl;
    if (up1!=nullptr){         //判断up1是不是空指针
        cout<< *up1 <<endl;     //不是
    }
    else{
        cout << "*up1里面没东西了";
        delete &up1;
        delete p1;
    }

    return 0;
}