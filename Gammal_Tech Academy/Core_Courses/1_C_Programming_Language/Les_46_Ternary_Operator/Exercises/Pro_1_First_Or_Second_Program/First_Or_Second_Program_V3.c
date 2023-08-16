

/* >>> First Or Second Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is larger than the second, printed "first is the greatest" and if vice versa printed "second is the greatest" (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
void greatestNumberFun(int firstNum, int secondNum);

int main()
{
    welcomeMassageFun();

    int firstNum = getFirstNumberFun();
    int secondNum = getSecondNumberFun();

    greatestNumberFun(firstNum, secondNum);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Or Second Program ( Version 3 ) ..\n\n");
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

// greatest number function;
void greatestNumberFun(int firstNum, int secondNum)
{
    firstNum > secondNum ? printf("\nfirst is the greatest\n\n") : printf("\nsecond is the greatest\n\n");

    /* printf(firstNum > secondNum ? "\nfirst is the greatest\n\n" : "\nsecond is the greatest\n\n"); */
}