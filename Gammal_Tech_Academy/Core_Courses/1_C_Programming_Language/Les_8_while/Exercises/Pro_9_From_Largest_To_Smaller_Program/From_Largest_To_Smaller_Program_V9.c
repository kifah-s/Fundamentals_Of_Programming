

/* >>> From Largest To Smaller Program ( Version 9 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the largest to the smallest. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int firstLargestSecondFun(int num_1, int num_2);
int secondLargestFirstFun(int num_1, int num_2);
int equalNumbersFun(int num_1, int num_2);
int fromLargestToSmallerFun(int num_1, int num_2);

int main()
{
    welcomeMassageFun();

    int num_1 = getFirstNumberFun();
    int num_2 = getSecondNumberFun();
    fromLargestToSmallerFun(num_1, num_2);

    return 0;
}

// Function..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Largest To Smaller Program ( Version 9 ) ..\n\n");
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

// first number largest from second number function;
int firstLargestSecondFun(int num_1, int num_2)
{
    if (num_1 > num_2)
    {
        int i = num_1;
        while (i >= num_2)
        {
            printf("\n%d", i);
            i--;
        }
    }
}

// second number largest from first number function;
int secondLargestFirstFun(int num_1, int num_2)
{
    if (num_1 < num_2)
    {
        int i = num_2;
        while (i >= num_1)
        {
            printf("\n%d", i);
            i--;
        }
    }
}

// Equal numbers function;
int equalNumbersFun(int num_1, int num_2)
{
    if (num_1 == num_2)
    {
        printf("\nThe numbers equal : %d = %d", num_1, num_2);
    }
}

// From Largest To Smaller function;
int fromLargestToSmallerFun(int num_1, int num_2)
{
    firstLargestSecondFun(num_1, num_2);
    secondLargestFirstFun(num_1, num_2);
    equalNumbersFun(num_1, num_2);

    printf("\n\n\n");
}