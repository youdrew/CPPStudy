// 【常引用】
// Created by Youdrew on 2021/11/17.
// “常量引用” 其实是 “对 const 的引用” 的简称。
// 它把它所指向的对象看作是常量（不一定是常量），因此不可以通过该引用来修改它所指向的对象的值。




#include <iostream>
#include <cmath>
using namespace std;
class Point { //Point类定义

public: //外部接口
    Point(int x = 0, int y = 0):x(x), y(y) {}
    int getX() { return x; }
    int getY() { return y; }

    friend float dist(const Point &p1,const Point &p2);

private: //私有数据成员
     int x, y;

};



float dist(const Point &p1, const Point &p2){

    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}

int main() { //主函数
    const Point myp1(1, 1), myp2(4, 5);
    cout << "The distance is: ";
    cout << dist(myp1, myp2) << endl; return 0;
}