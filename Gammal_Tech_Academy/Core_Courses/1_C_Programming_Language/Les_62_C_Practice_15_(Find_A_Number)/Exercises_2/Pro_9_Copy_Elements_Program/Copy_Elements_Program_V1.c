

//* Copy Elements Program (Version 1).

/*
 * Write a program to copy elements from one array to another.
 */

/*
! Output:
! Elements in arr 2: 1 2 3 4 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int arr1[], int arr1Size, int arr2[]);

int main()
{
    // Declare Variables.
    int arr1[] = {1, 2, 3, 4, 5};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[arr1Size];

    // Call Functions.
    resultFun(arr1, arr1Size, arr2);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copy Elements Program (Version 1) ..\n\n");
}

// Copy Element - Function.
void copyElementFun(int arr1[], int arr1Size, int arr2[])
{
    for (int i = 0; i < arr1Size; i++)
    {
        arr2[i] = arr1[i];
    }
}

// Print Arr 2 - Function.
void printArr2Fun(int arr1Size, int arr2[])
{
    printf("Elements in arr 2: ");
    for (int i = 0; i < arr1Size; i++)
    {
        printf("%d  ", arr2[i]);
    }
}

// Print Result - Function.
void resultFun(int arr1[], int arr1Size, int arr2[])
{
    welcomeMessageFun();
    copyElementFun(arr1, arr1Size, arr2);
    printArr2Fun(arr1Size, arr2);

    printf("\n\n");
}
//* End Function ..
