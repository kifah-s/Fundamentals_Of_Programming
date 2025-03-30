
//* Dynamically Allocates Memory For Floats Array Program (Version 1).

/*
* write a program to allocate memory for an array of 3 floats and initialize them with values 2.5, 3.7, and 1.8.

! Output:
! Numbers: 2.5 3.7 1.8
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Floats Array Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
float *dynamicMemoryAllocationFun(float numOfEle)
{
    float *arrPtr = (float *)calloc(numOfEle, sizeof(float));

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
void initializeArrayFun(float *arrPtr)
{
    arrPtr[0] = 2.5;
    arrPtr[1] = 3.7;
    arrPtr[2] = 1.8;
}

// Print Array - Function.
void printArrayFun(float *arrPtr, int numOfEle)
{
    cout << "Numbers: ";
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
    // Declare Pointer and Variables.
    float *arrayPointer;
    int numberOfElements = 3;

    // Call Functions.
    printWelcomeMessageFun();
    arrayPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeArrayFun(arrayPointer);
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
