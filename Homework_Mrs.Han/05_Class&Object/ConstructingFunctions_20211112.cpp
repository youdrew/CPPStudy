// 【学习目标】构造函数和析构函数
// Created by Youdrew on 2021/11/12.



/*
 * 构造函数：
 *          类中的一种特殊成员函数，将对象初始化为一个特定的值。
 *          如果不定义构造函数，则编译器自动生成一个默认的构造函数。
 *          构造函数名称就是类名。
 *          构造、析构函数没有返回类型。
 *          可以重载。
 */


#include<iostream>
using namespace std;

class Clock {
    public:
    /*
     * 如果不写构造函数 系统会自动生成个
     * Clock(){}
     */
    Clock(int newH, int newM, int newS);          // 构造函数声明 可以在这里面写构造函数的值
    Clock(float newH,float newM);                 // 重载的构造函数声明
    //Clock();
    void showTime(){cout << hour << ":" << minute << ":" << second << endl;};

    private:
        float hour, minute, second=0;
};


Clock::Clock(int newH, int newM, int newS) {
    //函数外的构造函数
    hour=newH;minute=newM;second=newS;
}

Clock::Clock(float newH, float newM) {
    //函数外的构造函数
    hour=newH;minute=newM;
}
//Clock::Clock():hour(0),minute(0),second(0){}   这个也是默认构造函数，如果和Clock()同时写，会报错。



int main(int argc, char *argv[])                                   //类对象的使用
{
    Clock myClock1(06,20,30);
    myClock1.showTime();

    Clock myClock2(0.6,0.07);
    myClock2.showTime();
    return 0;
}