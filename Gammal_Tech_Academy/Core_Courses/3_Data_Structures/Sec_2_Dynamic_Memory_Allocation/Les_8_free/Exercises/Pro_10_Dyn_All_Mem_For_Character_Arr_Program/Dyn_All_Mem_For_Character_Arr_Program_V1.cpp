
//* Dynamically Allocates Memory Character Array Program (Version 1).

/*
* Create a program that dynamically allocates memory for a character array of size 8 using calloc.
* Initialize the array with the letters 'A' to 'H', and print the characters. And using free.

! Output:
! Characters: A B C D E F G H
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory Character Array Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
char *dynamicMemoryAllocationFun(int numOfEle)
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

// Initialize Array - Function.
void initializeArrayFun(char *arrPtr, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        arrPtr[i] = i + 'A';
    }
}

// Print Array - Function.
void printArrayFun(char *arrPtr, int numOfEle)
{
    cout << "Characters: ";
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
    // Declare Pointer and Variables.
    char *arrayPointer;
    int numberOfElements = 8;

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
