

/* >>> Number 20 Program ( Version 7 )  <<< */

/* >>> A program that requests the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

void welcomeMassageFun();
int gettingNumberFun();
int number20Fun();

int main()
{
    number20Fun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number 20 Program ( Version 7 ) ..\n\n");
}

// Getting number function;
int gettingNumberFun()
{
    int num;
    printf("\nEnter any number lager 20 OR smaller 20 : ");
    scanf("%d", &num);
    return num;
}

// Number 20 function;
int number20Fun()
{
    welcomeMassageFun();

    int num = gettingNumberFun();

    if (num > 20)
    {
        for (int i = 20; i <= num; i++)
        {
            printf("\n%d", i);
        }
        printf("\n\n\n");
    }
    else
    {
        for (int i = num; i <= 20; i++)
        {
            printf("\n%d", i);
        }
        printf("\n\n\n");
    }
}