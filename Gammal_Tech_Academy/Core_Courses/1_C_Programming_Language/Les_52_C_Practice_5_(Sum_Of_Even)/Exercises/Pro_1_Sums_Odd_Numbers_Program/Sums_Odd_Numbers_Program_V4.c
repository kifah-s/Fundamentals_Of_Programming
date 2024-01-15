

/* >>> Sums Odd Numbers Program ( Version 4 ) <<< */

/* >>> A program that reads 10 numbers from the user and sums odd numbers only. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int numberOfNumbersFun();
int getElementsOfArrayFun(int num, int arr[num]);
int printAndSumsOddNumbersFun(int num, int arr[num]);

int main()
{
    welcomeMassageFun();

    int num = numberOfNumbersFun();

    int arr[num];
    getElementsOfArrayFun(num, arr);
    printAndSumsOddNumbersFun(num, arr);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sums Odd Numbers Program ( Version 4 ) ..\n\n");
}

// Get number of numbers function;
int numberOfNumbersFun()
{
    int num = 0;
    printf("How many numbers you want enter ? ");
    scanf("%d", &num);

    return num;
}

// Get elements of array function;
int getElementsOfArrayFun(int num, int arr[num])
{
    printf("Please enter %d numbers : \n", num);
    for (int i = 0; i < num; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// Print and sums odd numbers function;
int printAndSumsOddNumbersFun(int num, int arr[num])
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("Odd Number : %d\n", arr[i]);
            sum = sum + arr[i];
        }
    }
    printf("\nSum odd numbers = %d", sum);
    printf("\n\n\n");
}