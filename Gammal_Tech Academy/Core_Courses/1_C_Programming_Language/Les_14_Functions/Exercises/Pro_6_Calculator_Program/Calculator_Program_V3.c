

/* >>> Calculator Program ( Version 3 ) <<< */

/* >>> A program calculator that performs operations (combination, subtraction, multiplication and division) using the functions. <<< */

#include <stdio.h>

int combination(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main()
{
    printf("\n\nYou welcome in Calculator Program ( Version 3 ) .. \n\n");

    printf("%d\n", combination(5, 9));
    printf("%d\n", subtraction(10, 5));
    printf("%d\n", multiplication(5, 5));
    printf("%d\n", division(6, 2));

    printf("\n\n\n");

    return 0;
}

// Functions ..
// combination function;
int combination(int x, int y)
{
    int result = x + y;
    return result;
}

// subtraction function;
int subtraction(int x, int y)
{
    int result = x - y;
    return result;
}

// multiplication function;
int multiplication(int x, int y)
{
    int result = x * y;
    return result;
}

// division function;
int division(int x, int y)
{
    int result = x / y;
    return result;
}