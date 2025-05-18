cmake -S . -B build
cmake --build build
ctest --verbose --test-dir build
./build/FinanceApp
