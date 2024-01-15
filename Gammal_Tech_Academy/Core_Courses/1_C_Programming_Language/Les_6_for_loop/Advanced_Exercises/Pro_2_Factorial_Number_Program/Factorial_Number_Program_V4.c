

/* >>> Factorial Number Program ( Version 4 ) <<< */

/* >>> A program to calculate the factorial of a given number. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int factorialNumberFun();

int main()
{
    welcomeMassageFun();

    factorialNumberFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Factorial Number Program ( Version 4 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("\nEnter a number to find factorial : ");
    scanf("%d", &num);
    return num;
}

// Factorial Number function;
int factorialNumberFun()
{
    int num = getNumberFun();

    int fact = 1, i;

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d is : %d\n\n\n", num, fact);
}