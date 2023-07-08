

/* >>> Greater Or Smaller Than 20 Program ( Version 7 ) <<< */

/* >>> A program that asks the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int greaterThan20Fun(int num);
int smallerThan20Fun(int num);
int equalThan20Fun(int num);
int greaterOrSmallerThan20Fun();

int main()
{
    welcomeMassageFun();
    greaterOrSmallerThan20Fun();

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 7 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("Please enter number Greater or smaller than 20 : ");
    scanf("%d", &num);
    return num;
}

// Greater than 20 function;
int greaterThan20Fun(int num)
{
    if (num > 20)
    {
        int i = 20;
        while (i <= num)
        {
            printf("\n%d", i);
            i++;
        }
    }
}

// Smaller than 20 function;
int smallerThan20Fun(int num)
{
    if (num < 20)
    {
        int i = num;
        while (i <= 20)
        {
            printf("\n%d", i);
            i++;
        }
    }
}

// Equal than 20 function;
int equalThan20Fun(int num)
{
    if (num == 20)
    {
        printf("\n%d = 20", num);
    }
}

// Greater Or Smaller Than 20 function;
int greaterOrSmallerThan20Fun()
{
    int num = getNumberFun();

    greaterThan20Fun(num);

    smallerThan20Fun(num);

    equalThan20Fun(num);

    printf("\n\n\n");
}