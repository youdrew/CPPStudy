//【学习目标】 函数的参数传递方式
// Created by Youdrew on 2021/11/11.
//

#include<iostream>
using namespace std;

//值传递
void change1(int n){
        cout<<"值传递--函数操作地址"<<&n<<endl;         //显示的是拷贝的地址而不是源地址
        n++;
    }
//引用传递
void change2(int &m){
        cout<<"引用传递--函数操作地址"<<&m<<endl;       //引用传递是指在调用函数时将实际参数的地址传递到函数中，那么在函数中对参数所进行的修改，将影响到实际参数。
        m++;
    }

//指针传递
void change3(int *n){
        cout<<"指针传递--函数操作地址 "<<n<<endl;     //可以在这个文件Homework_Mrs.Han/DataTrans/pointer_test_20201209.cpp 看指针的用法
        *n=*n+1;
     }

int main(){
    int n=10;
    cout<<"实参的地址"<<&n<<endl;
    change1(n);
    cout<<"after change1() n="<<n<<endl;
    change2(n);
    cout<<"after change2() n="<<n<<endl;
    change3(&n);
    cout<<"after change3() n="<<n<<endl;
    return true;
}