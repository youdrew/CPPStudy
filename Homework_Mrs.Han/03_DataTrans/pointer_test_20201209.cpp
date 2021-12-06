// 【指针】
// Created by Youdrew on 2020/12/9.
//
#include <iostream>
using namespace std;

//pointer_test是一个测试指针，*和&符号作用的程序。

//指针： 内存地址，用于简介访问内存单元
//指针变量 ： 一个变量，里面存储的是地址




int main(){
    int a=5, *pointer=&a;               //&取址运算符 *指针预算符 pointer有一个自己地址，但它的内容指向a的地址

    cout <<"pointer的内容（是个地址）："<< pointer << endl;                                     //直接打印P变量里面的内容 Pointer的内容是个地址
    cout <<"*pointer(pointer指向的内容)："<< "\t" << *pointer << endl;                         //pointer指向的内容：a的内容,我把它称作"取内容运算符"
    cout <<"&pointer(pointer自己的地址，起始地址)："<< "\t" << &pointer << endl;                        //pointer自己的地址
    cout <<"a自己的内容："<< "\t" << a << endl;                                               //a自己的内容
    cout <<"a的地址："<< "\t" << &a << endl;                                                //a的地址

    //假如某个指针只是定义了，但是未被初始化（赋予初值），那么尽可能不要去访问。
    int b=6.5, *antherpointer;
    int *antherpointer2=0;       // 这代表的是空指针
    int *antherpointer4=NULL;    //这也代表的是空指针，但是以上两种做法常常会引发很多潜在的BUG；
    int *antherpointer6=nullptr; //所以一般采用Nullptr关键字。


    void *antherpointer3;       //也可以用void来修饰一个指针。这样的指针可以只想任何类型。是的，指针也需要有类型。
                                //这样就方便指针的运算。编译器就指导➕1之后会是什么。

    cin >> *antherpointer; // 这是错误的。对于空值可以写作int *antherpointer = null;
                           // 用变量地址作为初值时，该变量必须在指针初始化之前已声明过，且变量 类型应与指针类型一致。

    cout << *antherpointer << endl;


}


