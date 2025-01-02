

//* Sum Array Program (Version 1).

/*
* Create a program with a function sumArray that takes an array of integers,
* and its size as input and returns the sum of all elements in the array.
* In the main function, take an array as input, call the sumArray function, and print the sum.

! Input:
! Please enter the size of the array: 4
! Please enter 4 elements:
! Element 1: 2
! Element 2: 5
! Element 3: 6
! Element 4: 7

! Output:
! Sum of array elements: 20
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int size, int arr[size], int sum);

int main()
{
    // Declare Variables.
    int sizeOfArray = 0, myArray[sizeOfArray], sumElements = 0;

    // Call Functions.
    resultFun(sizeOfArray, myArray, sumElements);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Array Program (Version 1) ..\n\n");
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

// Sum Elements - Function.
int sumElementsFun(int size, int arr[size], int sum)
{
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

// Result - Function.
void resultFun(int size, int arr[size], int sum)
{
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    getElementsFun(size, arr);
    sum = sumElementsFun(size, arr, sum);

    printf("Sum of array elements: %d\n\n", sum);
}
//* End Function ..
