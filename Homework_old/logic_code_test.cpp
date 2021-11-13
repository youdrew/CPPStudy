//
// Created by Youdrew on 2020/11/7.
//

#include <iostream>
using namespace std;
double a;
double b;
int test;


int main()
{
    cin >> a;
    cin >> b;
    cout << "a is ("<< a <<"),b is ("<< b <<")" << endl;
    cout << endl;

    test = a && b ;
    cout << "二者" << "与" << "的关系是" << test << endl;

    test = a || b;
    cout << "二者" << "或" << "的关系是" << test << endl;

    test = !a+!b; //因为！的优先级高于+的优先级
    cout << "二者" << "非" << "的关系是" << test << endl;

}