//
// Created by Youdrew on 2021/11/28.
//

/*
 * 编译器
 *         GCC/g++：GNU Compiler Collection
 *         MinGW：Minimalist GNU for Windows
 *                          *GNU的意思是：GNU's Not Unix! （GNU从里到外递归得不是闭源的）后来和Linux一起做了Linux系统
 *         有各种编译器，不同平台，不同软件的编译器都是不一样的。
 *
 * Make 和 Makefile
 *           相当于是编译前的指导文件。
 *          （g++在编译的时候需要一些额外属性设置 比如说关联什么 输出什么 make就用一个文本的形式将这些内容记录下来，而不是在命令行里一行行输入）
 *
 * Cmake
 *          依赖于Cmakelists.txt这个文件。相当于是一个小型化的编程语言。
 *          是一个跨平台的makefile文件。还可以用于生成IDE的工程文件。
 *          当然，它主要的作用，是用来生成上面具体平台的makefile。因为Cmake是跨平台脚本软件。
 *          构建出来了具体的makefile之后，就可以开始真正的编译了。
 *
 *          流程：
 *              Cmake文件（跨平台）    ——>     编译出具体的平台的makefile    ——>        可执行文件（这个文件可以直接放到命令行里进行执行）
 *                          （选择具体的编译器输出）                    （再次build）
 *                      例如（在命令行中执行）：                        cmake --build .
 *                      cmake -G "Unix Makefiles"
 *
 *
 *
 * 撰写方式
            cmake_minimum_required(VERSION 3.20)   //Cmake最小要求的版本号
            add library(<库名> <cpp所在位置>) // 导入一个第三方库
            project (main) //设置项目的名字
            add_executable(CPPStudy Homework_Mrs.Han/02_DataType/Vector_20211111.cpp)   // 可执行文件的名称叫做CPPStudy 依赖于Vector_20211111.cpp这个文件
                                                                                        // 其实还依赖于一些.h的一些头文件，同文件夹就能找到。

            message(STATUS ${PROJECT VERSION}) //打印出来一些东西，括号里是打印cmake的版本号

            include_directories（${PROJECT_BINARY_DIR}）// 把文件的一些关联的头文件目录放进来
            configure_file (<input（文件.h.in里）> <output（文件.h里，这是输出出来的）>) //  把input里的变量 定义成output
 *
 *
 *
 *
 *
 */



