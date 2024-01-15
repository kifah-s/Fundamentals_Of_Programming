

/* >>> From Smallest To Largest Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

void welcomeMassageFun();
int firstNumberFun();
int secondNumberFun();
int fromSmallestToLargestFun(int num_1, int num_2);

int main()
{
    welcomeMassageFun();

    int num_1 = firstNumberFun();
    int num_2 = secondNumberFun();
    fromSmallestToLargestFun(num_1, num_2);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Smallest To Largest Program ( Version 3 ) ..\n\n");
}

// Get first number function;
int firstNumberFun()
{
    int num_1;
    printf("Please enter number : ");
    scanf("%d", &num_1);
    return num_1;
}

// Get second number function;
int secondNumberFun()
{
    int num_2;
    printf("Please enter number : ");
    scanf("%d", &num_2);
    return num_2;
}

// From Smallest To Largest function;
int fromSmallestToLargestFun(int num_1, int num_2)
{
    if (num_1 > num_2)
    {
        do
        {
            printf("\n%d", num_2);
            num_2++;
        } while (num_2 <= num_1);
    }
    else if (num_1 < num_2)
    {
        do
        {
            printf("\n%d", num_1);
            num_1++;

        } while (num_1 <= num_2);
    }
    else
    {
        printf("\n%d = %d", num_1, num_2);
    }

    printf("\n\n\n");
}