//
// Created by Youdrew on 2021/12/5.
//




#include <OpenImageIO/imageio.h>
#include <QtCore/QCoreApplication>
#include <iostream>

using namespace std;
OIIO_NAMESPACE_USING






int main(){
    auto path= "/Users/youdrew/Pictures/Untitled(2).tif";
    unique_ptr test=std::move(ImageInput::open(path));

    QCoreApplication app(argc, (char**)argv);


    return 0;
}