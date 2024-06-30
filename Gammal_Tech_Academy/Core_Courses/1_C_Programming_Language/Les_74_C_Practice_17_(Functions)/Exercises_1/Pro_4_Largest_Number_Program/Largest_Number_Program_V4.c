

/* >>> Largest Number Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter 4 numbers and prints the largest number in them (using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumbersFun(int arr[4]);
int largestNumberFun(int arr[4]);

int main()
{
    welcomeMassageFun();

    int num[4];
    getNumbersFun(num);

    int largestNumber = largestNumberFun(num);
    printf("\nLargest Number is: %d\n\n", largestNumber);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Number Program ( Version 4 ) ..\n\n");
}

// Get numbers / Function.
int getNumbersFun(int arr[4])
{
    printf("Please enter number 1: ");
    scanf("%d", &arr[0]);

    printf("Please enter number 2: ");
    scanf("%d", &arr[1]);

    printf("Please enter number 3: ");
    scanf("%d", &arr[2]);

    printf("Please enter number 4: ");
    scanf("%d", &arr[3]);
}

// Largest number / Function.
int largestNumberFun(int arr[4])
{
    int largestNum = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > largestNum)
        {
            largestNum = arr[i];
        }
    }

    return largestNum;
}