// 【string类】
// Created by Youdrew on 2021/12/14.
// string是C++ STL里定义的一个类 使得多个char使用更加简单
// http://c.biancheng.net/view/400.html

#include <iostream>
#include <string>
using namespace std;

int main(){
    //———————————————————————————————指针与字符串的运算———————————————————————————————————————————
/*
 各字符连续、顺序存放，每个字符占一个字节，以‘\0’结尾，相当于一个隐含创建的字符常量数组。
 char str[8]={ 'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0' };
 首地址可以赋给char常量指针:
 const char *STRING1 = "program";

 字符串运算的问题：
• 执行连接、拷贝、比较等操作，都需要显式调用库函数，很麻烦
• 当字符串长度很不确定时，需要用new动态创建字符数组，最后要用delete释放，很繁琐
• 字符串实际长度大于为它分配的空间时，会产生数组下标越界的错误
 */
    // 错误❌演示
    char str1='abc';   //char每次只能容纳一个字母
    char str2='def';
    char str3=str1+str2;   //得到是字母c和字幕f的数值加后的结果
    cout << str3 << endl;

    //构造函数：
    string s1();  // si = ""
    string s2("Hello");  // s2 = "Hello"
    string s3(4, 'K');  // s3 = "KKKK"
    string s4("12345", 1, 3);  //s4 = "234"，即 "12345" 的从下标 1 开始，长度为 3 的子串

    //下面两种写法是错误的，string没有办法接受int型和一个字符的参数进行"构造"
    //string s1('K');
    //string s2(123);

    // 关于string类的其他用法 去这个网站上看：http://c.biancheng.net/view/400.html

    // 关于如何获取整行输入内容：
    for (int i = 0; i < 2; i++){
        string city, state;
        getline(cin, city, ',');    //以"，"为这半句话的断点
        getline(cin, state);
        cout << "City:" << city << "State:" << state << endl;
    }
}








