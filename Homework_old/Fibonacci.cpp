#include <iostream>
using namespace std;

// Fibonacci前两项为1，其他两项是之前两项之和。
// 输入你想要的值，它会给几个Fibonacci数值

inline long Fibonacci(long m,long n){
    return m+n;
}

inline long Print(long p){
    cout << p << "\t" ;
}

int main(){
    int Fibonacci_Num;
    cout << "请输入您想要呈现的Fibonacci数列个数:" << endl;
    cin >> Fibonacci_Num;
    long Fibonacci_List[Fibonacci_Num];
    const long F1=Fibonacci_List[0]=1,F2=Fibonacci_List[1]=1;          //Fibonacci_Num是总数，F1是数组第一个数字，F2是数组第二个数字；

    int Count;
    while (Fibonacci_Num <= 0)
        cout << "输入一个大于0的数字" << endl;
    while (Fibonacci_Num <= 1)
        cout << F1 << endl;
    while (Fibonacci_Num <= 2)
        cout << F1 << "\t" << F2 <<endl;
    while (Fibonacci_Num > 2 ) {
        for (Count = 2; Count < Fibonacci_Num ; ++Count) {
            Fibonacci_List[Count] = Fibonacci(Fibonacci_List[Count - 1], Fibonacci_List[Count - 2]);
        }
        break;
    }
    for (int i = 0; i < Fibonacci_Num; ++i) {
        Print(Fibonacci_List[i]);
    }
}