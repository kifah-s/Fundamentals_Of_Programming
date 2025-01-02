

//* Reverse Array Program (Version 1).

/*
* Write a program with a function reverseArray that takes an array of integers and its size as input,
* and reverses the order of elements in the array,
* In the main function, take an array as input,
* call the reverseArray function, and print the reversed array.

! Input:
! Please enter the size of the array: 4
! Please enter 4 elements:
! Element 1: 1
! Element 2: 5
! Element 3: 9
! Element 4: 7

! Output:
! Reversed Array: 7 9 5 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int size, int arr[size]);

int main()
{
    // Declare Variables.
    int sizeOfArray = 0, myArray[sizeOfArray];

    // Call Functions.
    resultFun(sizeOfArray, myArray);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Array Program (Version 1) ..\n\n");
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

// Reverse Array - Function.
void reverseArrayFun(int size, int arr[size])
{
    printf("Reversed Array: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

// Result - Function.
void resultFun(int size, int arr[size])
{
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    getElementsFun(size, arr);
    reverseArrayFun(size, arr);

    printf("\n\n");
}
//* End Function ..
