

/* >>> Factorial Number Program ( Version 1 ) <<< */

/* >>> A program to calculate the factorial of a given number. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Factorial Number Program ( Version 1 ) ..\n\n");

    int fact = 1, i, num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of %d is : %d\n\n\n", num, fact);

    return 0;
}