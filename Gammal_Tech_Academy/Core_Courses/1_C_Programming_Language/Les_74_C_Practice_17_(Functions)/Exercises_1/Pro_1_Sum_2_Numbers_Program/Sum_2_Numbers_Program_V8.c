

/* >>> Sum 2 Numbers Program ( Version 8 ) <<< */

/* >>> A program that asks the user to enter two values, then it sums the two values ​​that the user entered and print (using a function). <<< */

// www.gammal.tech

#include <stdio.h>

int fun(int *x, int *y)
{
    int t = *x + *y;

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