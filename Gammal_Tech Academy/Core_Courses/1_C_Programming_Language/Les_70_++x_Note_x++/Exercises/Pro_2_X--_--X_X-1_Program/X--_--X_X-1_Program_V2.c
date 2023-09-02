

/* >>> X--, --X, X-1 Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number and register it in the variable x and the program prints once x - and once - x and once-x. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = getNumberFun(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in X--, --X, X-1 Program ( Version 2 ) ..\n\n");
}

// Get Number / Function.
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    printf("number-- = %d\n", number--);
    printf("--number = %d\n", --number);
    printf("number - 1 = %d\n\n", number - 1);
}