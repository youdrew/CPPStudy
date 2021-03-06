// 【学习目标】 命名空间
// Created by Youdrew on 2021/11/14.
// https://blog.csdn.net/cherishinging/article/details/73810785



/*
 *      命名空间：
 *
 *              命名空间可以解决类名、函数名等的命名冲突。
 *              一个大型的应用软件,往往不是由一个人独立完成的,而是由若干不同的人合作完成的,不同的人分别完成不同的部分,最后组成
                个完整的程序。假如不同的人分别定义类,放在了不同的文件中,在主函数的文件中需要使用这些类时,就用 include指令将这些
                头文件包含进来。由于头文件室友不同的人设计的,有可能在不同头文件中用了相同的名字来命名所定义的类或函数。这样,程序中就
                出现名字冲突。

        using语句有两种形式：
                using命名空间名::标识符名;
                using namespace 命名空间名;

        特殊的命名空间
                • 全局命名空间:默认的命名空间
                • 匿名命名空间:由于命名空间没有名字，在其他文件中显然无法引用，它只在本文件的作用域有效。


 *
 *
 */



#include <iostream>
using namespace std;


//所谓命名空间，实际上就是一个由程序设计者命名的内存区域。
// 程序设计者可以根据需要制定一些有名字的空间域，把一些全局实体分别放在各个命名空间中，从而与其他全局实体分隔开来。

//用法例如：
namespace Ching
{
    int a;
    double b;
}


int main(){
    Ching::a=123;
    Ching::b=12.1234;
    cout << Ching::a << "   " << Ching::b << endl;
}