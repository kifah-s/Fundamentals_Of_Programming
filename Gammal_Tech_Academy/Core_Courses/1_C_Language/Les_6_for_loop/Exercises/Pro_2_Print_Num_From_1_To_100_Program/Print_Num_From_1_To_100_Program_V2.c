

/* >>> Print Numbers From 1 To 100 Program ( Version 2 ) <<< */

/* >>> A program that prints numbers from 1 to 100. <<< */

#include <stdio.h>

void welcomeMassageFun();
void printNumberFun();

int main()
{
    welcomeMassageFun();
    printNumberFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Numbers From 1 To 100 Program ( Version 2 ) ..\n\n");
}

// Print number function;
void printNumberFun()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
}