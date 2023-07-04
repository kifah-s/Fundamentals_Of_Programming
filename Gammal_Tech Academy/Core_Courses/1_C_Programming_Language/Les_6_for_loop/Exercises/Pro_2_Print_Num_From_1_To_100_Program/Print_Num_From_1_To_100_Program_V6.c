

/* >>> Print Numbers From 1 To 100 Program ( Version 6 ) <<< */

/* >>> A program that prints numbers from 1 to 100. <<< */

#include <stdio.h>

void welcomeMassageFun();
int gettingNumberFun();
void printNumberFun(int number);

int main()
{
    welcomeMassageFun();
    int number = gettingNumberFun();
    printNumberFun(number);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Numbers From 1 To 100 Program ( Version 6 ) ..\n\n");
}

// Getting number function;
int gettingNumberFun()
{
    int number;
    printf("\nPlease enter a number smaller from 100 and larger from 0 : ");
    scanf("%d", &number);
    return number;
}

// Print number function;
void printNumberFun(int number)
{
    for (int i = number; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
}