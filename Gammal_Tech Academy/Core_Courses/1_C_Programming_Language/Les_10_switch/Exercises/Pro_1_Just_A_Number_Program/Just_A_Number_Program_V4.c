

/* >>> Just A Number Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter a number and if the number is equal to 0 prints "not positive or negative" if not printed "just a number" (using switch). <<< */

#include <stdio.h>

void welcomeMassageNumber();
int getNumberFun();
int justANumberFun();

int main()
{
    welcomeMassageNumber();

    justANumberFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageNumber()
{
    printf("\n\nYou welcome in Just A Number Program ( Version 4 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    return num;
}

// Just A Number function;
int justANumberFun()
{
    int num = getNumberFun();

    switch (num)
    {
    case 0:
        printf("\nNot positive or negative");
        break;

    default:
        printf("\nJust a number");
        break;
    }

    printf("\n\n\n");
}