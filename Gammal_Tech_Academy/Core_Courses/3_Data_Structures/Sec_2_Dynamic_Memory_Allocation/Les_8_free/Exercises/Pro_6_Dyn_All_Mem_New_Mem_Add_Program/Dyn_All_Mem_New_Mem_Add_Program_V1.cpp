
//* Dynamically Allocates Memory New Memory Address Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of size 6 using malloc.
* Initialize the array with values corresponding to twice the index plus one.
* After printing the initial memory address of the allocated array, free the memory.
* Then, allocate a new block of memory for the same-sized array, print the new memory address.

! Output:
! Memory address: 0x9862a0
! New memory address: 0x9862a0
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory New Memory Address Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int numOfEle)
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

// Initialize Array - Function.
void initializeArrayFun(int *arrPtr, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        arrPtr[i] = i + 1;
    }
}

// Print Array - Function.
void printArrayFun(int *arrPtr, int numOfEle)
{
    cout << "Numbers: ";
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
    // Declare Pointer and Variables.
    int *arrayPointer;
    int numberOfElements = 6;

    // Call Functions.
    printWelcomeMessageFun();
    arrayPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeArrayFun(arrayPointer, numberOfElements);
    printArrayFun(arrayPointer, numberOfElements);
    cout << "\nMemory address: " << arrayPointer << endl
    << endl;
    freeingMemoryFun(arrayPointer);
    
    arrayPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeArrayFun(arrayPointer, numberOfElements);
    printArrayFun(arrayPointer, numberOfElements);
    cout << "\nNew Memory address: " << arrayPointer << endl
         << endl;
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
