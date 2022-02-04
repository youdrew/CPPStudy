// tesla(特斯拉类)
// Created by Youdrew on 2022/2/3.
// 这是一个子类，用于继承父类Vehicle.h

#ifndef CPPSTUDY_TESLA_H
#define CPPSTUDY_TESLA_H

#endif //CPPSTUDY_TESLA_H


/*
个派生类继承了所有的基类方法,但下列情况除外:
·基类的构造函数、析构函数和拷贝构造函数。
·基类的重载运算符。
·基类的友元函数。
 */

#include <iostream>
using namespace std;

class tesla:public Vehicle{
public:
    tesla(){        //使用构造函数修改Vehicle里面存在的trademark属性
                    //当父类有多个构造函数的时候，在这里也可以显性地调用某一个父类的构造函数，比如tesla():Vehicle(){}
        cout << "一个tesla对象被创建出来" << endl;
        char Name[128]="tesla";
        setTrademark(Name);
        printTrademark();
    }

    ~tesla(){        //使用构造函数修改Vehicle里面存在的trademark属性
        cout << "一个tesla对象被析构了" << endl;
    }
    //如果子类觉得父类不好，可以重新写下一个父类的函数用于替换掉父类。
    //但是重写的时候容易和原函数发生一些冲突，所以通常要加上关键字virtual。将加上了virtual关键字的称为"虚函数"
    // virtual表明该函数即将被子类重写。一般写在父类里面，这样子类里面就自动继承为"virtual"的形式了
    // ⚠️构造函数是不可以加virtual的。

    virtual int printTrademark(){
        cout << "the trademark is " << trademark << "（通过子类的函数打印）" << endl;
    };

protected:

private:


};