// 【学习目标】 析构函数
// Created by Youdrew on 2021/11/13.
//

/*
 *  析构函数：
 *
 *          析构函数( Destructor)也是一种特殊的成员函数,没有返回值。
 *          不需要用户调用,而是在销毁对象时自动执行。
 *          与构造函数不同的是,析构函数的名字是在类名前面加个“～”符号。
 *          没有返回值，没有参数。
 *          不能被重载（一个类里面只有一个析构函数）
 *          必须公有。
 *
 *          如果类中有指针成员变量，并且指针指向堆空间，那么程序员必须显式地声明析构函数.
 *          释放指针指向的堆空间，避免内存泄露。
 */




#include <iostream>
using namespace std;

class Clock {
    public:
        // 无参数默认构造函数
        Clock() {
            cout << "使用了Clock默认的构造函数" << endl;
            for (int i = 0; i < 3; ++i) {
                cout << "请输入一个数";
                cin >> Hours[i];
            }

        }

        ~Clock(){                                               //这个是析构函数
        };

    int Hours[3];

    private:
        int Minutes;
        int Seconds;
};

int main(){
    Clock MyClock1;
    cout << MyClock1.Hours[1] << endl;
}