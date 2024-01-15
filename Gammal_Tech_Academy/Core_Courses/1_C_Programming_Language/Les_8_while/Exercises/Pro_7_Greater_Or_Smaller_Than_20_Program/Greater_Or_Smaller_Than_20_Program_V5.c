

/* >>> Greater Or Smaller Than 20 Program ( Version 5 ) <<< */

/* >>> A program that asks the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int greaterOrSmallerThan20Fun(int num);

int main()
{
    welcomeMassageFun();
    int num = getNumberFun();
    greaterOrSmallerThan20Fun(num);

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 5 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("Please enter number Greater or smaller than 20 : ");
    scanf("%d", &num);
    return num;
}

// Greater Or Smaller Than 20 function;
int greaterOrSmallerThan20Fun(int num)
{
    int i;

    if (num > 20)
    {
        i = 20;
        while (i <= num)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else if (num < 20)
    {
        i = num;
        while (i <= 20)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else
    {
        printf("\n%d = 20", num);
    }
    printf("\n\n\n");
}