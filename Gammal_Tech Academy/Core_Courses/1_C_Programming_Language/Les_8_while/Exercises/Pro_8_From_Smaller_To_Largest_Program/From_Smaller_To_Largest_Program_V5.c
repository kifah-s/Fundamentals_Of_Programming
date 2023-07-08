

/* >>> From Smaller To Largest Program ( Version 5 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int fromSmallerToLargestFun(int num_1, int num_2);

int main()
{
    welcomeMassageFun();

    int num_1 = getFirstNumberFun();
    int num_2 = getSecondNumberFun();
    fromSmallerToLargestFun(num_1, num_2);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Smaller To Largest Program ( Version 5 ) ..\n\n");
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

// From Smaller To Largest function;
int fromSmallerToLargestFun(int num_1, int num_2)
{
    int i;

    if (num_1 < num_2)
    {
        i = num_1;
        while (i <= num_2)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else if (num_1 > num_2)
    {
        i = num_2;
        while (i <= num_1)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else
    {
        printf("\nThe numbers equal : %d = %d", num_1, num_2);
    }

    printf("\n\n\n");
}