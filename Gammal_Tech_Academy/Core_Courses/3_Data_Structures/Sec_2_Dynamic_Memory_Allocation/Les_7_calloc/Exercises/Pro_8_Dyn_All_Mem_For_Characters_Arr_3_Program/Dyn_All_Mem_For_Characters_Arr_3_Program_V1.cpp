
//* Dynamically Allocates Memory For Characters Array 3 Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 5 characters and initialize them with lowercase vowels (a, c, e, g, i).

! Output:
! Characters: a c e g i
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Characters Array 3 Program (Version 1) ..\n"
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
void initializeArrayFun(char *arrPtr)
{
    arrPtr[0] = 'a';
    arrPtr[1] = 'c';
    arrPtr[2] = 'e';
    arrPtr[3] = 'g';
    arrPtr[4] = 'i';
}

// Print Array - Function.
void printArrayFun(char *arrPtr, int numOfEle)
{
    cout << "Characters: ";
    for (int i = 0; i <= numOfEle; i++)
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
    int numberOfElements = 5;

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
