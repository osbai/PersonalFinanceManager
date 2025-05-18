cmake_minimum_required(VERSION 3.10)
project(PersonalFinanceManager)

set(CMAKE_CXX_STANDARD 17)

#add_executable(Tests
#    tests/test_transaction.cpp
#    src/Transaction.cpp
#)

add_executable(FinanceApp
    src/main.cpp
    src/Transaction.cpp
)


## Include Gtest

include(FetchContent)

# Download GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(TestsGtest
    tests/test_transaction_gtest.cpp
    src/Transaction.cpp
)

target_include_directories(TestsGtest PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_link_libraries(TestsGtest gtest_main)

include(GoogleTest)
gtest_discover_tests(TestsGtest)
