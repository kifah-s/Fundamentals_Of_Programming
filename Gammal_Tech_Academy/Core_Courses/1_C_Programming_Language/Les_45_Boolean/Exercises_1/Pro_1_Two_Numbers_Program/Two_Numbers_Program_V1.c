

/* >>> Two Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is larger than the second, printed "first is the greatest" and if vice versa printed "second is the greatest" (using the boolean). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
bool greatestNumberFun(int firstNum, int secondNum);

int main()
{
    welcomeMassageFun();

    int firstNum = 0, secondNum = 0;
    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    if (greatestNumberFun(firstNum, secondNum) == true)
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
    printf("\n\nYou welcome in Two Numbers Program ( Version 1 ) ..\n\n");
}

// greatest number function;
bool greatestNumberFun(int firstNum, int secondNum)
{
    if (firstNum > secondNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}