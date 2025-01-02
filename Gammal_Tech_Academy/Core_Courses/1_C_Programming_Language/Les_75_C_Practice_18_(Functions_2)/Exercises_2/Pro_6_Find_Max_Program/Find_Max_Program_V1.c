

//* Find Max Program (Version 1).

/*
* Create a program with a function findMax that takes an array of integers and its size as input,
* and returns the maximum value in the array, In the main function, take an array as input,
* call the findMax function, and print the maximum value.

! Input:
! Please enter the size of the array: 4
! Please enter 4 elements:
! Element 1: 1
! Element 2: 9
! Element 3: 3
! Element 4: 2

! Output:
! Maximum Value in the array: 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int size, int arr[size], int max);

int main()
{
    // Declare Variables.
    int sizeOfArray = 0, myArray[sizeOfArray], maximumValue = 0;

    // Call Functions.
    resultFun(sizeOfArray, myArray, maximumValue);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Find Max Program (Version 1) ..\n\n");
}

// Get Size Of Array - Function.
int getSizeOfArrayFun(int size)
{
    printf("Please enter the size of the array: ");
    scanf("%d", &size);

    return size;
}

// Get Elements - Function.
void getElementsFun(int size, int arr[size])
{
    printf("Please enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Maximum Value - Function.
int maximumValueFun(int size, int arr[size], int max)
{
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Result - Function.
void resultFun(int size, int arr[size], int max)
{
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    getElementsFun(size, arr);
    max = maximumValueFun(size, arr, max);

    printf("Maximum Value in the array: %d\n\n", max);
}
//* End Function ..
