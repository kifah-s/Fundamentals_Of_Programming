

/* >>> subtract 2 Numbers Program ( Version 8 ) <<< */

/* >>> A program that asks the user to enter two values, its function is to subtract the values ​​that the user entered (using a function) and print the result. <<< */

// www.gammal.tech
#include <stdio.h>

int fun(int *x, int *y)
{
    int t = *x - *y;

    return t;
}

int main()
{
    int x, y;
    printf("\nEnter 2 numbers: ");

    scanf("%d %d", &x, &y);

    printf("\n%d\n\n", fun(&x, &y));

    return 0;
}