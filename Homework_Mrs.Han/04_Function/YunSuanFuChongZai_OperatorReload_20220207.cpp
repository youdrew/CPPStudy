// 【运算符重载】
// Created by Youdrew on 2022/2/7.
// 先是定义了一个"复数"的类，然后在里面定义了ComplexNum::operator+(ComplexNum X)函数，要求一个复数加另外一个复数。进行一个五次的循环，每一次输入一个复数的两个值，最后结果累加在一起。

    // operator关键字声明一个函数，该函数指定operator类的实例时运算符符号的含义。
    // 这将为运算符提供多个含义，或者将 “重载” 它。
    // 编译器通过检查其操作数类型来区分运算符不同的含义。


#include <iostream>
using namespace std;

int i=0;

//————————————————————————————————
class ComplexNum{
public:
    ComplexNum(double realinput,double imageinput){
        this -> realNum = realinput;
        this -> imageNum = imageinput;
    }

    void displayComplexNum(){
        cout << this->realNum << "," << this->imageNum << endl << endl;
    };

    ComplexNum operator+(ComplexNum X);         // 其中第一个"ComplexNum"是返回值的类型
                                                // "operator+"是参数的名字
                                                // 第二个"ComplexNum"是参数的类型

    double realNum;
    double imageNum;
};

ComplexNum ComplexNum::operator+(ComplexNum X) {        // 在这里可以把operator理解为一个参数，即"主要的操作数"
    i++;
    cout << "这是第" << i << "次调用+这个运算符。" << endl << "————————————————————" << endl ;

    //⚠️ +这个功能的具体实现
    this->realNum=this->realNum+X.realNum;
    this->imageNum=this->imageNum+X.imageNum;

    displayComplexNum();
    return ComplexNum(this->realNum, this->imageNum);
}


//————————————————————————————————
int main()
{
    ComplexNum A = ComplexNum(0, 0);

    for (int i = 0; i < 5; ++i) {
        double real=0.0;
        double image=0.0;

        cout << "please input the " << i+1 << " number of Real Number" << endl;
        cin >> real;
        cout << "please input the " << i+1 << " number of Image Number" << endl;
        cin >> image;

        ComplexNum B(real,image);

        //⚠️ 执行计算
        A=A+B;

        B.~ComplexNum();
    }

    return 0;
}


//⚠️ *补充说明部分，以上是定义为成员函数的方式，如果要在外部定义为非成员函数：
ComplexNum operator-(ComplexNum M,ComplexNum N){
    //⚠️ +这个功能的具体实现
    M.realNum=M.realNum+N.realNum;
    M.imageNum=M.imageNum+N.imageNum;

    M.displayComplexNum();
    return ComplexNum(M.realNum, M.imageNum);
};

/*
• C++几乎可以重载全部的运算符，而且只能够重载C++中已经有的。
• 不能重载的运算符:“.”、“.*”、“::”、“?:”
• 重载之后运算符的优先级和结合性都不会改变。
• 可以重载为类的非静态成员函数。
• 可以重载为非成员函数(必要时可以声明为友元)。
 */