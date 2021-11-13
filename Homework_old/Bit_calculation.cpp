//
// Created by Youdrew on 2020/11/7.
//

#include <iostream>
using namespace std;

int a;
int b;
int c;
int main()
{
    a = 0b00010000;
    cout << a << endl;
    b = 0b10011010;
    cout << b << endl;
    cout << a+b << endl;

    cout << uppercase;

    c = a & b;    //这是与运算
    cout << dec << c << "/t" << hex << c << endl;

    c = a | b;    //这是或运算
    cout << dec << c << "/t" << hex << c << endl;

    c = a ^ b;    //这是异或运算
    cout << dec << c << "/t" << hex << c << endl;

    c = ~a;     //按微取反，注意得数，int型在C++里面是4字节，就是4*8个01，没有写出来的默认0000，也被取反了
    cout << dec << c << "/t" << hex << c << endl;

    c = a << 2;     //这是相左移位2个
    cout << dec << c << "/t" << hex << c << endl;

    c = a >> 2;     //这是香右移位2个
    cout << dec << c << "/t" << hex << c << endl;

    return 0;
}