//
// Created by Youdrew on 2021/12/5.
//



#include <OpenImageIO/imageio.h>

#include <iostream>
using namespace std;







int main(){
    auto path= "/Users/youdrew/Pictures/Untitled(2).tif";
    unique_ptr test=std::move(OpenImageIO_v2_3::ImageInput::open(path));


    return 0;
}