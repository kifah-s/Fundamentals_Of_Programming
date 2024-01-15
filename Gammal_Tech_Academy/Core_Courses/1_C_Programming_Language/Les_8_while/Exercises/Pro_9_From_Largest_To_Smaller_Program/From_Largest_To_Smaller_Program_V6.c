

/* >>> From Largest To Smaller Program ( Version 6 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the largest to the smallest. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int fromLargestToSmallerFun();

int main()
{
    welcomeMassageFun();

    fromLargestToSmallerFun();

    return 0;
}

// Function..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Largest To Smaller Program ( Version 6 ) ..\n\n");
}

// Get first number function;
int getFirstNumberFun()
{
    int num_1;
    printf("Please enter first number : ");
    scanf("%d", &num_1);
    return num_1;
}

// Get second number function;
int getSecondNumberFun()
{
    int num_2;
    printf("Please enter second number : ");
    scanf("%d", &num_2);
    return num_2;
}

// From Largest To Smaller function;
int fromLargestToSmallerFun()
{
    int num_1 = getFirstNumberFun();
    int num_2 = getSecondNumberFun();

    int i;

    if (num_1 < num_2)
    {
        i = num_2;
        while (i >= num_1)
        {
            printf("\n%d", i);
            i--;
        }
    }
    else if (num_1 > num_2)
    {
        i = num_1;
        while (i >= num_2)
        {
            printf("\n%d", i);
            i--;
        }
    }
    else
    {
        printf("\nThe numbers equal : %d = %d", num_1, num_2);
    }

    printf("\n\n\n");
}