

/* >>> Positive Negative Zero Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter a number, if it is positive, "positive" is printed, and if it is negative "negative", is printed, if zero prints "zero" (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("\n\nYou welcome in Positive Negative Zero Program ( Version 1 ) ..\n\n");

    int num = 0;

    printf("Please enter a number : ");
    scanf("%d", &num);

    num > 0 ? printf("\nPositive\n\n") : 0;
    num < 0 ? printf("\nNegative\n\n") : 0;
    num == 0 ? printf("\nZero\n\n") : 0;

    return 0;
}
