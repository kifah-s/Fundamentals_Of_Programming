

/* >>> Negative Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter 10 different numbers and print negative numbers to it. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
void getNumbersFun(int arr[10]);
void printNegativeNumbersFun(int arr[10]);

int main()
{
    welcomeMassageFun();
    
    int arr[10];
    getNumbersFun(arr);
    printNegativeNumbersFun(arr);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Negative Numbers Program ( Version 1 ) ..\n\n");
}

// Get numbers function;
void getNumbersFun(int arr[10])
{
    printf("Please enter 10 numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// Print negative numbers function;
void printNegativeNumbersFun(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            printf("Negative number : %d\n", arr[i]);
        }
    }
    printf("\n\n\n");
}