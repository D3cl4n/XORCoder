cmake_minimum_required(VERSION 3.29)
project(XORCoder)

# specify c++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_OBJCXX_STANDARD_REQUIRED True)

# include directory
include_directories(include)

# source files
add_executable(main src/main.cpp src/utils.cpp)
add_executable(sample src/samples/hello_world.cpp)
