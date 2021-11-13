//
// Created by Youdrew on 2020/12/11.
//


#include <iostream>
using namespace std;

//返回指针的函数
//noblank是消除str中开头的空格之用

int ABC = 123,CBA[12];
char string2[] = "      cin is what ",*string1="C++ 好玩";
char *string4=string2;
int *string3=&ABC,*string5=CBA;

char *noblank(char *str) //str是一个字符型指针，用于接受传入的一个字符串 //返回值类型是字符型指针
{
    while (*str == ' ')
        *str++;
    return str; //它的性质是由"*"noblank的性质决定的
}

int main(){
    cout << string2 << &string2 << "\t" << string1 <<endl; //因为是字符形指针，所以在这里，返回的指针string打印出来是一串字
    cout << string3 << "|" << *string3 << "|" << &string3 << endl;
    string1=noblank(string2);     //返回了*return的内容，即
    cout << string1 << endl;      //这里也是。
    return 0;
}