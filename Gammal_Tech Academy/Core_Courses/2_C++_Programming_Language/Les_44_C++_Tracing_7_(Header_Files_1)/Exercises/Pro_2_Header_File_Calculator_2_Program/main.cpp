// main.cpp:
#include "calculator.h"
#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int sum = addition(a, b);
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;
    return 0;
}
