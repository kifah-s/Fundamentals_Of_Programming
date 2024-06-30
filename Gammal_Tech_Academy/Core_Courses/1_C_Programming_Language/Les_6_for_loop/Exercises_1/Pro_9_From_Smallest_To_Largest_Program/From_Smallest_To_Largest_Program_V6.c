

/* >>> From Smallest To Largest Program ( Version 6 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int fromSmallestToLargestFun();

int main()
{
    fromSmallestToLargestFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Smallest To Largest Program ( Version 6 ) ..\n\n");
}

// Get First number function;
int getFirstNumberFun()
{
    int num_1;
    printf("\nEnter the first number : ");
    scanf("%d", &num_1);
    return num_1;
}

// Get second number function;
int getSecondNumberFun()
{
    int num_2;
    printf("\nEnter the second number : ");
    scanf("%d", &num_2);
    return num_2;
}

// From Smallest To Largest function;
int fromSmallestToLargestFun()
{
    welcomeMassageFun();

    int num_1 = getFirstNumberFun();
    int num_2 = getSecondNumberFun();

    if (num_1 > num_2)
    {
        for (int i = num_2; i <= num_1; i++)
        {
            printf("\n%d", i);
        }
    }
    else if (num_1 < num_2)
    {
        for (int i = num_1; i <= num_2; i++)
        {
            printf("\n%d", i);
        }
    }
    else
    {
        printf("\nfirst number %d == second number %d\n", num_1, num_2);
    }
    printf("\n\n\n");
}