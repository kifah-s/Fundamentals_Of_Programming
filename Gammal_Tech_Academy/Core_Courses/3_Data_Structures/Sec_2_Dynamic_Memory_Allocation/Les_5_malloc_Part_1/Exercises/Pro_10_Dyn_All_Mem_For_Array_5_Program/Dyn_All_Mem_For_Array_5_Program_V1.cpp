
//* Dynamically Allocates Memory For Array 5 Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of user-defined size,
* takes user input for each element, calculates the sum of squares, and displays the result.

! Input:
! Please, enter size of array: 4
! Please, enter 3 elements:
! element 1: 1
! element 2: 2
! element 3: 3
! element 4: 4

! Output:
! Sum of square of array elements: 30
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array 5 Program (Version 1) ..\n"
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
int *dynamicMemoryAllocationFun(int s)
{
    int *arrPtr = (int *)malloc(s * sizeof(int));
    
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

// Sum Of Square - Function.
int sumOfSquareFun(int *arrPtr, int s)
{
    int sumOfSqu = 0;

    for (int i = 0; i < s; i++)
    {
        sumOfSqu += arrPtr[i] * arrPtr[i];
    }

    return sumOfSqu;
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
    int *arrayPointer, size = 0, sumOfSquare = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    arrayPointer = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPointer);
    initializeArrayFun(arrayPointer, size);
    sumOfSquare = sumOfSquareFun(arrayPointer, size);
    cout << "Sum of square of array elements: " << sumOfSquare << endl;

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
