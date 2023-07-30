

/* >>> Printing largest Number Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter two digits and print the largest between them <<< */

#include <stdio.h>

void welMasFun();
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
    printf("\n\nYou welcome in Printing Largest Number Program ( Version 3 ) ..\n\n");
}

// Largest number function;
int largestNumFun()
{
    int x, y;

    printf("Please, enter the first number : ");
    scanf("%d", &x);

    printf("Please, enter the second number : ");
    scanf("%d", &y);

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