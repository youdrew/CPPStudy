//【学习目标】内连函数的使用
// Created by Youdrew on 2021/11/10.
//
// 内连函数是函数每次使用的时候，都将函数的副本，拷贝到使用时。这样可以提高运行效率。
// 所以内连函数一般都比较小，这样节约了调用过程.
// 内联函数体内不能有 "循环语句和switch语句" ;.
// 内联函数的定义必须出现在内联函数第一次被调用之前;
// 对内联函数不能进行异常接口声明。

#include <iostream>
using namespace std;
#include<time.h>
using namespace std;





inline double Max(double x, double y)
{
    return (x > y)? x : y;
}

double Min(double x, double y)
{
    return (x < y)? x : y;
}

// 程序的主函数
int main( )
{
    clock_t start,end;

    start=clock();
    cout << "Max (20,10): " << Max(0,10) << endl;
    end=clock();
    cout<<"该程序运行时间"<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    start=clock();
    cout << "Min (0,200): " << Max(0,200) << endl;
    end=clock();
    cout<<"该程序运行时间"<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    return 0;


}