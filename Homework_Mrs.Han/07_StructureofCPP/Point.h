//
// Created by Youdrew on 2021/11/18.
//

#ifndef CPPSTUDY_POINT_H
#define CPPSTUDY_POINT_H
#endif //CPPSTUDY_POINT_H


// 这里面用于存放类的声明（定义）

class Point {                                       //类的定义
                                                    // 在所有类之外声明的函数(非成员函数)，都是具有文件作用域的。
                                                    // 这样的函数都可以在不同的编译单元中被调用，只要在调用之前进行 引用性声明(即声明函数原型)即可。
                                                    // 也可以在声明函数原型或定义 函数时用extern修饰，其效果与不加修饰的默认状态是一样的

    public:                                             //外部接口
        Point(int x = 0, int y = 0) : x(x), y(y) {count++;} Point(const Point &p);  //构造
        ~Point() { count--; }                                                       //析构

        int getX() const { return x; }
        int getY() const { return y; }
        static void showCount();                        //静态函数成

    private:                                            //私有数据成员
        int x, y;
        static int count;                               //静态数据成员
};

extern int TestVar;                                 //如果一个变量除了在定义它的源文件中可以使用外，还能被其它文 件使用，那么就称这个变量是外部变量。
                                                    //文件作用域中定义的变量，默认情况下都是外部变量，但在其它文 件中如果需要使用这一变量，需要用extern关键字加以声明。