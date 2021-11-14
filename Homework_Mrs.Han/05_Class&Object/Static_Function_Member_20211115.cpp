// 【学习目标】  静态成员函数
// Created by Youdrew on 2021/11/14.
//



/*
 *
 *      静态函数成员：
 *                  类外代码可以使用类名和作用域操作符来调用静态成员函数。
 *                  只能使用静态（不能使用普通成员变量）

 *
 */


#include<iostream>
using namespace std;

class Student{
public:
    static string Membership;
    void Print(){cout << "这个学生的班级是：" << Membership <<"，他们的分数是："<< TeamScore << endl;};
    void ScorePlus(){TeamScore++;};
    static void ScoreReset(){TeamScore=0;};                                     //静态成员函数；

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

    Student student3;
    student3.ScoreReset();
    student3.Print();
}