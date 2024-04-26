cmake_minimum_required(VERSION 3.10)
project(CloudMeeting_Server)

set(CMAKE_CXX_STANDARD 11)

# 包含头文件所在目录
include_directories("./include")

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(server ${SOURCES} main.cpp)
