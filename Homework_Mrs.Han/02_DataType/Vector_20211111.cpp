//【学习目标】向量类型
// Created by Youdrew on 2021/11/11.
// 这里介绍了标准模版库STL里面的Vector容器。



#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector <int> A(10,0);     //初始化一个叫A的向量，有10个值，每个都是0
    A.push_back(111);                //后面加一个111
    A.pop_back();               //删除最后一个元素
    A.push_back(333);               //后面加一个333

    //调用查看 vector里面的内容
    cout << A[2] << " " << A[11] << endl;  //打印A里面第3个元素和第12个元素。



    cout << A.front() << endl;  //返回第一个元素
    cout << A.back() << endl; //返回最后一个元素
    A.insert(A.cbegin()+1,7);//在第2个元素上插入一个7

    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << endl;
    }

/*
 * 向量是一个可变成长可变变短的数组。
 * 这就导致了它其实有两个大小，一个是实际的大小，一个是内部数组能存放的最大值。
 * 元素数量(size): 实际元素的数量  如上面，用size（）获取
 * 容器容量 (capacity) :内部数组能存放元素的最大数量 capacity（）获取
 */

    vector <int> B{10};                //B有一个元素，这个元素的值为10
    vector <int> C(10);             //C有10个元素，每个元素都是0

    cout << "B:" << endl;
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << endl;
    }

    cout << "C:" << endl;
    for (int i = 0; i < C.size(); ++i) {
        cout << A[i] << endl;
    }

    return 0;
}