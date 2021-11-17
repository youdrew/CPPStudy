// 【学习目标】：共享数据的保护
// Created by Youdrew on 2021/11/16.
// 对于既需要共享、又需要防止改变的数据应该声明为常类型( 用const进行修饰)。对于不改变对象状态的成员函数应该声明为常函数。



/*
 *      常类型：
            常对象:必须进行初始化,不能被更新。 // const 类名 对象名
            常成员 用const进行修饰的类成员:  常数据成员和常函数成员
            常引用:被引用的对象不能被更新。 //const 类型说明符 &引用名
            常数组:数组元素不能被更新(详见第6章)。 //类型说明符 const 数组名[大小]...
            常指针:指向常量的指针(详见第6章)

 */

#include <iostream>
using namespace std;


class FilmNeverDie{
public:
    FilmNeverDie(int x,int y):n("讨厌的电影剧集"),m("我怎么可能会有讨厌的电影呢？"){
        this->x=x;
        this->y=y;
        cout << "Using "<<x<<"/"<<y<<"/"<<n<<"/"<<m<<" constructingFunction;" << endl;
    };
    int EngenePrint() const{cout << "Using EngenePrint;" << endl;};     //静态成员函数 声明与赋值
private:
    int x,y;
    const string n; //表达收藏夹的名字    //在一个类里建立一个const不能直接给它赋值，需要通过23行的方式
    const string m; //表达收藏夹的作用

};


class n;

int main(){
    // const对象 其中任何的成员变量都不可以被修改 对于对象指针和对象引用也是一样 且只能使用const成员函数
    FilmNeverDie const Film1{1,2};
    Film1.EngenePrint();
}