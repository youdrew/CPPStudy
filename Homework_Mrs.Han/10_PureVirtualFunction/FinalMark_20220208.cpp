// 【final标记】
// Created by Youdrew on 2022/2/8.
//

/*
 禁用继承:
    • C++允许将类标记为final
    • 在类名称后面使用关键字final，继承该类会导致编译错误。

 禁用重写:
    • C++中允许将函数标记为final
    • 在函数名后面使用关键字final，无法再子类中重写该方法。

 用来避免类被继承或是基类的函数被重写
 */

struct Derived1 final{
public:
    Derived1(){}
};

struct Derived2: public Derived1(){         // ⚠️⚠️ 编译错误❕
}


