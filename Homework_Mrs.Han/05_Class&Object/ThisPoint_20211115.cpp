// 【学习目标】 This指针
// Created by Youdrew on 2021/11/15.
// 当成员函数中某个变量 与 成员变量 名字相同，则使用 this 关键字来表示成员变量。
// 用This来访问同名的成员变量或同名的成员函数。

// 注意⚠️：
//          1. 友元函数没有 this 指针。
//          2. this 关键字只能用于成员函数，不能用于被 static 修饰的函数（静态函数）。
//          3. 在 C++ 中，this 关键字是一个指向对象自己的一个指针，所以不能加点。
//          4. this 只能用在类的内部，通过 this 可以访问类的所有成员，包括 private、protected、public 属性的。



#include<iostream>
using namespace std;

class Animal{
public:
    void Show(int Age){
        cout << Age << this->Age << endl;
        this->Age = Age;      //如果写作：Age=Age，就是给函数形参重新赋值。这么写，左边的就是private下的Age
        cout << Age << this->Age << endl;
    };
private:
    string Kind;
    string Gender;
    int Age=1;
};


int main(){
    Animal animal1;
    animal1.Show(2);
}