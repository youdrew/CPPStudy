////作业一
//#include <iostream>
//using namespace std;
//
//int main() {
//    int All = 0;
//    //这是一个菜🐔写（抄）的for循环语句
//    for (int Number = 0 ; Number < 11; Number = Number + 1 )
//    {
//        All = All + Number;
//        cout << "当前值是：" << Number << endl;
//    }
//    cout << "总和是的值：" << All << endl;
//}





/*
//作业二
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#define PI 3.14
using namespace std;

int main()
{
    int Area, Perimeter, length, Shape;
    cout << "What kind of shape you have? circle = 1; square = 2 ;" << endl;
    cin >> Shape;

    switch (Shape) {
        case 1 :
            cout << "输入你的圆形直径";
            cin >> length;
            Area = PI * pow(length, 2);
            cout << "这个圆的面积大约是：" << Area << endl;
            break;

        case 2 :
            cout << "输入你的方形的边长";
            cin >> length;
            Area = pow(length, 2);
            cout << "这个方形的面积是：" << Area << endl;
            break; // 可选的

        default :
            cout << "菜🐔菜🐔你又错了啊" << endl;
    }
}
*/








#include <iostream>
#include <ctime>
using namespace std;

struct Times
{
    short year;
    short month;
    short day;
    short hour;
    short minute;
    short second;
};

int mian()
{
    Times time1;

    time1.year = ;


    cout << "今年是：" << time1.year << endl;
};
