

/* >>> Calculator Program ( Version 1 ) <<< */

/* >>> A program calculator that performs operations (combination, subtraction, multiplication and division) using the functions. <<< */

#include <stdio.h>

int combination(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main()
{
    printf("\n\nYou welcome in Calculator Program ( Version 1 ) .. \n\n");

    combination(5, 9);
    subtraction(10, 5);
    multiplication(5, 5);
    division(6, 2);

    printf("\n\n\n");

    return 0;
}

// Functions ..
// combination function;
int combination(int x, int y)
{
    printf("%d\n", x + y);
}

// subtraction function;
int subtraction(int x, int y)
{
    printf("%d\n", x - y);
}

// multiplication function;
int multiplication(int x, int y)
{
    printf("%d\n", x * y);
}

// division function;
int division(int x, int y)
{
    printf("%d\n", x / y);
}