

/* >>> Printing largest Number Program ( Version 5 ) <<< */

/* >>> A program that asks a person to enter two digits and print the largest between them <<< */

#include <stdio.h>

void welMasFun();
int firstNumberFun();
int secondNumberFun();
int largestNumFun();

int main()
{
    welMasFun();

    largestNumFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Printing Largest Number Program ( Version 5 ) ..\n\n");
}

// First number function;
int firstNumberFun()
{
    int x;
    printf("Please, enter the first number : ");
    scanf("%d", &x);
    return x;
}

// second number function;
int secondNumberFun()
{
    int y;
    printf("Please, enter the second number : ");
    scanf("%d", &y);
    return y;
}

// Largest number function;
int largestNumFun()
{
    int x = firstNumberFun();
    int y = secondNumberFun();

    if (x > y)
    {
        printf("\n%d\n\n\n", x);
    }
    else if (x < y)
    {
        printf("\n%d\n\n\n", y);
    }
    else
    {
        printf("\n%d = %d\n\n\n", x, y);
    }
}