

/* >>> Than 10 Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter two numbers and sum them, if the total is greater than 10 prints "more than 10" and if the opposite prints "less than 10" ( using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
void moreOrLessFun();

int main()
{
    welcomeMassageFun();

    moreOrLessFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Than 10 Program ( Version 4 ) ..\n\n");
}

// Get first number function;
int getFirstNumberFun()
{
    int firstNum = 0;

    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    return firstNum;
}

// Get second number function;
int getSecondNumberFun()
{
    int secondNum = 0;

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    return secondNum;
}

// more or less than 10 function;
void moreOrLessFun()
{
    int firstNum = getFirstNumberFun();
    int secondNum = getSecondNumberFun();

    int sum = firstNum + secondNum;

    sum > 10 ? printf("\nmore than 10\n\n") : printf("\nless than 10\n\n");

    /* printf(sum > 10 ? "\nmore than 10\n\n" : "\nless than 10\n\n"); */
}