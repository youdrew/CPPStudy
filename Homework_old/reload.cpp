//作业二 重载；
//created by youdrew copy from xa 2020.10.28

#include <iostream>
using namespace std;

int Max_1 (int x,int y);
int Max_1 (int x,int y,int z);
int x , y, P , z;

int main ()
{
    cout << "请输入你想要测试的数x：" << endl;
    cin >> x;
    cout << "请输入你想要测试的数y：" << endl;
    cin >> y;
    cout << "是否还有数值：有的话扣1，无的话扣2" << endl;
    cin >> P;
    if (P == 1) {
        cout << "请输入z的值：" << endl;
        cin >> z;
        cout << Max_1(x,y,z);
    }
    else
        cout << Max_1(x,y);

    return 0;
}

int Max_1 (int x, int y) {
    return x > y ? x : y;
//    下面这句话等同于上面那句话
//    if (x > y) return x;
//    else return y;
}

int Max_1 (int x, int y, int z)
{
    if (x > y)
        return (x > z) ? x : z;
    else return (z > y) ? z : y;
}
