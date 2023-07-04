

/* >>> Count From Num To 1 Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from the number I enter to the number 1. <<< */

#include <stdio.h>

void welcomeMassageFun();
int gettingNumberFun();
int fromNumTo1Fun(int num);

int main()
{
    welcomeMassageFun();
    int num = gettingNumberFun();
    fromNumTo1Fun(num);

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Count From Num To 1 Program ( Version 4 ) ..\n\n");
}

// Getting number function;
int gettingNumberFun()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    return num;
}

// From Num To 1 function;
int fromNumTo1Fun(int num)
{
    for (int i = num; i >= 1; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");
}