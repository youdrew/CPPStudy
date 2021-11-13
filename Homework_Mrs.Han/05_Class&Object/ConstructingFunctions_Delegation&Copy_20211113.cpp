// 【学习目标】构造函数和析构函数
// Created by Youdrew on 2021/11/12.



/*
 * 委托构造函数：

            类中往往有多个构造函数，只是参数表和初始化列表不同，其初始化算法都是相同的，这时，为了避免代码重复，可以使用委托构造函数。

 */


#include<iostream>
using namespace std;

class Clock {
    public:

    Clock(int newH, int newM, int newS){hour=newH;minute=newM;second=newS;}
    Clock(float newH,float newM):Clock(){hour=newH;minute=newM;};

    void showTime(){cout << hour << ":" << minute << ":" << second << endl;};

    private:
        float hour, minute, second=0;
};




int main(int argc, char *argv[])
{
    Clock myClock1(06,20,30);
    myClock1.showTime();

    Clock myClock2(0.6,0.07);
    myClock2.showTime();
    return 0;
}