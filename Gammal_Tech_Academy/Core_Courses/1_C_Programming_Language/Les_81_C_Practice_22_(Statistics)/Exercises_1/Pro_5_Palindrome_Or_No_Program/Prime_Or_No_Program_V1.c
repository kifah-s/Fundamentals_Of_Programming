

/* >>> Palindrome Or No Program ( Version 1 ) <<< */

/* >>> A program that verifies if the entered number is palindrome or no <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
void PalindromeOrNo(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    PalindromeOrNo(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Palindrome Or No Program ( Version 1 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Palindrome Or No / Function.
void PalindromeOrNo(int x)
{
    int y = 0, z = x;
    printf("\nNumber %d is: ", x);
    while (x > 0)
    {
        y = (y * 10) + (x % 10);
        x = x / 10;
    }
    // printf("\ny = %d\n\n", y); // Check.

    if (y == z)
    {
        printf("Palindrome\n\n");
    }
    else
    {
        printf("Not Palindrome\n\n");
    }
}