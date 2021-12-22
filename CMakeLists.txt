cmake_minimum_required(VERSION 3.20)
project(CPPStudy)                   #项目名称叫做CPPStudy

set(CMAKE_CXX_STANDARD 17)
# 设置Qt前缀路径
#set(CMAKE_PREFIX_PATH "/usr/local/lib")


# 其实还依赖于一些.h的一些头文件，同文件夹就能找到。

#find_package(OpenImageIO REQUIRED)

#include_directories(${OpenImageIO_INCLUDE_DIR})
#include_directories("/usr/local/Cellar/imath/3.1.3/include")

add_executable(CPPStudy Homework_Mrs.Han/09_MemoryManagement/MemoryManagement_NewAndDelete_20211223.cpp)   # 可执行文件的名称叫做CPPStudy 依赖于.cpp这个文件


#target_link_libraries(CPPStudy ${OpenImageIO_LIBS})

