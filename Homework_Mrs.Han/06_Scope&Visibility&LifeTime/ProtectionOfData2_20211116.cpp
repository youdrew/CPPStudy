// 【学习目标】：共享数据的保护
// Created by Youdrew on 2021/11/16.
// 对于既需要共享、又需要防止改变的数据应该声明为常类型( 用const进行修饰)。对于不改变对象状态的成员函数应该声明为常函数。



/*
 *      常类型：
            常对象:必须进行初始化,不能被更新。 // const 类名 对象名
            常成员 用const进行修饰的类成员:  常数据成员和常函数成员
            常引用:被引用的对象不能被更新。 //const 类型说明符 &引用名
            常数组:数组元素不能被更新(详见第6章)。 //类型说明符 const 数组名[大小]...
            常指针:指向常量的指针(详见第6章)

 */

#include <iostream>
using namespace std;

class A{
    public:
        A(int a);
        static void print();            // 静态成员函数
     private:
        static int aa;                  // 静态数据成员的声明
         static const int count;        // 常量静态数据成员（可以在构造函数中初始化）
        const int bb;               // 常量数据成员
};

int A::aa=0;// 静态成员的定义 + 初始化
const int A::count=25;         // 静态常量成员定义 + 初始化

 A::A(int a):bb(a){         // 常量成员的初始化
     aa+=1;
}

void A::print(){
    cout<<"count="<<count<<endl;
    cout<<"aa="<<aa<<endl;
}

int main(){
    A a(10);
    A::print();         // 通过类访问静态成员函数
    a.print();          // 通过对象访问静态成员函数
}