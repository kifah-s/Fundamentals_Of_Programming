
//* Dynamically Allocates Memory For Char Array 2 Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 4 characters using calloc and initialize them with characters 'A', 'B', 'C', and 'D'.
* Then use realloc to resize the array to hold 6 characters and initialize the new elements with characters 'E' and 'F'.

! Output:
! Initial Array: A B C D
! Final Array: A B C D E F
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Char Array 2 Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation 1 - Function.
char *dynamicMemoryAllocationFun_1(int numOfEle)
{
    char *arrPtr = (char *)calloc(numOfEle, sizeof(char));

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
void initializeArrayFun_1(char *arrPtr, int numOfEle)
{
    arrPtr[0] = 'A';
    arrPtr[1] = 'B';
    arrPtr[2] = 'C';
    arrPtr[3] = 'D';

    // for (int i = 0; i < numOfEle; i++)
    // {
    //     arrPtr[i] = i + 'A';
    // }
}

// Dynamic Memory Allocation 2 - Function.
char *dynamicMemoryAllocationFun_2(char *arrPtr, int numOfEle)
{
    arrPtr = (char *)realloc(arrPtr, numOfEle * sizeof(char));

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
void initializeArrayFun_2(char *arrPtr, int numOfEle)
{
    arrPtr[4] = 'E';
    arrPtr[5] = 'F';

    // for (int i = 0; i < numOfEle; i++)
    // {
    //     arrPtr[i] = i + 'A';
    // }
}

// Print Array - Function.
void printArrayFun(char *arrPtr, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        cout << arrPtr[i] << " ";
    }
}

// Freeing Memory - Function.
void freeingMemoryFun(char *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    char *arrayPointer;
    int numberOfElements = 4;

    // Call Functions.
    arrayPointer = dynamicMemoryAllocationFun_1(numberOfElements);
    cout << "Memory before realloc: " << (void *)arrayPointer;
    initializeArrayFun_1(arrayPointer, numberOfElements);
    cout << "\nInitial Array: ";
    printArrayFun(arrayPointer, numberOfElements);

    numberOfElements = 6;
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
