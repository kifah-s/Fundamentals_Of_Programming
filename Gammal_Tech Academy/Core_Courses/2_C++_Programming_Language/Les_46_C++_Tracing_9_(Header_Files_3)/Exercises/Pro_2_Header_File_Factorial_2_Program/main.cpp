#include <iostream>
#include "factorial.h"

int main()
{
    int n = 5;
    int factorial = calculate_factorial(n);
    std::cout << "The factorial of " << n << " is " << factorial << std::endl;
    return 0;
}
