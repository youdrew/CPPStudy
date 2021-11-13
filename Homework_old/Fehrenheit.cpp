//
// Created by Youdrew on 2020/11/6.
//

#include <iostream>
using namespace std;

int main()
{
    int Fahrenheit, Centigrade, Type;

    cout << "你的温度单位是什么? Fahrenheit = 1; Centigrade = 2 ;" << endl;
    cin >> Type;

    switch (Type)
    {
        case 1:
            cout << "请输入华氏度的值：";
            cin >> Fahrenheit;
            Centigrade = (Fahrenheit - 32) * 5 / 9;
            cout << "您所转换的摄氏度是：" << Centigrade << endl;
            break;


        case 2
            :cout << "请输入摄氏度的值";
            cin >> Centigrade;
            Fahrenheit = Centigrade * 9 / 5 + 32;
            cout << "您所转换的华氏度是：" << Fahrenheit << endl;
            break;


        default :
            cout << "菜🐔菜🐔你又错了啊" << endl;
    }
}

