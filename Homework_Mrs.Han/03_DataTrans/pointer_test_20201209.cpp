//
// Created by Youdrew on 2020/12/9.
//
#include <iostream>
using namespace std;

//pointer_test是一个测试指针，*和&符号作用的程序。




int main(){
    int a=5, *pointer=&a;               //&取址运算符 *指针预算符 pointer有一个自己地址，但它的内容指向a的地址

    cout <<"pointer的内容（是个地址）："<< pointer << endl;                                     //直接打印P变量里面的内容 Pointer的内容是个地址
    cout <<"*pointer(pointer指向的内容)："<< "\t" << *pointer << endl;                         //pointer指向的内容：a的内容,我把它称作"取内容运算符"
    cout <<"&pointer(pointer自己的地址)："<< "\t" << &pointer << endl;                        //pointer自己的地址
    cout <<"a自己的内容："<< "\t" << a << endl;                                               //a自己的内容
    cout <<"a的地址："<< "\t" << &a << endl;                                                //a的地址

    //假如某个指针只是定义了，但是未被初始化（赋予初值），那么尽可能不要去访问。
    int b=6, *antherpointer;
    cin >> *antherpointer; //这是错误的。对于空值可以写作int *antherpointer = null;
    cout << *antherpointer << endl;
}


