

/* >>> Factorial Number Program ( Version 2 ) <<< */

/* >>> A program to calculate the factorial of a given number. <<< */

#include <stdio.h>

void welcomeMassageFun();
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
    printf("\n\nYou welcome in Factorial Number Program ( Version 2 ) ..\n\n");
}

// Factorial Number function;
int factorialNumberFun()
{
    int fact = 1, i, num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d is : %d\n\n\n", num, fact);
}