

/* >>> subtract 2 Numbers Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter two values, its function is to subtract the values ​​that the user entered (using a function) and print the result. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int subtract2Numbers(int x, int y);

int main()
{
    welcomeMassageFun();

    int num_1 = 0, num_2 = 0;

    subtract2Numbers(num_1, num_2);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in subtract 2 Numbers Program ( Version 6 ) ..\n\n");
}

// subtract 2 numbers / Function.
int subtract2Numbers(int x, int y)
{
    printf("Please enter number 1: ");
    scanf("%d", &x);

    printf("Please enter number 2: ");
    scanf("%d", &y);

    int subtract = x + y;

    printf("\nsubtract 2 numbers = %d\n\n", subtract);
}
