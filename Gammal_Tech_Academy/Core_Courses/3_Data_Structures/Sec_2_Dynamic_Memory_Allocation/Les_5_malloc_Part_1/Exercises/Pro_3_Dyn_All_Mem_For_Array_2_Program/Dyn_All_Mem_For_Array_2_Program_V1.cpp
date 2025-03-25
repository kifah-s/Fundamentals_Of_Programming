
//* Dynamically Allocates Memory For Array 2 Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of user-defined size,
* initializes it, calculates the sum, and then displays the result.

! Input:
! Please, enter size of array: 3
! Please, enter 3 elements:
! element 1: 1
! element 2: 2
! element 3: 3

! Output:
! Sum of array elements: 6
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array 2 Program (Version 1) ..\n"
         << endl;
}

// Get Size Of Array - Function.
int getSizeOfArrayFun(int s)
{
    cout << "Please, enter size of array: ";
    cin >> s;

    return s;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int *arrPtr, int s)
{
    arrPtr = (int *)malloc(s * sizeof(int));
    return arrPtr;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(int *arrPtr)
{
    if (arrPtr == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    return 0;
}

// Initialize Array - Function.
void initializeArrayFun(int *arrPtr, int s)
{
    cout << "Please, enter " << s << " Elements: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arrPtr[i];
    }
}

// Calculate Sum Of Elements  - Function.
int calculateSumOfElementsFun(int *arrPtr, int s, int sum)
{
    for (int i = 0; i < s; i++)
    {
        sum += arrPtr[i];
    }

    return sum;
}

// Freeing Memory - Function.
void freeingMemoryFun(int *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int *arrayPointer, size = 0, sumOfElements = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    arrayPointer = dynamicMemoryAllocationFun(arrayPointer, size);
    checkMemoryAllocationFun(arrayPointer);
    initializeArrayFun(arrayPointer, size);
    sumOfElements = calculateSumOfElementsFun(arrayPointer, size, sumOfElements);
    cout << "Sum Of Elements: " << sumOfElements << endl;

    freeingMemoryFun(arrayPointer);

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
