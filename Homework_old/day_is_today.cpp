//
// Created by Youdrew on 2020/11/14.
//这个程序能够根据输入的时间，报出周几来；

#include <iostream>
#include <string>
using namespace std;

char Week_num[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int Which_year,Which_month,Which_day;
char Which_weekday[7][10];
int z,s,m;
//z是距离2000年1月1日有多少天；s是算到这个月以来总共比之前多了多少天（一个月算30天）；m是代理的当前日，因为我们一个月是按30天计算的。


int main() {

    cout << "请输入这一年是哪一年（输入数字）" << endl;
    cin >> Which_year;

    cout << "请输入月份（输入数字）" << endl;
    cin >> Which_month;

    cout << "请输入几号(输入数字)" << endl;
    cin >> Which_day;

    while (Which_year % 4 == 0) {
        while (Which_month >= 12)
            {s = 6;break;}
        while (Which_month >= 10)
            {s = 5;break;}
        while (Which_month >= 8)
            {s = 4;break;}
        while (Which_month >= 7)
            {s = 3;break;}
        while (Which_month >= 5)
            {s = 2;break;}
        while (Which_month >= 3)
            {s = 1;break;}
        while (Which_month >= 2)
            {s = 0;break;}
        while (Which_month >= 1)
            {s = 1;break;}
        break;
    }
    while (Which_year % 4 != 0) {
        while (Which_month >= 12)
            {s = 5;break;}
        while (Which_month >= 10)
            {s = 4;break;}
        while (Which_month >= 8)
            {s = 3;break;}
        while (Which_month >= 7)
            {s = 2;break;}
        while (Which_month >= 5)
            {s = 1;break;}
        while (Which_month >= 3)
            {s = 0;break;}
        while (Which_month >= 2)
            {s = -1;break;}
        while (Which_month >= 1)
            {s = 1;break;}
        break;
    }

    while (Which_day > 30)
        {m = 30;break;}
    while (Which_day <= 30)
        {m = Which_day;break;}
    bool c = 0-(m == 30);

//______________________________________________

    while (Which_year >= 2000) {

        //大于2000年且是闰年的情况
        while (Which_year % 4 == 0) {
            bool b = (((Which_year - 2000) / 4) >= 1);
            z = 365 * (Which_year - 2000) + ((Which_month-1) * 30) + m + c + (6 * ((Which_year - 2000) / 4 - 1 * b)) + s;break;
        }
        //大于2000年且不是闰年的情况
        while (Which_year % 4 != 0) {
//            bool b = ((Which_year - 2000) / 4) >= 1;
//            cout << b << endl;
            z = 365 * (Which_year - 2000) + ((Which_month-1) * 30) + m + int((Which_year - 2000)/4 + 1) + s;

            cout << Which_year<<"\t"<<Which_month<<"\t"<<m<<"\t"<<int((Which_year - 2000)/4)<<"\t"<<z<<endl; //测试值2019.3.30 应该是7028
            break;

        }
        break;}

    while (Which_year < 2000) {
        //小于2000年且是闰年的情况
        while (Which_year % 4 == 0) {
            bool b = (((Which_year - 2000) / 4) >= 1);
            z = 365 * (Which_year - 2000) + ((Which_month-1) * 30) + m + (6 * ((Which_year - 2000) / 4 - 1 * b)) + s;break;
        }

        //小于2000年且不是闰年的情况
        while (Which_year % 4 != 0) {
            bool b = (((Which_year - 2000) / 4) >= 1);
            z = 365 * (Which_year - 2000) + ((Which_month-1) * 30) + m + (6 * ((Which_year - 2000) / 4 - 1 * b)) + s;break;
        }
        break;}

    for (int i = 0; i < 11; ++i) {
        Which_weekday[1][i] = Week_num[int((z % 7) +3 )][i];
    }

    cout << Which_year << "年," << Which_month << "月" << Which_day << "日是" << Which_weekday[1] << endl;
    return 0;
}


//总算不对，老子不打算算了