// 【ArrayOfPoints】类
// Created by Youdrew on 2022/1/30.
// 创建了一个动态数组。

#ifndef CPPSTUDY_ARRAYOFPOINTS_H
#define CPPSTUDY_ARRAYOFPOINTS_H
#endif //CPPSTUDY_ARRAYOFPOINTS_H
using namespace std;
#include "Point.h"

class ArrayOfPoints {
public:
    ArrayOfPoints(int size) : size(size) {
        points = new Point[size];
        cout << "ArrayOfPoints Constructing... " << endl;
    }

    ~ArrayOfPoints() {
        cout << "ArrayOfPoints Deleting..." << endl;
        delete[] points;
    }

    // 拷贝构造函数.这是深层拷贝，如果要使用浅拷贝，要删除这段，使用默认的复制构造函数
    ArrayOfPoints(ArrayOfPoints& v){
        size = v.size;
        points = new Point[size];
        for (int i = 0; i < size; i++)
            points[i] = v.points[i];
        cout << "Copy Constructed... " << endl;
    }

    //获得下标为index的数组元素
    Point &element(int index) {
        assert(index >= 0 && index < size);	//如果满足要求 返回错误，如果数组下标不会越界，程序中止
        cout << "下标检查没问题" << endl;
        return points[index];

    }

    Point *points;	//指向动态数组首地址

private:
    int size;		//数组大小
};