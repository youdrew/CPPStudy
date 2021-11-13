//
// Created by Youdrew on 2020/11/9.
//这是一个十进制的，使数字反转的code

#include <iostream>
using namespace std;

int a;
int b = 0;
int c = 0;


int main(){

    cout << " 请输入你要反转的数字:" << endl;
    cin >> a;

    while (a>10){
        b = a%10;
        if (b==0){
            c = c *10;
        }
        else{
            c = c*10+b;
        }
        a = a/10;
    }

    while (a<10){
        c = c*10+a;
        cout << c;
        return 0;
    }

    while (a==10){
        c = c*100+1;
        cout << c;
        return 0;
    }
}