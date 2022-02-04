// 车类
// Created by Youdrew on 2022/2/3.
// 这个类被用于Inheritance_20220203.cpp
// 用于表明"继承"的"基类"(这是一个父类)。

#ifndef CPPSTUDY_VEHICLE_H
#define CPPSTUDY_VEHICLE_H

#endif //CPPSTUDY_VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle{

public:
    Vehicle(){
        cout << "一个Vehicle类被创建出来了。" << endl;
    };;

    ~Vehicle(){
        cout << "一个Vehicle类被析构了。" << endl;
    };

    int setTrademark(char TrademarkName[128]){
        for (int i = 0; i < sizeof TrademarkName; ++i) {
            trademark[i] = TrademarkName[i];
        }
        cout << "基类中的setTrademark()函数被调用了。" << endl;
    };

    int printTrademark(){
        cout << "the trademark is " << trademark << endl;
    };



protected://"保护"的内容能被继承，但是不能被外部访问。
    char belong[128]="Mr.Engene design this";
    char trademark[128]="None";


private://"私有"的东西不仅不能被外部访问，也不能被内部访问。
    int wheelSize;
    int weight;
};