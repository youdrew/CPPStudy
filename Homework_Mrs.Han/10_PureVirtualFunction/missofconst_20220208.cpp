// 【因为漏写const，导致无法继承父类】
// Created by Youdrew on 2022/2/8.




#include <iostream>
using namespace std;

class Base {
public:
    virtual void f1() const
    {
        cout << "base f1" << endl;
    }

    virtual void f2() const
    {
        cout << "base f1" << endl;
    }
};


class Derived: public Base {
public:
    void f1()                                   // 注意这个函数，并没有写成const，于是没有被是被识别为是override。
    {
        cout << "derived f1" << endl;
    }

    virtual void f2() const
    {
        cout << "derived f1" << endl;
    }
};

int main() {
    Base *b;
    b = new Base; b->f1();b->f2();
    b = new Derived; b->f1();b->f2();
    return 0;
}