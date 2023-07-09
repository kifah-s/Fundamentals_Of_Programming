

/* >>> Greater Or Smaller Than 20 Program ( Version 2 ) <<< */

/* >>> A program that requests the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

void welcomeMassageFun();
int greaterOrSmallerThan20Fun();

int main()
{
    welcomeMassageFun();
    greaterOrSmallerThan20Fun();

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 2 ) ..\n\n");
}

// Greater Or Smaller Than 20 function;
int greaterOrSmallerThan20Fun()
{
    int num, i = 20;
    printf("Please enter number : ");
    scanf("%d", &num);

    if (num > 20)
    {
        do
        {
            printf("\n%d", i);
            i++;
            num--;
        } while (num >= 20);
    }
    else if (num < 20)
    {
        do
        {
            printf("\n%d", num);
            num++;
        } while (num <= 20);
    }
    else
    {
        printf("\n%d = 20", num);
    }
    printf("\n\n\n");
}