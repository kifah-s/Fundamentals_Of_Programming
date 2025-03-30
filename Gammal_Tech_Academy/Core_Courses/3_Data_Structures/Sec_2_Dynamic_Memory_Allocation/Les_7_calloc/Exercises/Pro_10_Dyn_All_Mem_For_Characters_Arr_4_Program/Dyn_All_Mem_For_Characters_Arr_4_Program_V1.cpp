
//* Dynamically Allocates Memory For Characters Array 4 Program (Version 1).

/*
* Write a program to dynamically allocate memory for an array of 8 characters and initialize them with lowercase consonants (c، f، i، l، o، r، u، x).

! Output:
! Characters: c f i l o r u x
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Characters Array 4 Program (Version 1) ..\n"
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
    arrPtr[0] = 'c';
    arrPtr[1] = 'f';
    arrPtr[2] = 'i';
    arrPtr[3] = 'l';
    arrPtr[4] = 'o';
    arrPtr[5] = 'r';
    arrPtr[6] = 'u';
    arrPtr[7] = 'x';
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
    int numberOfElements = 8;

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
