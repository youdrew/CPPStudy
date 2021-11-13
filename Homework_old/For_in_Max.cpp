//练习程序调用；
// Created by Youdrew on 2020/11/19.
//这个函数是查找一个数组之中最大的值；

#include <iostream>
using namespace std;

int Num_list[15]={3,6,23,2334,654,23245,34,4354,3243,564,43,43,56,435,43};
int Max_Num;


int main(){
    int Max(int,int);
    for (int i = 0; i < 14; ++i) {
        cout << Num_list[i] << "  " << Num_list[i+1] <<endl;
        Max_Num = Max(Max_Num,Max(Num_list[i],Num_list[i+1]));
    }
    cout << Max_Num << " 这个是最大的值"<<endl;
    return 0;
}

int Max(int a,int b){
    int c = a-b;
    if (c==0)
        c = a;
    else if(c<0)
        c = b;
    else if(c>0)
        c = a;
    else
        cout << "程序在Max函数里出错" << endl;
    return c;
}