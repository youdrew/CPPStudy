//
// Created by Youdrew on 2020/11/9.
// 它的作用是将一些ascII码字符表示出来；
//八进制Oct；十进制Dec；十六进制Hex；

#include <iostream>
using namespace std;

char Cute_bell = '\7'; //ASCII码7号是一阵铃声
char line_feed = '\n'; //换行符
int a ;

int main(){
    cout << "请输入要转换的值:" << endl;
    cin >> a;

    cout << "八进制：" << oct << a << endl;
    cout << "十进制：" << dec << a << endl;
    cout << "十六进制：" << hex << a ; //<< "    如果要使用转义符号，请输入/x" << a-24 << line_feed;

    cout << line_feed
    << "————————————————————————以下是输入测试——————————————————————————" << line_feed << line_feed << Cute_bell;

    cout << '\157' << "👈这个是八进制Oct" << line_feed;
    cout << '\x6f' << "👈这个是十六进制Oct" << line_feed;
}