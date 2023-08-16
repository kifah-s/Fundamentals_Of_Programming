

/* >>> Two Numbers Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is larger than the second, printed "first is the greatest" and if vice versa printed "second is the greatest" (using the boolean). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int firstNumberFun();
int secondNumberFun();
bool greatestNumberFun(int firstNum, int secondNum);

int main()
{
    welcomeMassageFun();

    int firstNum = firstNumberFun();
    int secondNum = secondNumberFun();

    if (greatestNumberFun(firstNum, secondNum) == 1)
    {
        printf("\nfirst number is the greatest\n\n");
    }
    else
    {
        printf("\nsecond number is the greatest\n\n");
    }

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Two Numbers Program ( Version 3 ) ..\n\n");
}

// Get first number function;
int firstNumberFun()
{
    int firstNum = 0;
    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    return firstNum;
}

// Get second number function;
int secondNumberFun()
{
    int secondNum = 0;
    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    return secondNum;
}

// greatest number function;
bool greatestNumberFun(int firstNum, int secondNum)
{
    if (firstNum > secondNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}