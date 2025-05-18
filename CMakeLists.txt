# Add this near the top of CMakeLists.txt
option(CODE_COVERAGE "Enable coverage reporting" OFF)

if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    message(STATUS "Code coverage enabled")
    add_compile_options(-g -O0 --coverage)
    add_link_options(--coverage)
    link_libraries(gcov)
endif()

cmake_minimum_required(VERSION 3.10)
project(PersonalFinanceManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(FinanceApp
    src/main.cpp
    src/Transaction.cpp
)

## Include Gtest

include(FetchContent)

# Set policy CMP0135 to NEW (ensures timestamp is always considered)
cmake_policy(SET CMP0135 NEW)


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
    tests/test_account_gtest.cpp
    tests/test_all_gtest.cpp
    src/Transaction.cpp
    src/Category.cpp
    src/Budget.cpp
    src/Account.cpp
)

target_include_directories(TestsGtest PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_link_libraries(TestsGtest gtest_main)

include(GoogleTest)
gtest_discover_tests(TestsGtest)
