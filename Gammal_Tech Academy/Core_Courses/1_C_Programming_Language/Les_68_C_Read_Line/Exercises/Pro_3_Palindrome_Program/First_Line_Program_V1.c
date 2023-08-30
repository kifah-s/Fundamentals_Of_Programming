

/* >>> Palindrome Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, if this number is palindrome it prints 'correct' example (101, 52625, 55055). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void palindromeFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    palindromeFun(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Palindrome Program ( Version 1 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int number)
{
    printf("Please enter number: ");
    scanf("%d", &number);

    return number;
}

// Palindrome / Function.
void palindromeFun(int number)
{
    int x = number, y = 0;
    
    while (number != 0)
    {
        y = y * 10 + number % 10;
        number = number / 10; // Remove last digit from number.
    }

    if (x == y)
    {
        printf("\nPalindrome\n\n");
    }
    else
    {
        printf("\nNot Palindrome\n\n");
    }
}