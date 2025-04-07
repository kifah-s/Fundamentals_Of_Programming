
//* Dynamically Allocates Memory For Float Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for a floating-point array of size 2 using malloc and initializes it.
* Then, use realloc to resize the array to size 5 and assign new values.

! Output:
! Initial Array: 2.50 3.50
! Final Array: 2.50 3.50 4.50 5.50 6.50
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Float Array Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation 1 - Function.
float *dynamicMemoryAllocationFun_1(int numOfEle)
{
    float *arrPtr = (float *)malloc(numOfEle * sizeof(float));

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
void initializeArrayFun_1(float *arrPtr, int numOfEle)
{
    arrPtr[0] = 2.50;
    arrPtr[1] = 3.50;
}

// Dynamic Memory Allocation 2 - Function.
float *dynamicMemoryAllocationFun_2(float *arrPtr, int numOfEle)
{
    arrPtr = (float *)realloc(arrPtr, numOfEle * sizeof(float));

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
void initializeArrayFun_2(float *arrPtr, int numOfEle)
{
    arrPtr[2] = 4.50;
    arrPtr[3] = 5.50;
    arrPtr[4] = 6.50;
}

// Print Array - Function.
void printArrayFun(float *arrPtr, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        cout << arrPtr[i] << " ";
    }
}

// Freeing Memory - Function.
void freeingMemoryFun(float *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    float *arrayPointer;
    int numberOfElements = 2;

    // Call Functions.
    arrayPointer = dynamicMemoryAllocationFun_1(numberOfElements);
    initializeArrayFun_1(arrayPointer, numberOfElements);
    cout << "Initial Array: ";
    printArrayFun(arrayPointer, numberOfElements);

    numberOfElements = 5;
    arrayPointer = dynamicMemoryAllocationFun_2(arrayPointer, numberOfElements);
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
