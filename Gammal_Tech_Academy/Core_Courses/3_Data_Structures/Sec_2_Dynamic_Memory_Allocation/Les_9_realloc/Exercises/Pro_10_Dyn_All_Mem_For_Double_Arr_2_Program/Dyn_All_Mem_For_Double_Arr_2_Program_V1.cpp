
//* Dynamically Allocates Memory For Double Array 2 Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 6 doubles using calloc and initialize them with values 2.5, 5.0, 7.5, 10.0, 12.5, and 15.0.
* Then use realloc to resize the array to hold 4 doubles and initialize the new elements with values 17.5, 20.0, 22.5, and 25.0.

! Output:
! Initial Array: 2.5 5.0 7.5 10.0 12.5 15.0
! Final Array: 2.5 5.0 7.5 10.0 12.5 15.0 17.5 20.0  22.5 25.0
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Double Array 2 Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation 1 - Function.
double *dynamicMemoryAllocationFun_1(int numOfEle)
{
    double *arrPtr = (double *)calloc(numOfEle, sizeof(double));

    if (arrPtr != nullptr)
    {
        return arrPtr;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
        return nullptr; // Exit if allocation was unsuccessful.
    }
}

// Initialize Array 1 - Function.
void initializeArrayFun_1(double *arrPtr, int numOfEle)
{
    // arrPtr[0] = 2.5;
    // arrPtr[1] = 5.0;
    // arrPtr[2] = 7.5;
    // arrPtr[3] = 10.0;
    // arrPtr[4] = 12.5;
    // arrPtr[5] = 15.0;

    for (int i = 0; i < numOfEle; i++)
    {
        arrPtr[i] = (i + 1) * 2.5;
    }
}

// Dynamic Memory Allocation 2 - Function.
double *dynamicMemoryAllocationFun_2(double *arrPtr, int numOfEle)
{
    arrPtr = (double *)realloc(arrPtr, numOfEle * sizeof(double));

    if (arrPtr != nullptr)
    {
        return arrPtr;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
        return nullptr; // Exit if allocation was unsuccessful.
    }
}

// Initialize Array 2 - Function.
void initializeArrayFun_2(double *arrPtr, int numOfEle)
{
    // arrPtr[6] = 17.5;
    // arrPtr[7] = 20.0;
    // arrPtr[8] = 22.5;
    // arrPtr[9] = 25.0;

    for (int i = 0; i < numOfEle; i++)
    {
        arrPtr[i] = (i + 1) * 2.5;
    }
}

// Print Array - Function.
void printArrayFun(double *arrPtr, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        cout << arrPtr[i] << " ";
    }
}

// Freeing Memory - Function.
void freeingMemoryFun(double *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    double *arrayPointer;
    int numberOfElements = 6;

    // Call Functions.
    arrayPointer = dynamicMemoryAllocationFun_1(numberOfElements);
    cout << "Memory before realloc: " << (void *)arrayPointer;
    initializeArrayFun_1(arrayPointer, numberOfElements);
    cout << "\nInitial Array: ";
    printArrayFun(arrayPointer, numberOfElements);

    numberOfElements = 10;
    arrayPointer = dynamicMemoryAllocationFun_2(arrayPointer, numberOfElements);
    cout << "\n\nMemory After realloc: " << (void *)arrayPointer;
    initializeArrayFun_2(arrayPointer, numberOfElements);
    cout << "\nFinal Array: ";
    printArrayFun(arrayPointer, numberOfElements);

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
