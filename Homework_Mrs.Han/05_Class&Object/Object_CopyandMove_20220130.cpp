// 【对象的复制与移动】
// Created by Youdrew on 2022/1/30.
// 参考：https://blog.csdn.net/xiaoyezi1001/article/details/8790993

#include <iostream>
#include <cassert>
#include "ArrayOfPoints.h"
using namespace std;

/*
 * 【浅层复制】：
 *      编译器提供了默认构造函数和析构函数,同样也提供了复制构造函数,编译器提供的默认复制构造函数只是把传递进来的对象的每个成员变量复制到新对象的成员变量中去。
 *      但是这存在一个问题，就是如果变量是个指针，这个指针指向某个地址。
 *      复制过来，原地址指向的值析构之后，它还指向原来的那个地址。
 *      这时候，这个指针就会变成一个"迷途指针"。程序就会报错。
 *      简而言之，浅拷贝是数据之间的简单赋值。
 *
 * 【深层复制】：
 *      当被复制的对象数据成员是指针类型时,不是复制该指针成员本身,而是将指针所指对象进行复制（创造一个新的指向的内容）。
 *
 */

int main(){
    //【浅层复制】
    ArrayOfPoints pointArray1(5); // 新建5个数组
    ArrayOfPoints pointArray2(pointArray1); // 用拷贝构造函数 将pointArray1 拷贝构造给pointArray2
    pointArray1.~ArrayOfPoints(); // 在函数外，主动调用析构函数
    pointArray2.element(1); // 调用查看

    return 0;
}