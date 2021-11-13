//
// Created by Youdrew on 2020/11/19.

#include <iostream>
#include<string.h>
using namespace std;

char str1[12]= "C++";
char str2[12]= "Progamming";
char str3[12]= "niubition";

int main(){
    strcpy(str1,str2);       //将str2拷贝到str1;并覆盖原本的字符
    strcpy(str1,str3);
    cout << str1 << str2 << str3 << endl;

    //——————————————————————
    int Num;
    cout << "你想将多少个str2中到字符拷贝到str1中" << endl;
    cin >> Num;
    strncpy(str1, str2, Num);     //将str2中的num个字符拷贝到str1中，如果超过了str2的大小剩下的都用"\0"来替代
    cout << str1 << endl;

    //———————————————————————
    strcat(str1, str2);
    cout << str1 << endl;
}
//https://www.jianshu.com/p/28773877ffba
