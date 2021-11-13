//
// Created by Youdrew on 2020/11/19.
//这个用来测试引用传递 注意两个swap函数，对于a，b的改变不一样



#include <iostream>
using namespace std;

int a,b;

int main(){
    cin >> a;
    cin >> b;
    int swap1(int,int);
    int swap2(int&,int&);
    swap1(a,b);
    cout << a << "  " << b << endl;

    swap2(a,b);
    cout << a << "  " << b << endl;
    return 0;
}


int swap1(int x,int y){
    int tmp;
    tmp = x; x = y;y = tmp;
}


int swap2(int &m,int &n){
    int tmp = m; m = n;n = tmp;
}
