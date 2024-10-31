cmake_minimum_required(VERSION 3.29)
project(Console_Application)

set(CMAKE_CXX_STANDARD 20)

add_executable(Console_Application main.cpp
        BankAccount.h
        BankAccount.cpp)
