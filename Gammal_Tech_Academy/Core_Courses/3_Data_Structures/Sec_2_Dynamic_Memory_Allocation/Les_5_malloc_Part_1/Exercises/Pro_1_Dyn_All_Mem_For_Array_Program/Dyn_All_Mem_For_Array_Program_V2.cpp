
//* Dynamically Allocates Memory For Array Program (Version 2).

/*
* Write a program that dynamically allocates memory for an integer array of size 5,
* initializes it, and then displays the elements.

! Output:
! Array Elements: 1 2 3 4 5
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array Program (Version 2) ..\n"
         << endl;
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
    for (int i = 0; i < s; i++)
    {
        arrPtr[i] = i + 1;
    }
}

// Print Array - Function.
void printArrayFun(int *arrPtr, int s)
{
    cout << "Array Elements: ";
    for (int i = 0; i < s; i++)
    {
        cout << arrPtr[i] << " ";
    }
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
    int *arrayPointer;
    int size = 5;

    // Call Functions.
    printWelcomeMessageFun();
    arrayPointer = dynamicMemoryAllocationFun(arrayPointer, size);
    checkMemoryAllocationFun(arrayPointer);
    initializeArrayFun(arrayPointer, size);
    printArrayFun(arrayPointer, size);
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
