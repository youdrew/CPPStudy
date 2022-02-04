// 类的继承
// Created by Youdrew on 2022/2/3.
//


// 【子类（派生类）】继承【父类（基类）】的内容。但被继承后，子类自动拥有父类中的public资源（但是存在多种的继承方式）。
/*
一个类可以派生自多个类，一个类可以从多个基类继承数据和函数。
• 继承的目的:实现设计与代码的重用。
• 派生的目的:当新的问题出现，原有程序无法解决(或不能完全 解决)时，需要对原有程序进行改造。

使用形式如下:
【class】 【derived-class】: 【access-specifier】 【base-class】

其中，访问修饰符 access-specifier 是 public、protected 或 private 其中的一个，base-class 是之前定义过的一个或多个类的名称。
如果未使用访问修饰符 access-specifier，则默认为 private。

【公有继承】:
     • 基类的public和protected成员的访问属性在派生类中保持不变，但基类的private成员不可直接访问。
     • 派生类中的成员函数可以直接访问基类中的public和protected成员，但不能直接访问基类的private成员。
     • 通过派生类的对象访问从基类继承的成员，只能访问public成员。
     * 我们一般更多的使用公有继承。

【私有继承】:
     • 基类的public和protected成员都以private身份出现在派生类中，但基类的private成员不可直接访问。
     • 派生类中的成员函数可以直接访问基类中的public和protected成员，但不能直接访问基类的private成员。
     • 通过派生类的对象不能直接访问从基类继承的任何成员。

【保护继承】:
     • 基类的public和protected成员都以protected身份出现在派生类中，但基类的private成员不可直接访问。
     • 派生类中的成员函数可以直接访问基类中的public和protected成员，但不能直接访问基类的private成员。
     • 通过派生类的对象不能直接访问从基类继承的任何成员。
     • 对建立其所在类对象的模块来说，它与 private 成员的性质相同。
     • 对于其派生类来说，它与 public 成员的性质相同。
     • 既实现了数据隐藏，又方便继承，实现代码重用。
 */

// 【继承】：保持已有类的特性而构造新类的过程称为继承。
// 【派生】：在已有类的基础上新增自己的特性而产生新类的过程称为派生。

//  直接参与派生出某类的基类称为【直接基类】
//  基类的基类甚至更高层的基类称为【间接基类】

// 【单继承】：子类只继承一个父类。
// 【多继承】：子类继承多个父类。

/* 一种特殊的修饰符：
    当一个类成员被修饰为 Protected的时候,有以下规则成立
        (1)该成员不能被外部访问,同 private
        (2)该成员可以被子类继承,同 public
    *继承在内存上其实是完全地拷贝，只是private信息没有给予访问权限。
*/






#include <iostream>
#include "Vehicle.h"    //这是父类
#include "tesla.h"      //这是子类,这里面包含"继承的重写"、"virtual关键字"等知识点
using namespace std;

int main(){
    Vehicle myVehicle;
    char Name[128]="volvo";
    myVehicle.setTrademark(Name);
    myVehicle.printTrademark();

    tesla myTesla;
    Vehicle* pointer=&myTesla;  //使用父类的指针指向子类的对象。
    pointer ->printTrademark(); //如果没有使用virtual重写这个函数，这个函数将执行的是父类里面的printTrademark()，而我现在使用了，则执行的是子类里面的。

    return 0;
}



