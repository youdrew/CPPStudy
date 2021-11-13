// 【学习目标】 强制类型转换
// Created by Youdrew on 2021/11/14.
// http://c.biancheng.net/cpp/biancheng/view/3297.html



/*
 *          隐式类型转换是安全的，显式类型转换是有风险的
 *          C 语言之所以增加强制类型转换的语法，就是为了强调风险，让程序员意识到自己在做什么。
 *          但是，这种强调风险的方式还是比较粗放，粒度比较大，它并没有表明存在什么风险，风险程度如何。
 *          再者，C 风格的强制类型转换统一使用 ( )，而 ( ) 在代码中随处可见，所以也不利于使用文本检索工具（例如 Windows 下的 Ctrl+F、Linux 下的 grep 命令、Mac 下的 Command+F）定位关键代码。
 *          为了使潜在风险更加细化，使问题追溯更加方便，使书写格式更加规范，C++ 对类型转换进行了分类，并新增了四个关键字来予以支持
 *
 *
 *          C++中的四种关键字语法：
 *
 *                              static_cast：
 *                                          用于良性转换，一般不会导致意外发生，风险很低。，例如 short 转 int、int 转 double、const 转非 const、向上转型等；
 *                              const_cast：
 *                                          用于 const 与非 const、volatile 与非 volatile 之间的转换。const_cast 比较好理解，它用来去掉表达式的 const 修饰或 volatile 修饰。
 *                              reinterpret_cast：
 *                                          这种转换仅仅是对二进制位的重新解释，reinterpret 是 “重新解释” 的意思，顾名思义，reinterpret_cast 这种转换仅仅是对二进制位的重新解释，不会借助已有的转换规则对数据进行调整，非常简单粗暴，但很灵活，所以风险很高。
 *                              dynamic_cast
 *                                          借助 RTTI，用于类型安全的向下转型（Downcasting）。
 *
 */
#include <iostream>
using namespace std;


double scores = 95.5;
int n = static_cast<int>(scores);          //强制类型转换 把浮点数scores转换成int

int main(){
    cout << n << endl;
}