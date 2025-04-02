
//* Dynamically Allocates Memory For Int Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of size 3 using malloc and initializes it with values 2, 4, and 6.
* Then, use realloc to resize the array to size 5 and assign values 8 and 10 to the new elements.

! Output:
! Initial Array: 2 4 6
! Final Array: 2 4 6 8 10
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Int Array Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation 1 - Function.
int *dynamicMemoryAllocationFun_1(int numOfEle)
{
    int *arrPtr = (int *)malloc(numOfEle * sizeof(int));

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
void initializeArrayFun_1(int *arrPtr, int numOfEle)
{
    arrPtr[0] = 2;
    arrPtr[1] = 4;
    arrPtr[2] = 6;
}

// Dynamic Memory Allocation 2 - Function.
int *dynamicMemoryAllocationFun_2(int *arrPtr, int numOfEle)
{
    arrPtr = (int *)realloc(arrPtr, numOfEle * sizeof(int));

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
void initializeArrayFun_2(int *arrPtr, int numOfEle)
{
    arrPtr[3] = 8;
    arrPtr[4] = 10;
}

// Print Array - Function.
void printArrayFun(int *arrPtr, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
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
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    int *arrayPointer;
    int numberOfElements = 3;

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
