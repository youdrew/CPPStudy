// 【new】和【delete】关键字学习
// Created by Youdrew on 2021/12/24.
// 使用 new 和 delete 关键字以及 指针函数 还有指向指针的指针 创建未知大小的二维数组（Martix）；
// 这个可以在视频中使用。


#include <iostream>
using namespace std;

int * Martix2Build(int x,int y){

    int **Martix_ptr=new int*[y];    // 双指针，指向指针的指针，一共有y个"*Martix_ptr"
    for (int i = 0; i < y; ++i) {
        Martix_ptr[i]=new int[x];
    }
    int t=1;

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j,++t) {
            Martix_ptr[i][j]=t;
            cout << &Martix_ptr[i][j] << ": "<< Martix_ptr[i][j] << endl;
        }
        cout << endl;
    }
}

int main() {
    int x,y;
    cin >> x;
    cin >> y;
    Martix2Build(x,y);

    return 0;
}