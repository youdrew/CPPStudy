// 【学习目标】 静态数据成员
// Created by Youdrew on 2021/11/14.
//



/*
 *
 *      静态数据成员：
 *                  用关键字static声明
 *                  为该类的所有对象共享，静态数据成员具有静态生存期。
 *                  它是属于类的，不属于类中的对象的。
 *                  相当于是"共享数据"，一个改变了，其他的都改变。是所有对象共同维护的一个数据，有点类似与"团体分数"。
 *
 *
 *
 *
 *
 */


#include<iostream>
using namespace std;

class Student{
public:
    static string Membership;
    void Print(){cout << "这个学生的班级是：" << Membership <<"，他们的分数是："<< TeamScore << endl;};
    void ScorePlus(){TeamScore++;};

private:
    int Age;
    int Gender;
    static int TeamScore;
};

// 类外赋值，这个静态值是所有对象共享的，属于类的。
string Student::Membership = "Class1";
int Student::TeamScore = 0;


int main(){
    Student student1;
    student1.ScorePlus();
    student1.Print();

    Student student2;
    student2.ScorePlus();
    student2.Print();
}