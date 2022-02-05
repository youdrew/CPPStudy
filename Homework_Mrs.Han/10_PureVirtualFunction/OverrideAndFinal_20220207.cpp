// C++ 11的两个新特性 override和final关键字
// Created by Youdrew on 2022/2/7.
//
// override与final都不是语言关键字(keyword)，只有在特定的位置才有特别含 意，其他地方仍旧可以作为一般标识符(identifier)使用。
/*





【override】关键字：
            显式函数重写的方式。
            写了这个的时候，就可以检查父类的虚函数是不是还存在。
            如果不存在会报错。



 */




class Base{
public:
    Base()=default;                 //default关键字，保留默认可能会自动生成的构造函数、拷贝构造、析构。为了让其不被之后的自动替代掉。
    // Base()=delete;              // 删除默认的构造函数。


    virtual int function1(){};      // ⚠️如果把这一条关掉，那么下面的
                                    // "virtual int function1() override{}; "
                                    // 会在编译的时候出错。
    virtual int function2(){};

    virtual int function3(){};

};


class derived :public Base{
public:
    virtual int function1() override{}; // ⚠️这是在强制地告诉编译器，我要重新写这个函数。也叫"覆盖（重写）"。
                                        // 如果它没有发现之前的virtual，它会报错。
                                        //   不同的范围，分别位于基类和派生类中
                                        //   函数的名字相同
                                        //   参数相同
                                        //   基类函数必须有virtual关键字

    virtual int function1(int a){};     // overload 重载
                                        // ⚠️函数名相同，参数列表不同
                                        // 相同的范围(在同一个类中)
                                        // 函数名字相同
                                        // 参数不同
                                        // virtual关键字可有可无


    virtual int function3() final{};    // ⚠️这里加了final就意味着，不能再重新写这个虚函数了。
};


class derived2 final : public Base{     // ⚠️这里加了final之后，意味着这里就是虚函数的头了

};