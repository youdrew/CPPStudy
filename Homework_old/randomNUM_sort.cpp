#include <iostream>
#include <ctime>
using namespace std;

//randomNUM_sort
//这是一个新建了一百个随机数，然后给其排序的程序，用到了"指针作为函数参数"

int *m,*n;
int s;

int compare(int *m,int *n)
{
    int t;
    t=*n;
    *n=*m;
    *m=t;
}


int main()
{
    int A[100];int Count;
    for(int i=0;i<100;i++){
        A[i]=rand();
        cout << "【"<< i+1 << "】" << ":" << A[i] << endl;
    }

    for (int i = 0; i < 100; ++i){
        for (int i = 0; i < 100; ++i) {
            if(A[i]<=A[i+1])
                compare(&A[i],&A[i+1]);       //指针作为函数的参数可以更改函数外面的值。
            else if (A[i]>=A[i+1])
                continue;
        }}

    cout << "————————————————————————————————" << endl << "按照降序排列为："<< endl ;

    for (int i = 0; i < 100; ++i){
        cout << "【"<< i+1 << "】" << ":" << A[i] << endl;
    }
}