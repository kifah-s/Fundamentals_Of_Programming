

//* Average Array Program (Version 1).

/*
* Write a program with a function averageArray that takes an array of integers,
* and its size as input and returns the average of all elements in the array,
* In the main function, take an array as input, call the averageArray function, and print the average.

! Input:
! Please enter the size of the array: 4
! Please enter 4 elements:
! Element 1: 2
! Element 2: 3
! Element 3: 7
! Element 4: 9

! Output:
! Average of array elements: 5.25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int size, int arr[size], float ave);

int main()
{
    // Declare Variables.
    int sizeOfArray = 0, myArray[sizeOfArray];
    float averageElements = 0;

    // Call Functions.
    resultFun(sizeOfArray, myArray, averageElements);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Average Array Program (Version 1) ..\n\n");
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

// Average Elements - Function.
float averageElementsFun(int size, int arr[size], float ave)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    ave = sum / size;

    return ave;
}

// Result - Function.
void resultFun(int size, int arr[size], float ave)
{
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    getElementsFun(size, arr);
    ave = averageElementsFun(size, arr, ave);

    printf("Average of array elements: %0.2f\n\n", ave);
}
//* End Function ..
