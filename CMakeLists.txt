cmake_minimum_required(VERSION 3.20)
project(CPPStudy)                   #项目名称叫做CPPStudy

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPStudy Homework_Mrs.Han/02_DataType/Vector_20211111.cpp)   # 可执行文件的名称叫做CPPStudy 依赖于Vector_20211111.cpp这个文件
                                                                            # 其实还依赖于一些.h的一些头文件，同文件夹就能找到。
