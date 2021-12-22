// 【指针的运算】
// Created by Youdrew on 2021/12/14.
//


#include <iostream>
using namespace std;



int main(){
//———————————————————————————————指针与数组的运算———————————————————————————————————————————
/*
指针p加_上或减去n，其意义是指针当前指向位置的前方或后方第n个数据的起始位置。
指针的++、--运算，意义是指向下一个或前一个完整数据的起始。

运算的结果值取决于指针指向的数据类型，总是指向一个完整数据的起始位置。
当指针指向连续存储的同类型数据时，指针与整数的加减运和自增自减算才有意义。
 */
    int Array[10]={1,2,3,4,5,6,7,8,9,0};
    int *Pointer= Array;                //还可以Pointer=&Array[0];或是Pointer=Array
    cout << *Pointer << " / "<< Pointer <<endl;
    Pointer=Pointer+1;
    cout << *Pointer << " / "<< Pointer <<endl;


    //用三种方法输出各元素；

    //方法1 使用数组名和下标：
    for (int i = 0; i < 10; ++i) {
        cout << Array[i] << " / ";
    }
    cout << endl;


    //方法2 使用数组名和指针运算法 （！！这个蛮有意思！！）
    for (int i = 0; i < 10; ++i) {
        cout << *(Array+i) << " / ";
    }
    cout << endl;


    //方法3 使用指针的变量访问数据
    for (int *Pointer2 = Pointer; Pointer2 < (Array+10); Pointer2++) {
        cout << *Pointer2 << " / ";
    }
    cout << endl;

}
