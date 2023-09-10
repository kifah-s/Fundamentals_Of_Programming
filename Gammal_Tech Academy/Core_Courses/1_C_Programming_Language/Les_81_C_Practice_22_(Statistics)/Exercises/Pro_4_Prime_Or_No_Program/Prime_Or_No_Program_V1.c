

/* >>> Prime Or No Program ( Version 1 ) <<< */

/* >>> A program that verifies if the entered number is prime or no. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
void primeOrNo(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    primeOrNo(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Prime Or No Program ( Version 1 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Prime Or No / Function.
void primeOrNo(int x)
{
    int prime = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            prime++;
        }
    }

    if (prime == 0)
    {
        printf("\nNumber %d is: Prime\n\n", x);
    }
    else
    {
        printf("\nNumber %d is: Not Prime\n\n", x);
    }
}