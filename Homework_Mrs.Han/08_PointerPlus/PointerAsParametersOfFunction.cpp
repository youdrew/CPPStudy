// 【指针作为函数的参数】
// Created by Youdrew on 2021/12/15.
//   为什么需要用指针作为函数的参数？
//  • 需要数据!!!双向传递时!!!(引用也可以达到此效果)：
//    用指针作为函数的参数，可以使被调函数通过形参指针存取主调函数中，实参指针指向的数据，实现数据的双向传递

//  • 需要传递一组数据，只传首地址运行效率比较高:实参是数组名时形参可以是指针
#include <iostream>
using namespace std;

void test(int *pointer1){
    *pointer1=*pointer1+1;
}


int main(){

    int a=1;
    test(&a);       //这一步操作竟然修改传进去的值，实现了修改输入的能力
    cout << a << endl;

    return 0;
}