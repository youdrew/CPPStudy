//
// Created by Youdrew on 2021/10/27.
// 计算pi的值
// 这个程序还有的问题是，值的定义不够精确；

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

double ArcTan(float x){
    double m=1; //m代表分母
    double n=x;   //n代表的是分子
    double r=x;   //r是最终输出的ArcTan的结果

    while(n/m > 1e-15)
        n=n*x*x;
        m=m+2;
        r=r+pow(-1,m-1)*(n/m);

    return r;
}

double Pi(){
    double P;
    double e=(double) 1/5;
    double f=(double)1/239;
    P = 16*ArcTan(e)-4*ArcTan(f);
    return P;
}

int main(){
    cout << "Pi的值为：" << Pi() <<endl;
}
