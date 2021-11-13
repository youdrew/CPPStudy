#include <iostream>
using namespace std;
#include <algorithm>


bool LeapyearBool;
bool NextLeapyearBool;


//判断是否是闰年
int judgeyearBool(int y) {
    LeapyearBool = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
    return LeapyearBool;
}

//判断下一个闰年是哪一年
int judgeNextyearBool(int y){
    int Nextyear;

    Nextyear = y + (4 - y % 4);
    NextLeapyearBool = judgeyearBool(Nextyear);

    if (NextLeapyearBool)
        return NextLeapyearBool,Nextyear;
    else
        for (int i = y; judgeyearBool(y); ++i) {
            Nextyear = i;
        }
        return NextLeapyearBool,Nextyear;
}


int main() {

    int values;
    cout << "How many values do you want to calculate：";
    cin >> values;


    //获取输入
    int year[values];
    for (int i = 0; i < values; ++i) {
        cout << "which year you want to calculate：";
        cin >> year[i];

    }

//    sort(year[0],year[values-1],greater<int>());

//    for (int i = 0; i < values; ++i) {
//        cout << year[i] << endl;
//    }



    //计算并打印 打印每一年
    for (int i = 0; i < values; ++i) {
        bool m; int n;

        if (judgeyearBool(year[i])){
            cout << year[i] << " is a leap year" << endl;}
        else{
            m,n = judgeNextyearBool(year[i]);
            cout << year[i] << " is not a leap year" << "You need to go through again more " << n-year[i]
                 << " years, Good lucky!" << endl;
        }

}
    return 0;
}