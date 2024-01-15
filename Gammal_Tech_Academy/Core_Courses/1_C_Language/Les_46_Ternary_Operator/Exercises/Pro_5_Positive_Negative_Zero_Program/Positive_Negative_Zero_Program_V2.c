

/* >>> Positive Negative Zero Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter a number, if it is positive, "positive" is printed, and if it is negative "negative", is printed, if zero prints "zero" (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumberFun();
void poNeZeFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();

    poNeZeFun(num);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Negative Zero Program ( Version 2 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// Positive or Negative or Zero function;
void poNeZeFun(int num)
{
    num > 0 ? printf("\nPositive\n\n") : 0;
    num < 0 ? printf("\nNegative\n\n") : 0;
    num == 0 ? printf("\nZero\n\n") : 0;
}