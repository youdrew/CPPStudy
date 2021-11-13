// 【学习目标】对于物体的抽象和封装
// Created by Youdrew on 2021/11/12.

// 抽象：对某个物体对特征进行总结，然后写成"类"
// 封装：将想好对特征写成数据，总结和声明，考虑到访问权限，形成类。
// 继承：在已有类对基础上，形成新的类。
// 多态：同一名称,不同的功能实现方式。方便管理项目中的函数。实现重载函数和虚函数。



/*
 * 设计类的时候考虑到的问题：
 *
                此类型的“合法值”是什么?（哪些设定私有，哪些公有？）
                此类型应该有什么样的函数和操作符?
                新类型的对象该如何被创建和销毁
                如何进行对象的初始化和赋值?
                对象作为函数的参数如何以值传递
                谁将使用此类型的对象成员?
 */



#include<iostream>
using namespace std;


class Clock{
    public:                                                        //这个是"访问修饰符  private（默认的就是私有的）/public（公有一般是接口Interface GUI）/protected"
        // 成员函数 setTime 设置时分秒
        void setTime(int newH = 0, int newM = 0, int newS = 0);    //方法 函数成员 功能，这里是成员函数的声明

        // 成员函数 显示时间
        void showTime()
        {                                                          //这里是成员函数的实现，这里是内部声明的方法，这种是一种隐形的"inline函数"
            cout << hour << ":" << minute << ":" << second << endl;
        };

    private:
        int hour, minute, second;                                  //变量 数据成员 属性

};

void Clock::setTime(int newH, int newM, int newS)                  //这里是成员函数的实现，这是在外部声明的方法，更倾向于用类外使用
{
    hour = newH;
    minute = newM;
    second = newS;
}

int main(int argc, char *argv[])                                   //类对象的使用
{
    Clock myClock1;                                                //实例化对象
    myClock1.setTime(8, 30, 30);
    myClock1.showTime();
    return 0;
}