

/* >>> Number Type Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and analyzes the type of this number (read from the right as the left or not) such as "505". <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int palindromeFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    // printf("\n%d\n\n", number);

    palindromeFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Type Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Palindrome / function;
int palindromeFun(int number)
{
    int y = 0, z = number;
    while (number != 0)
    {
        y = y * 10 + number % 10; // Access to the last digit in the number.
        number /= 10;             //  Access to the first digit in the number.
    }

    if (y == z)
    {
        printf("\nThe number \" %d \" is Palindrome\n\n", z);
    }
    else
    {
        printf("\nThe number \" %d \" is Not palindrome\n\n", z);
    }

}