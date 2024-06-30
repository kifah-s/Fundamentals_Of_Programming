

/* >>> Max Min Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a group of numbers and print it to the largest and smallest number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int numberOfNumbersFun(int x);
int *getNumberFun(int x, int n[x]);
int maxAndMinFun(int x, int n[x], int max, int min);

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
    
    int max = 0, min = 0;
    maxAndMinFun(numberOfNumbers, arr, max, min);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Max Min Program ( Version 1 ) ..\n\n");
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
int maxAndMinFun(int x, int n[x], int max, int min)
{
    max = min = n[0];
    for (int i = 0; i < x; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
        else if (n[i] < min)
        {
            min = n[i];
        }
    }
    printf("\nMIN : %d\n", min);
    printf("MAX : %d\n\n", max);
}