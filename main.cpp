#include <iostream>
#include "bigint.inc.cpp"  // NOLINT(bugprone-suspicious-include)
//#include "doctest.h"
#include "doctest_main.cpp"
int main() {
    bigint a("123");
    bool b = a < 123;
    std::cout << b;
    return 0;
}
