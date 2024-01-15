

/* >>> Just A Number Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter a number and if the number is equal to 0 prints "not positive or negative" if not printed "just a number" (using switch). <<< */

#include <stdio.h>

void welcomeMassageNumber();
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
    printf("\n\nYou welcome in Just A Number Program ( Version 2 ) ..\n\n");
}

// Just A Number function;
int justANumberFun()
{
    int num;

    printf("Please enter a number : ");
    scanf("%d", &num);

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