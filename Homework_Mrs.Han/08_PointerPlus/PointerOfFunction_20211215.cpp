// 【指针函数2】：类型为指针的函数
// Created by Youdrew on 2021/12/15.


//随机生成了10数，然后把这10个数通过stringstream强制转换成string
//储存在string里，然后通过迭代器遍历string，找到某个值
//判断，如果存在就输出，如果不存在就跳过进下一个值


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int* search(int* a, int num);

int main(){
    int array[10]; //主函数中定义的数组
    int* search(int* a, int num);//随机生成10个数，并且打印出来
        for(int i=0; i<10; i++){
            array[i]=rand();
            cout << array[i] << endl;}

    cout << "————————————————————" << endl; //打印分隔符

    search(array, sizeof(array)/sizeof(int)); //将主函数中数组的首地址传给子函数
    return 0;
}

int* search(int* a, int num) { //指针a指向主函数中定义的数组
    for (int i = 0; i < num; i++) {
        stringstream Temp;
        Temp << a[i];           //利用Temp，将int型转到string类型【int转string】
        string string1 = Temp.str();     //每个数字都转成了string储存在string1里面

        string::iterator iter; // 定义迭代器

        // 使用迭代器遍历
        for (string::iterator iter = string1.begin(); iter != string1.end(); iter++) {
            if (*iter == '0')
                cout << string1 << endl;
        }
    }
}