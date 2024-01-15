

/* >>> Calculator Program ( Version 4 ) <<< */

/* >>> A program calculator that performs operations (combination, subtraction, multiplication and division) using the functions. <<< */

#include <stdio.h>

int combination(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main()
{
    printf("\n\nYou welcome in Calculator Program ( Version 4 ) .. \n\n");

    int com = combination(5, 9);
    int sub = subtraction(10, 5);
    int mul = multiplication(5, 5);
    int div = division(6, 2);

    printf("%d\n", com);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%d\n", div);

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