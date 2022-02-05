// 动态绑定
// Created by Youdrew on 2022/2/5.
//

/*
在编译时,我们不能预知指针指向还是指向Vehicle还是具体某辆车。在运行时,通过判断p指向的特定对象是什么,从而决定调用哪个版本的函数。

    实现动态绑定(多态)的要点
        1.具有类的继承关系图,这个继承关系中每个类都可以调用一个虚函数;
        2.基础类的指针指向子类对象;
        3.通过基础类的指针调用虚函数。
 */


#include <iostream>
#include "/Users/youdrew/CLionProjects/CPPStudy/Homework_Mrs.Han/05_Class&Object/Vehicle.h"    //这是父类
#include "/Users/youdrew/CLionProjects/CPPStudy/Homework_Mrs.Han/05_Class&Object/tesla.h"      //这是子类,这里面包含"继承的重写"、"virtual关键字"等知识点
using namespace std;

class byd:public Vehicle{
public:
    byd(){
        cout << "你拥有了一辆比亚迪" << endl;
        char Name[128]="byd";
        setTrademark(Name);
    }

    ~byd(){
        cout << "你失去了一辆比亚迪" << endl;
    }

    virtual int printTrademark(){
        cout << "the trademark is " << trademark << "（通过子类的函数打印）" << endl;
    };
};


int main(){
    int i;
    Vehicle *ptr1;

    cout << "请输入你的财务状况（1为有钱，0为没钱）" << endl;
    cin >> i;

    if (i==1)                // ⚠️ 这里就是在建立动态绑定，我们不知道它接下来要选择什么。不同选择调用不同的函数。
        ptr1 = new tesla;
    else
        ptr1 = new byd;

    ptr1 -> printTrademark();       // ⚠️ 然后就可以在这里调用被选择的相关类中的函数


    //只有通过基类的指针或引用调用虚函数时,才会发生动态绑定。
    byd byd1;
    Vehicle* ptr2 = &byd1;  // 基类指向派生类的对象.
    Vehicle &ref = byd1;    // 基类引用作为派生类的别名。
    Vehicle vehicle = byd1;  // 调用Vehicle的拷贝构造函数用vehicle构造byd1。因为byd1中的信息实际上更多一点，然后把byd1赋值给vehicle的时候实际上是发生了数据损失。
                             // 这个时候的byd1实际上已经和byd这个类没有关系了，因为它已经失去了byd的一些特有的信息了。

    //调用方法：
    /*
     ptr->函数名,调用派生类中的对应函数
     ref函数名,调用派生类中的对应函数
     vehicle.函数名,调用"基础类"中的对应函数。
     */


    return 0;
}


