// 【对象数组】
// Created by Youdrew on 2021/12/7.
//
/*
 *      对象数组：
 *              数组中的每一个元素都是一个对象。
 *              数组中每一个元素对象被创建时，系统都会调用类构造函数初 始化该对象。
 *
 *
 *
 *
 *
 *
 *
 */
#include "iostream"
using namespace std;


class Point { //类的定义

public: //外部接口
    Point();
    Point(int x, int y);

    ~Point();

    void move(int newX,int newY);

    int getX()
        const { return x; }
    int getY()
        const { return y; }

    static void showCount();     //静态函数成员

private: //私有数据成员
    int x, y;
};

using namespace std; Point::Point() : x(0), y(0) {
    cout << "Default Constructor called." << endl; }

Point::Point(int x, int y) : x(x), y(y) {
    cout << "Constructor called." << endl; }

Point::~Point() {
    cout << "Destructor called." << endl; }

void Point::move(int newX,int newY) {
    cout << "Moving the point to (" << newX << ", " << newY << ")" << endl;
    x = newX;
    y = newY;
}


double AreaCalculation(Point a[3]){
    double t1=a[0].getX()*a[1].getY()-a[1].getX()*a[0].getY();
    double t2=a[1].getX()*a[2].getY()-a[2].getX()*a[1].getY();
    double t3=a[2].getX()*a[0].getY()-a[0].getX()*a[2].getY();
    double S= 0.5*(t1+t2+t3);
    return S;
}


int main(){
    Point Triangle[3]={Point(1,2),Point(4,5),Point(3,9)};           //建立了一个数组对象 对象名字对象名字叫Triangle 里面的每个元素都是属于Point类的规定
    cout << "三角形的面积是：  " << AreaCalculation(Triangle) << endl;

}