

/* >>> Max Min Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a group of numbers and print it to the largest and smallest number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int numberOfNumbersFun(int x);
int *getNumberFun(int x, int n[x]);
int *maxAndMinFun(int x, int n[x], int maxMin[2]);

int main()
{
    welcomeMassageFun();

    int numberOfNumbers = numberOfNumbersFun(numberOfNumbers);
    // printf("\n%d\n\n", numberOfNumbers); // Check.

    int arr[numberOfNumbers];
    getNumberFun(numberOfNumbers, arr);
    /* for (int i = 0; i < numberOfNumbers; i++)
    {
        printf("%d  ", arr[i]);
    } */
    // Check.

    int maxMin[2];
    maxAndMinFun(numberOfNumbers, arr, maxMin);
    printf("\nMIN : %d\n", maxMin[1]);
    printf("MAX : %d\n\n", maxMin[0]);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Max Min Program ( Version 2 ) ..\n\n");
}

// Get number of numbers / Function.
int numberOfNumbersFun(int x)
{
    printf("Please enter a number of numbers: ");
    scanf("%d", &x);

    return x;
}

// Get number / Function.
int *getNumberFun(int x, int n[x])
{
    printf("\nPlease enter %d number:\n", x);
    for (int i = 0; i < x; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    return n;
}

// Max and min / Function.
int *maxAndMinFun(int x, int n[x], int maxMin[2])
{
    maxMin[0] = maxMin[1] = n[0];
    for (int i = 0; i < x; i++)
    {
        if (n[i] > maxMin[0])
        {
            maxMin[0] = n[i];
        }
        else if (n[i] < maxMin[1])
        {
            maxMin[1] = n[i];
        }
    }

    return maxMin;

    // printf("\nMIN : %d\n", maxMin[1]);
    // printf("MAX : %d\n\n", maxMin[0]);
}