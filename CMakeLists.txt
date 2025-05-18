cmake_minimum_required(VERSION 3.10)
project(PersonalFinanceManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tests
    tests/test_transaction.cpp
    src/Transaction.cpp
)

#target_include_directories(Tests PRIVATE
#    ${PROJECT_SOURCE_DIR}/src
#)

add_executable(FinanceApp
    src/main.cpp
    src/Transaction.cpp
)
