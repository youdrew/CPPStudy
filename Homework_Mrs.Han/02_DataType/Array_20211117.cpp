// 【数组】
// Created by Youdrew on 2021/11/17.
//


/*
 *      数组
 *
 *              存储一个 固定大小 的 相同类型元素 的顺序集合。
 *              数组中的每一个元素的 内存地址 也是连续的。只要知道首元素地址就可以了。
 *              数组名是一个常量,不能被赋值。
 *
 *      对象数组
 *
 *              定义对象数组
                    类名数组名[元素个数];访问对象数组元素
                通过下标访问
                    数组名[下标].成员名

                数组中每一个元素对象被创建时，系统都会调用类构造函数初始化该对象。
                如果没有为数组元素指定显式初始值，数组元素便使用默认值初始化(调用默认构造函数)。

 */



#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;
using namespace std;

void arrayTest(int T[]){      //数组在作为行参的时候，不能定义为常量，❌设置 T[][]两个空值

}


int main ()
{
    int a[ 10 ];                                // n是一个包含 10 个整数的数组
    int b[10]={0,1,2,3,4};                      // 只给了一部分值
    static int c[]= {0,1,2,3,4,5,6,7,8,9};      // 未给出数组的确切大小
    float d[3][4];                              // 三行四列 先行再列


    // 初始化数组元素
    for ( int i = 0; i < 10; i++ )
    {
        a[ i ] = i + 100; // 设置元素 i 为 i + 100
    }
    cout << "Element" << setw( 13 ) << "Value" << endl;

    // 输出数组中每个元素的值
    for ( int j = 0; j < 10; j++ )
    {
        cout << setw( 7 )<< j << setw( 13 ) << a[ j ] << endl;
    }

    return 0;
}