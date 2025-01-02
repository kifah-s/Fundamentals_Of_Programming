

//* Count Even Numbers Program (Version 1).

/*
* Write a program with a function countEvenNumbers that takes an array of integers,
* and its size as input and returns the count of even numbers in the array,
* In the main function, take an array as input, call the countEvenNumbers function, and print the count.

! Input:
! Please enter the size of the array: 3
! Please enter 3 elements:
! Element 1: 1
! Element 2: 5
! Element 3: 9

! Output:
! Number Of Even elements: 0
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int size, int arr[size], int cou);

int main()
{
    // Declare Variables.
    int sizeOfArray = 0, myArray[sizeOfArray], counterEvenNumbers = 0;

    // Call Functions.
    resultFun(sizeOfArray, myArray, counterEvenNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Count Even Numbers Program (Version 1) ..\n\n");
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

// Count Even Numbers - Function.
int countEvenNumbersFun(int size, int arr[size], int cou)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cou++;
        }
    }

    return cou;
}

// Result - Function.
void resultFun(int size, int arr[size], int cou)
{
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    getElementsFun(size, arr);
    cou = countEvenNumbersFun(size, arr, cou);

    printf("Number Of Even elements: %d\n\n", cou);
}
//* End Function ..
