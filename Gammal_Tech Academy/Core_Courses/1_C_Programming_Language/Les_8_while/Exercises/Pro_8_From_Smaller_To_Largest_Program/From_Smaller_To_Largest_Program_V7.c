

/* >>> From Smaller To Largest Program ( Version 7 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int secondLargestFirstFun(int num_1, int num_2);
int firstLargestSecondFun(int num_1, int num_2);
int numbersEqualFun(int num_1, int num_2);

int main()
{
    welcomeMassageFun();

    int num_1 = getFirstNumberFun();
    int num_2 = getSecondNumberFun();

    secondLargestFirstFun(num_1, num_2);
    firstLargestSecondFun(num_1, num_2);
    numbersEqualFun(num_1, num_2);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Smaller To Largest Program ( Version 7 ) ..\n\n");
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

// Second number largest from first number function;
int secondLargestFirstFun(int num_1, int num_2)
{
    if (num_1 < num_2)
    {
        int i = num_1;
        while (i <= num_2)
        {
            printf("\n%d", i);
            i++;
        }
    }
}

// first number largest from second number function;
int firstLargestSecondFun(int num_1, int num_2)
{
    if (num_1 > num_2)
    {
        int i = num_2;
        while (i <= num_1)
        {
            printf("\n%d", i);
            i++;
        }
    }
}

// The numbers equal function;
int numbersEqualFun(int num_1, int num_2)
{
    if (num_1 == num_2)
    {
        printf("\nThe numbers equal : %d = %d", num_1, num_2);
    }

    printf("\n\n\n");
}