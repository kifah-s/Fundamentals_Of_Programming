

/* >>> Than 10 Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers and sum them, if the total is greater than 10 prints "more than 10" and if the opposite prints "less than 10" ( using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("\n\nYou welcome in Than 10 Program ( Version 1 ) ..\n\n");

    int firstNum = 0, secondNum = 0, sum = 0;

    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    sum = firstNum + secondNum;

    sum > 10 ? printf("\nmore than 10\n\n") : printf("\nless than 10\n\n");

    return 0;
}
