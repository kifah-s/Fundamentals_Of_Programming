
//* Dynamically Allocates Memory For Integers Array Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 7 integers and initialize them with values 1 to 7.

! Output:
! Numbers: 1 2 3 4 5 6 7
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Integers Array Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int numOfEle)
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

// Initialize Array - Function.
void initializeArrayFun(int *arrPtr, int numOfEle)
{
    // arrPtr[0] = 1;
    // arrPtr[1] = 2;
    // arrPtr[2] = 3;
    // arrPtr[3] = 4;
    // arrPtr[4] = 5;
    // arrPtr[5] = 6;
    // arrPtr[6] = 7;

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
    int *arrayPointer, numberOfElements = 7;

    // Call Functions.
    printWelcomeMessageFun();
    arrayPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeArrayFun(arrayPointer, numberOfElements);
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
