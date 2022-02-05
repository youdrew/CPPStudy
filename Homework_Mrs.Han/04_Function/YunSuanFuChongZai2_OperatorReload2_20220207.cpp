// 【运算符重载】
// Created by Youdrew on 2022/2/7.
// 新建了一个时钟类，然后定义了时钟的加减规则，里面包含了前/后置单目运算符的加减规则，然后在主函数里调用




#include <iostream>
using namespace std;



//————————————————————————————————
class Clock	                  //时钟类声明
{
public:	                      //外部接口
    Clock(int NewH=0, int NewM=0, int NewS=0);
    void ShowTime();
    Clock& operator ++();     //前置单目运算符重载
    Clock operator ++(int);   //后置单目运算符重载
private:                      //私有数据成员
    int Hour, Minute, Second;
};

Clock::Clock(int NewH, int NewM, int NewS)
{
    if (0<=NewH && NewH<24 &&0<=NewM && NewH<60 &&0<=NewS && NewS<60)
    {
        Hour=NewH;
        Minute=NewM;
        Second=NewS;
    }
    else
        cout << "Tine error!"<<endl;
}

void Clock::ShowTime()
{
    cout << Hour <<":"<< Minute<<":"<<Second<<endl;
}

Clock& Clock::operator ++()  //前置单目运算符重载函数
{
    Second++;
    if(Second>=60)
    {     Second=Second-60;
        Minute++;
        if(Minute>=60)
        {	Minute=Minute-60;
            Hour++;
            Hour=Hour%24;
        }
    }
    return *this;
}

Clock Clock::operator ++(int)    //后置单目运算符重载
{
    Clock old=*this;
    ++(*this);
    return old;
}

int main()
{
    Clock myClock(23,59,59);
    cout<<"First time output:";
    myClock.ShowTime();
    cout<<"Show myclock++:";
    (myClock++).ShowTime();
    cout<<"Show ++myclock:";
    (++myClock).ShowTime();

    return 0;
}