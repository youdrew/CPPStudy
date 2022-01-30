// 输入数组大小 返回一个指向这个三维（rgb或rgba）数组的指针
// Created by Youdrew on 2022/1/14.
//

#include <iostream>
#include <vector>
using namespace std;

struct rgb{
    //单个像素的RGB值
    float r,g,b;
};
struct rgba{
    //单个像素rgba四个值
    float r,g,b,a;
};

vector<rgba> Pic_Build(int x, int y, int z);                           // 用于判断z（rgb还是rgba）
                                                                       // 如果是三维数组，将其三维数组扔进四位数组，返回一个四纬数组地址
                                                                       // 如果是四维数组，返回一个四纬数组地址
int Martix3Build(int x,int y,std::vector<rgb>& points3);     // 新建3纬数组，每个像素的r值用来做count
int Martix4Build(int x,int y,std::vector<rgba>& points4);    // 新建4纬数组，每个像素的r值用来做count




//————————————————————————————main——————————————————————————————————
int main(){
    int x,y,z;
    cout << "x:";
    cin >> x;
    cout << "y:";
    cin >> y;
    cout << "z:";
    cin >> z;

    Pic_Build(x,y,z);
}

//————————————————————————————函数实现————————————————————————————————


vector<rgba> Pic_Build(int x, int y, int z){
    switch (z) {
        case 3:{
            vector<rgb> point3;
            Martix3Build(x, y, point3);
            //测试
            //cout << "测试point[5].r：  " << point3[0].r << endl;   //可以在这里通过赋值的方式调用指针的值；

            //将rgb装进rgba中
            vector<rgba> point4;
            Martix4Build(x, y, point4);
            for (int i = 0; i < x*y; ++i) {
                point4[i].r=point3[i].r;
                point4[i].g=point3[i].g;
                point4[i].b=point3[i].b;
                //测试
                //cout << point4[i].r << " " << point4[i].g << " " << point4[i].b<< " " << point4[i].a<<endl;
            }
            return point4;
        }

        case 4:{
            vector<rgba> point4;
            Martix4Build(x, y, point4);
            //cout << "测试point[5].r：  " << point4[0].r << endl;   //可以在这里通过赋值的方式调用指针的值；
            return point4;
        }
    }

    
}

int Martix3Build(int x,int y,std::vector<rgb>& points3){
    //新建一个二维数组,二维矩阵中每个像素有3个值；
    points3.resize(x * y);
    float Count=0;

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            Count++;
            //对每个像素对具体处理
            points3[j + i * x] = {Count, 0, 0};
            //打印
            //cout << points3[j+i*x].r << " " << points3[j+i*x].g << " " << points3[j+i*x].b<<endl;
        }
    }
}

int Martix4Build(int x,int y,std::vector<rgba>& points4){
    //新建一个二维数组,二维矩阵中每个像素有4个值；
    points4.resize(x * y);

    float Count=0;

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            Count++;
            //对每个像素对具体处理
            points4[j + i * x] = {Count, 0, 0, 0};
            //打印
            //cout << points4[j+i*x].r << " " << points4[j+i*x].g << " " << points4[j+i*x].b << " " << points4[j+i*x].a <<endl;
        }
    }
}