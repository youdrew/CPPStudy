// 【学习目标】 类的组合
// Created by Youdrew on 2021/11/13.
//





/*
         组合的概念：
                    类中的成员 是 另一个类的对象。
                    可以在已有抽象的基础上实现更复杂的抽象。

         声明形式：
                    类名::类名(对象成员所需的形参，本类成员形参):对象1(参数)，对象2(参数)，...
                        {
                        //函数体其他语句
                        }

         初始化的顺序
                    首先对构造函数初始化列表中列出的成员，然后才是初始化主类。
 */



#include <iostream>
#include <cmath>
using namespace std;





class Point {                                                   //Point类定义
    public:
        Point(int xx = 0, int yy = 0) {
            x = xx;
            y = yy;
        }
        Point(Point &p);
        int getX() { return x; }
        int getY() { return y; }
    private:
        int x, y;
};

Point::Point(Point &p) {                                        //复制构造函数的实现
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor of Point" << endl;
}




//类的组合，线段类
class Line {                                                   //Line类的定义
    public:                                                    //外部接口
        Line(Point xp1, Point xp2);                            //构造函数
        Line(Line &l);                                         //拷贝构造函数
        double getLen() { return len; }
    private:                                                   //私有数据成员
        Point p1, p2;                                          //Point类的对象p1,p2
        double len;
};

//组合类的构造函数
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
    cout << "Calling constructor of Line" << endl;
    double x = static_cast<double>(p1.getX() - p2.getX());
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x * x + y * y);
}

Line::Line(Line &l) : p1(l.p1), p2(l.p2) {                    //组合类的复制构造函数
    cout << "Calling the copy constructor of Line" << endl;
    len = l.len;
}




//主函数
int main() {
    Point myp1(1, 1), myp2(4, 5);                             //建立Point类的对象
    Line line(myp1, myp2);                                    //建立Line类的对象
    Line line2(line);                                         //利用复制构造函数建立一个新对象
    cout << "The length of the line is: ";
    cout << line.getLen() << endl;
    cout << "The length of the line2 is: ";
    cout << line2.getLen() << endl;
    return 0;
}