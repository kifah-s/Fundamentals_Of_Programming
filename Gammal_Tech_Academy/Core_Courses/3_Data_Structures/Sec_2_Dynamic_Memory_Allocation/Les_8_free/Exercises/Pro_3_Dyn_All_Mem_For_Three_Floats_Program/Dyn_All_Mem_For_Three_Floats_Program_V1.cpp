
//* Dynamically Allocates Memory For Three Floats Program (Version 1).

/*
* Write a program to dynamically allocate memory for three floats and initialize them with values 3.14, 2.71, and 1.618.
* And using free.

! Output:
! Floats Numbers: 3.14 2.71 1.62
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Three Floats Program (Version 1) ..\n"
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
void initializeArrayFun(float *arrPtr, int numOfEle)
{
    arrPtr[0] = 3.14;
    arrPtr[1] = 2.71;
    arrPtr[2] = 1.62;
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
