// 类的对象和类的指针 用类的指针实现"多态性"
// Created by Youdrew on 2022/2/5.
//


/*
【类对象】：利用类的构造函数（构造函数：对类进行初始化工作）在内存中分配一块区域（包括一些成员变量赋值）；
【类的指针】：是一个内存地址值，指向内存中存放的类对象（包括一些成员变量赋值；类指针可以指向多个不同的对象，这就是多态）；

 下面的function展示如何用pointer实现多态。

 储存的位置不一样：
 —— 类对象：用的是内存栈，是个局部的临时变量；
 —— 类指针：用的是内存堆，是个永久变量，除非你释放它。

 什么情况使用类对象与类指针？
 —— 其实作用基本一样 都是为了调用类的成员变量和成员函数；
 —— 当你希望明确使用这个类的时候，最好使用对象；



 */

#include <iostream>
using namespace std;

class Parent1{
public:
    virtual int test(){
        cout << "调用了Parent2里面的test()" << endl;
    };
};

class Parent2:public Parent1{
public:
    virtual int test(){
        cout << "调用了Parent2里面的test()" << endl;
    };
};

class kid:public Parent2{
public:
    int test(){
        cout << "调用了kid里面的test()" << endl;
    };
};

void runingtest(Parent1 *ptr){
    ptr->test();
}

int main(){
    Parent1 grantparent;
    Parent2 parent;
    kid son;

    runingtest(&grantparent);   // ⚠️这里的传参数，将不同对象传给指针，以实现不同的功能。
    runingtest(&parent);
    runingtest(&son);

    //——————————————————————
    Parent1 *ptr1= new kid;         // ⚠️也可以用这种办法直接新建一个类的指针。注意new与delete需要成对出现。
    Parent2 *ptr2= new kid;         //   因为父类的指针可以指向子类的对象。所以可以这么干，这样就很容易实现多态。
    kid *ptr3= new kid;
    ptr1 ->test();
    ptr2 ->test();
    ptr3 ->test();

    return 0;
}