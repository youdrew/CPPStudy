// 【学习目标】委托构造函数 和 复制/拷贝构造函数
// Created by Youdrew on 2021/11/13
//

/*
 * 委托构造函数：
            类中往往有多个构造函数，只是参数表和初始化列表不同，其初始化算法都是相同的，这时，为了避免代码重复，可以使用委托构造函数。


   复制构造函数：
            又称为拷贝构造函数，是一种特殊的构造函数。
            它在创建对象时，是使用同类中，之前创建的对象来初始化新创建的对象。
            拷贝构造函数不写的时候，编译器也会默认便便携
            如果不希望对象被复制构造
            C++98做法:将复制构造函数声明为private，并且不提供函数的实现。
            C++11做法: 用“=delete”指示编译器不生成默认复制构造函数。
 */



#include <iostream>
using namespace std;

class Clock {
    public:
        // 无参数默认构造函数
        Clock() {
            cout << "使用了Clock默认的构造函数" << endl;
        }

        //  int型 参数构造函数
        Clock(int a, int b, int c) : Clock() {    //被委托构造函数里面的东西也会被执行
            cout << "使用了Clock委托构造函数" << endl;
            Hours = a;
            Minutes = b;
            Seconds = c;
        }

        // 拷贝构造函数 如果拷贝的构造函数存在 那么"默认的构造函数"就会被替代掉
        Clock(const Clock & Copy){
            cout << "使用了Clock拷贝构造函数" << endl;
        }


        int PrintTime();
        void SetTime(int H, int M, int S);

    private:
            int Hours;
            int Minutes;
            int Seconds;
};

class Animal{
    public:
        // 默认的无参构造函数
        Animal(){
            cout << "使用了Animal的默认构造函数" << endl;
        }

        Animal(const Animal & Copy)=delete;
    private:
};



int main()
{
    Clock MyTime1(6,30,30); //默认构造函数被委托构造函数调用
    MyTime1.PrintTime();
    Clock MyTime2 = MyTime1; //拷贝构造函数直接复制形成了的MyTime1
    MyTime2.SetTime(3,0,0);
    MyTime2.PrintTime();

    Animal Human1;
    // Animal Human2 = Human1; 这样是错误的，因为我们把Animal的构造函数声明为了"delete"
    return 0;
}













//函数外的成员函数设置
void Clock::SetTime(int H,int M,int S){
    Hours = H;
    Minutes = M;
    Seconds = S;
}

int Clock::PrintTime() {
    cout << Hours << "/" << Minutes << "/" << Seconds << endl;
    return 0;
}