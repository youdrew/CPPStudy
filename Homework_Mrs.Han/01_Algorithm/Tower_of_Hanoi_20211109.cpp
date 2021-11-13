// Tower of Hanoi
// 【学习目标】汉诺塔递归，理解递归思想很重要
// Created by Youdrew on 2021/11/10.
// 汉娜塔移动


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <thread>
using namespace std;


int Panzi_in_A = 0;
int Panzi_in_B = 0;
int Panzi_in_C = 0;
int Count_Numb = 0;

int DisplayState(char src,char dest)
{
    if (src=='A'){Panzi_in_A--;}else if(src=='B'){Panzi_in_B--;}else{Panzi_in_C--;}
    if (dest=='A'){Panzi_in_A++;}else if(dest=='B'){Panzi_in_B++;}else{Panzi_in_C++;}
    cout << src <<"  ------to----->  "<< dest <<endl;
    Count_Numb ++;
    cout << "当前的状态"<< "("<< Count_Numb <<")"<<"是：";
    cout << setw(6) << Panzi_in_A << setw(6) << Panzi_in_B << setw(6)<< Panzi_in_C << '\t' << endl;
    //std::this_thread::sleep_for(200ms); //这个是延时用的，会很好玩。
    return 0;
}


void hanoi(int n, char src, char medium, char dest)
{
    if (n == 1)
        DisplayState(src, dest);
    else {
        hanoi(n - 1, src, dest, medium);
        DisplayState(src, dest);
        hanoi(n - 1, medium, src, dest);
    }
}

int main()
{
    cout << "你想移动的汉诺塔层数是？";
    cin >> Panzi_in_A;

    hanoi(Panzi_in_A,'A','B','C');
};