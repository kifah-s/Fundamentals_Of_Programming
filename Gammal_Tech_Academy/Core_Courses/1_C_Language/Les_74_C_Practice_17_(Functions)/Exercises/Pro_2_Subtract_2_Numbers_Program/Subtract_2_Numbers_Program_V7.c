

/* >>> subtract 2 Numbers Program ( Version 7 ) <<< */

/* >>> A program that asks the user to enter two values, its function is to subtract the values ​​that the user entered (using a function) and print the result. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int subtract2Numbers();

int main()
{
    welcomeMassageFun();

    subtract2Numbers();

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in subtract 2 Numbers Program ( Version 7 ) ..\n\n");
}

// subtract 2 numbers / Function.
int subtract2Numbers()
{
    int x = 0, y = 0;

    printf("Please enter number 1: ");
    scanf("%d", &x);

    printf("Please enter number 2: ");
    scanf("%d", &y);

    int subtract = x + y;

    printf("\nsubtract 2 numbers = %d\n\n", subtract);
}
