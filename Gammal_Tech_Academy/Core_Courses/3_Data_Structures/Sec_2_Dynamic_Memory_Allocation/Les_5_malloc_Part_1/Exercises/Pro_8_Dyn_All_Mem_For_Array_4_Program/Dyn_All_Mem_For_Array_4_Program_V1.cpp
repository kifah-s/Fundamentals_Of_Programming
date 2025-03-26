
//* Dynamically Allocates Memory For Array 4 Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of user-defined size,
* takes user input for each element, finds the maximum value, and displays it.

! Input:
! Please, enter size of array: 4
! Please, enter 3 elements:
! element 1: 1
! element 2: 15
! element 3: 2
! element 4: 20

! Output:
! Maximum value in the array: 20
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array 4 Program (Version 1) ..\n"
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

// Maximum Value - Function.
int maximumValueFun(int *arrPtr, int s)
{
    int max = arrPtr[0];
    
    for (int i = 1; i < s; i++)
    {
        if (arrPtr[i] > max)
        {
            max = arrPtr[i];
        }
    }

    return max;
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
    int *arrayPointer, size = 0, maximumValue = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    arrayPointer = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPointer);
    initializeArrayFun(arrayPointer, size);
    maximumValue = maximumValueFun(arrayPointer, size);
    cout << "Maximum value in the array: " << maximumValue << endl;

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
