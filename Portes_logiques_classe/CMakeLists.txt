cmake_minimum_required(VERSION 3.2)

project(bilogis)


add_executable(main main.cpp XNOR.cpp XAND.cpp XNAND.cpp XOR.cpp NAND.cpp NOR.cpp S_AND.cpp S_OR.cpp)