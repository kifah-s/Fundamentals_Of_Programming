

/* >>> Factorial Number Program ( Version 3 ) <<< */

/* >>> A program to calculate the factorial of a given number. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int factorialNumberFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    factorialNumberFun(num);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Factorial Number Program ( Version 3 ) ..\n\n");
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
int factorialNumberFun(int num)
{
    int fact = 1, i;

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d is : %d\n\n\n", num, fact);
}