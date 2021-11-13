// 【学习目标】可变数量形式参数
// Created by Youdrew on 2021/11/11.
/*
 *
 *
 * 为了编写能够处理不同数量形参的函数，C++11 提供了两种主要的方法：

            1.如果所有形参的类型相同，可以传递一个名为 initializer_list 的标准库类型
            2.如果形参的类型不同，可以使用可变参数模板

C++ 还有一种特殊的形参类型：省略符，可以用它传递可变数量的实参。不过需要注意的是，这种功能一般只用于与 C 函数交互的接口程序。
 *
 *
 *
 */

#include <iostream>
#include <string>
#include <initializer_list>
#include <ctime>
#include <iomanip>


using namespace std::chrono;
using namespace std;

string date_time(std::time_t posix)
{
    char buf[20]; // big enough for 2015-07-08 10:06:51\0
    std::tm tp = *std::localtime(&posix);
    return {buf, std::strftime(buf, sizeof(buf), "%F %T", &tp)};
}

bool random_bool()
{
    auto now = system_clock::now();
    string Time = date_time(std::chrono::system_clock::to_time_t(now));
    cout << Time<<setw(6)<<Time[18]<<endl;
    if (Time[18]=='2'||Time[18]=='4'||Time[18]=='6'||Time[18]=='8'||Time[18]=='0') {
        return 0;
    }
    else {
        return 1;
    }
}


string expected = "aaa", actual = "bbb";

void error_msg(initializer_list<string> sb) {                   //函数error_msg，可接受不限数量的string，他们被命名为sb，他们都是const，我们无法更改这些值

    cout <<sb.begin()<<"/"<< sb.end()<<endl;
    for (auto beg = sb.begin(); beg != sb.end(); ++beg)         //sb.begin()、end()获得sb的头与尾的指针，得到的是一个地址,然后在地址上++，地址运算！！！牛逼
        cout << *beg << " ";
    cout << endl;
}

int main() {

    if (random_bool())
        error_msg({ "functionX",expected,actual });
    else
        error_msg({ "functionX","okay" });

}



