

/* >>> Count From Num To 1 Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from the number I enter to the number 1. <<< */

#include <stdio.h>

void welcomeMassageFun();
int fromNumTo1Fun();

int main()
{
    welcomeMassageFun();
    fromNumTo1Fun();

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Count From Num To 1 Program ( Version 3 ) ..\n\n");
}

// From Num To 1 function;
int fromNumTo1Fun()
{
    int i, num;

    printf("Enter any number : ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");
}