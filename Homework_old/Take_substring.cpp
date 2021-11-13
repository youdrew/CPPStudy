//
// Created by Youdrew on 2020/11/18.
//

#include <iostream>
#include <cstring>  
using namespace std;

int main(){
    char str1[101];
    char sub1[101];
    int len;
    int k,l; //k是字符的起始位置 l是字符串的长度；
    int i,j; //循环变量；
    cout <<"请输入你想要测试的字符串"<< endl;
    cin.getline(str1,100);
    len = sizeof(str1);

    cout << "请输入字符串起始位置和字符串的长度" << endl;
    cin >> k >> l;

    for (i = 0; i <= l && k <= len; ++i) {
        sub1[i]=str1[k];
        k++;
    }
    cout << sub1 << endl;
}