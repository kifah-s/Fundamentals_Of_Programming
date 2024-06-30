

/* >>> Print Numbers From 1 To 100 Program ( Version 3 ) <<< */

/* >>> A program that prints numbers from 1 to 100. <<< */

#include <stdio.h>

void welcomeMassageFun();
void printNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 1;
    printNumberFun(number);
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Numbers From 1 To 100 Program ( Version 3 ) ..\n\n");
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