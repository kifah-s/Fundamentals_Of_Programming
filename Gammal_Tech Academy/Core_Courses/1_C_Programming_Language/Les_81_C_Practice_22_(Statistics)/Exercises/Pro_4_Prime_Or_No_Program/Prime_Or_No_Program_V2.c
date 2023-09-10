

/* >>> Prime Or No Program ( Version 2 ) <<< */

/* >>> A program that verifies if the entered number is prime or no. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
int primeOrNo(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    int prime = primeOrNo(number);
    if (prime == 1)
    {
        printf("\nNumber %d is: Prime\n\n", number);
    }
    else
    {
        printf("\nNumber %d is: Not Prime\n\n", number);
    }

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Prime Or No Program ( Version 2 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Prime Or No / Function.
int primeOrNo(int x)
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
        return 1;
    }
    else
    {
        return 0;
    }
}