#include "factorial.h"

int calculate_factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calculate_factorial(n - 1);
    }
}
