// 数制转换程序，将2进制的数据转为10进制的
// Created by Youdrew on 2021/11/03.
// 输入一个二进制数，将其转换为十进制数输出
// 例如：
// 输入1101则：  1101(二进制)=1(2^3)+1(2^2)+0(2^1)+1(2^0)=13（十进制）

#include <iostream>
using namespace std;

double power (double x, int n)  //得到的数值是（2^*）之后的数值
{
    double val = 1.0;
    while (n--)  //n--的意思是n=n-1
        val *= x;  //A=A*C等同于A*=C
    return val;
}

int main() {
    int value = 0;
    cout << "Enter an 8 bit binary number ";
    for (int i = 7; i >= 0; i--)    // 将输入数值一个个处理，然后识别为"1"的值，进行2进值转换，0忽略
    {
        char ch;
        cin >> ch;
        if (ch == '1')
            value += static_cast<int>(power(2, i));  //static_cast是强制类型转换，将char形转为int型
    }
    cout << "Decimal value is " << value << endl;
    return 0;
}

