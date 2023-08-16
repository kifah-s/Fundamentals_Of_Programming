

/* >>> Largest Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two numbers and print the largest in them (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
void largestFun(int firstNum, int secondNum);

int main()
{
    welcomeMassageFun();

    int firstNum = getFirstNumberFun();
    int secondNum = getSecondNumberFun();

    largestFun(firstNum, secondNum);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Program ( Version 2 ) ..\n\n");
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

// largest function;
void largestFun(int firstNum, int secondNum)
{
    firstNum > secondNum ? printf("\nLargest : %d\n\n", firstNum) : printf("\nLargest : %d\n\n", secondNum);
}