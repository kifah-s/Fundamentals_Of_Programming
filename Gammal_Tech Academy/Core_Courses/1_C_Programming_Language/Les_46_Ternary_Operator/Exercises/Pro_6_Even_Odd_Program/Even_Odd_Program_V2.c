

/* >>> Even Odd Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter a number if the number is even prints "even" if it's odd prints "odd" (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumberFun();
void evenOdFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();

    evenOdFun(num);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Odd Program ( Version 2 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// Even Odd function;
void evenOdFun(int num)
{
    num % 2 ? printf("\nOdd\n\n") : printf("\nEven\n\n");
}