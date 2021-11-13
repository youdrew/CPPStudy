//
// Created by Youdrew on 2020/11/18.
//

//
// Created by Youdrew on 2020/11/18.
//

#include <iostream>
#include <cstring>  //一定要包含这个，这个是对字符串的修改
using namespace std;

string text2,text3;
string text1("Life is so heavy.");
int position;

int main(){
    text2 = "Just alright.";
    text3 = text1 + text2;
    position = text3.find("heavy"); //找"heavy"的位置，并返回一个整数到Position；
    text3.erase(position,sizeof("heavy")-1);
    text3.insert(position,"fine");
    cout << text3;
}