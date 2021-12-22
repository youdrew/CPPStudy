// 【数组与指针】&【利用多级指针 创建 未知大小的多维数】
// Created by Youdrew on 2021/12/25.
//https://www.cnblogs.com/chenyangyao/p/5222696.html

/*
    实际上并不存在多维数组，所谓的多维数组本质上是用一维数组模拟的。
    数组名是一个常量（意味着不允许对其进行赋值操作），其代表数组首元素的首地址。
    数组与指针的关系是因为数组下标操作符[]，比如，int a[3][2]相当于*(*(a+3)+2) 。
    指针是一种变量，也具有类型，其占用内存空间大小和系统有关，一般32位系统下，sizeof(指针变量)=4。
    指针可以进行加减算术运算，加减的基本单位是sizeof(指针所指向的数据类型)。
    对数组的数组名进行取地址(&)操作，其类型为整个数组类型。
    对数组的数组名进行sizeof运算符操作，其值为整个数组的大小(以字节为单位)。
    数组作为函数形参时会退化为指针。
*/
#include <iostream>
#include<stdio.h>
using namespace std;



int main(){

    string separator ="—";
    for (int i = 0; i < 4; ++i) {
        separator=separator+separator;
    }

    // 一维度数组—————————————————————————————————————————————————————————————————————————————————————————————————————————
    cout << endl << separator << "一维度数组" << separator << endl;
    char Var1[6]={'a', 'b', 'c', 'd', 'e', 'f'};           //定义了一个一维char形数组，有6个元素
    char * p = Var1;                                   // 相当于char * p = &Var1[0]
                                                       // 如果将&a打印出来，会发现打印出来的也是a数组的首地址值
                                                       // 但是其并不代表"数组"首地址的值，所以"char * p = &Var1"的写法是错误的
                                                       // 对数组名（如这里的 &Var1 ）进行取地址，得到的是整个数组类型的地址
                                                       // 所以如果要对单个元素进行指针赋值 应该 char *p[3]= &a;

    cout << "01. *p:   " << *p << endl;                           // 取到到是Var1里面第一个数值
    cout << "02. *p+1:   " << *p+2 << endl << endl;               // 取到到是Var1里面第三个数值 它在AscII里面排名99

    cout << "03. &Var1[0]:   " << &Var1[0] << endl;               // []优先级更高，数组首元素取地址，但是如果打印的话会打印这个的内容「比较特殊」
    cout << "04. Var1:   " << Var1 << endl << endl;

    cout << "05. Var1+1:   " << Var1 + 1 << endl;                 // char数组首地址内容+1
    cout << "06. &Var1+1:   " << &Var1 + 1 << endl;               // 数组地址+1
    //cout << "06. *(char *)(&Var1+1):    " << char(*(char *)(&Var1)+1) << endl; //取到了地址+1后指向的值，并转为char。
    cout << "07. &Var1[0]+1:   " << &Var1[0] + 1 << endl << endl;
    char *ptr2=&Var1[0] + 1;

    cout << "08. sizeof (Var1):   " << sizeof (Var1) << endl;
    cout << "09. sizeof (&Var1):   " << sizeof (&Var1) << endl;
    cout << "10. sizeof *p:   " << sizeof *p << endl;


    // 二维度数组—————————————————————————————————————————————————————————————————————————————————————————————————————————
    cout << endl << separator << "二维度数组" << separator << endl;
    int Var2[3][2];
    int t=1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j,++t) {
            Var2[i][j] = t;
            cout << Var2[i][j] << " " ;
        }
        cout << endl;
    }

    //赋值方法1
    int (* ptr3)[2]=Var2;   //如此赋值是对的，ptr3指向Var2，括号括起来是因为[]优先级比较高
    cout << endl << *ptr3[2] << endl;  //指向的是地三行的首地址
    cout << endl << *ptr3[2]+1 << endl;
    //赋值方法2
    cout << endl << Var2[1] << endl; //打印出来的是第二行的首地址 即第二行这个一维矩阵
    int *ptr4 = Var2[1];
    cout << *ptr4 << endl;  //第二行的首元素
    cout << *ptr4+3 << endl;  //因为是连续申请的，所以可以连续打印
    //赋值方法3 !!!
    int (*ptr5)[3][2]=&Var2;
    cout << endl << (*ptr5)[2][1] << endl;  //打印的是第三行第二个


    // 三维度数组—————————————————————————————————————————————————————————————————————————————————————————————————————————
    cout << endl << separator << "三维度数组" << separator << endl;
    int Var3[4][2][3];
    t=1;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k,++t) {
                Var3[i][j][k] = t;
                cout << &Var3[i][j][k] <<": "<<Var3[i][j][k] << " " << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    //—————————————【方法1：将整个三维数组赋值给*ptr6】———————————————————————————————————————————————————————————
    int (*ptr6)[4][2][3]=&Var3;     //和二维数组一样，直接取地址得到的是一维数组首地址,代表的是一整个数组的指针
    cout << *ptr6 << endl;  //指向的是整个三维数组的第一个值
    cout <<  *ptr6+1 << endl;    //+1就相当于是+了一整个二维数组
    cout <<  (*ptr6)[3]+1 << endl;  //相当于从19号这个加一个一维数组
    cout <<  (*ptr6)[2][3]+1 << endl;   //相当于从22号这里加一个int

    cout << *(&(*(*ptr6)[0][0])+1) << endl << endl;  //从最初的1号加一个int
    // 逐个打印三维数组的每个值
    t=0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k,++t) {
                cout << *(&(*(*ptr6)[0][0])+t) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


    //其他的赋值方式【【待学习】】
    int (*ptr7)[2][3]  = Var3;
    int (*ptr8) [3]  = Var3[0];//或者a[1]、a[2]
    int *ptr9 = Var3[0][0];//或者a[0][1]、a[1][0]...







    int X,Y;
    cin >> X,Y;



    return 0;
}