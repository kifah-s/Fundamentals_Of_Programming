
//* Dynamically Allocates Memory For Floats Array 2 Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 5 doubles and initialize them with values 2.3, 4.6, 6.9, 9.2, and 11.5.

! Output:
! Numbers: 2.3 4.6 6.9 9.2 11.5
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Floats Array 2 Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
double *dynamicMemoryAllocationFun(int numOfEle)
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

// Initialize Array - Function.
void initializeArrayFun(double *arrPtr, int numOfEle)
{
    // arrPtr[0] = 2.3;
    // arrPtr[1] = 4.6;
    // arrPtr[2] = 6.9;
    // arrPtr[3] = 9.2;
    // arrPtr[4] = 11.5;

    for (int i = 0; i < numOfEle; i++)
    {
        arrPtr[i] = (i + 1) * 2.3;
    }
}

// Print Array - Function.
void printArrayFun(double *arrPtr, int numOfEle)
{
    cout << "Numbers: ";
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
    // Declare Pointer and Variables.
    double *arrayPointer;
    int numberOfElements = 5;

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
