
//* Dynamically Allocates Memory For Int Array 5 Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 3 integers using calloc and initialize them with values 3, 6, and 9.
* Then use realloc to resize the array to hold 4 integers and initialize the new element with the value 12.

! Output:
! Initial Array: 3 6 9 
! Final Array: 3 6 9 12
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Int Array 5 Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation 1 - Function.
int *dynamicMemoryAllocationFun_1(int numOfEle)
{
    int *arrPtr = (int *)calloc(numOfEle, sizeof(int));

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
    // arrPtr[0] = 3;
    // arrPtr[1] = 6;
    // arrPtr[2] = 9;

    for (int i = 0; i < numOfEle; i++)
    {
        arrPtr[i] = (i + 1) * 3;
    }
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
    arrPtr[3] = 12;

    // for (int i = 0; i < numOfEle; i++)
    // {
    //     arrPtr[i] = (i + 1) * 3;
    // }
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
    cout << "Memory before realloc: " << (void *)arrayPointer;
    initializeArrayFun_1(arrayPointer, numberOfElements);
    cout << "\nInitial Array: ";
    printArrayFun(arrayPointer, numberOfElements);
    
    numberOfElements = 4;
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
