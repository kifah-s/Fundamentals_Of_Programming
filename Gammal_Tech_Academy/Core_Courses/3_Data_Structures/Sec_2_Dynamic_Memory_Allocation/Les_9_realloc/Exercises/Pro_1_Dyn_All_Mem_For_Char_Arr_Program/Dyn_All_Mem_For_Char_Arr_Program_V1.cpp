
//* Dynamically Allocates Memory For Char Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for a character string using malloc and prints it.

! Output:
! String: Hello
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
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Char Array Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
char *dynamicMemoryAllocationFun(int numOfEle)
{
    char *arrPtr = (char *)malloc(numOfEle * sizeof(char));

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
void initializeArrayFun(char *arrPtr, int numOfEle)
{
    arrPtr[0] = 'H';
    arrPtr[1] = 'e';
    arrPtr[2] = 'l';
    arrPtr[3] = 'l';
    arrPtr[4] = 'o';
}

// Print Array - Function.
void printArrayFun(char *arrPtr, int numOfEle)
{
    cout << "String: ";
    for (int i = 0; i < numOfEle; i++)
    {
        cout << arrPtr[i];
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
    // Declare Pointer and Variables.
    char *arrayPointer;
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
