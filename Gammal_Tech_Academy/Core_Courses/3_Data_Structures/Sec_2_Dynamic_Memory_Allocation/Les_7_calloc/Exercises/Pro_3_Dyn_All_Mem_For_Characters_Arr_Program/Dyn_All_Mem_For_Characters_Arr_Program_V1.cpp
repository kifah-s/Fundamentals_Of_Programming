
//* Dynamically Allocates Memory For Characters Array Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 10 characters and initialize them with the lowercase English alphabet (a to j).

! Output:
! Characters: a b c d e f g h i j
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Characters Array Program (Version 1) ..\n"
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
    for (char i = 'a'; i <= 'j'; i++)
    {
        arrPtr[i] = i;
    }
}

// Print Array - Function.
void printArrayFun(char *arrPtr)
{
    cout << "Characters: ";
    for (char i = 'a'; i <= 'j'; i++)
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
    int numberOfElements = 10;

    // Call Functions.
    printWelcomeMessageFun();
    arrayPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeArrayFun(arrayPointer);
    printArrayFun(arrayPointer);

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
