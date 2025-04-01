
//* Dynamically Allocates Memory For Integer Program (Version 1).

/*
* Write a program to dynamically allocate memory for an integer and initialize it with the value 5,
* And using free.

! Output:
! Number: 5
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Integer Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int numOfEle)
{
    int *intPtr = (int *)calloc(numOfEle, sizeof(int));

    if (intPtr != nullptr)
    {
        return intPtr;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
        return nullptr; // Exit if allocation was unsuccessful.
    }
}

// Initialize Array - Function.
void initializeArrayFun(int *intPtr, int numOfEle)
{
    *intPtr = 5;
}

// Print Array - Function.
void printArrayFun(int *intPtr, int numOfEle)
{
    cout << "Number: " << *intPtr << endl;
}

// Freeing Memory - Function.
void freeingMemoryFun(int *intPtr)
{
    free(intPtr);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int *integerPointer;
    int numberOfElements = 1;

    // Call Functions.
    printWelcomeMessageFun();
    integerPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeArrayFun(integerPointer, numberOfElements);
    printArrayFun(integerPointer, numberOfElements);

    freeingMemoryFun(integerPointer);

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
