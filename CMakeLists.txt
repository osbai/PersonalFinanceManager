cmake_minimum_required(VERSION 3.10)
project(PersonalFinanceManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(FinanceApp
    src/main.cpp
    src/Transaction.cpp
)
