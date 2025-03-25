
//* Dynamically Allocates Memory For String Program (Version 2).

/*
* Write a program that dynamically allocates memory for a string,
* reads the string from the user, and then displays it.

! Input:
! Please, enter a string: Hello World

! Output:
! You entered: Hello World
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For String Program (Version 2) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
char *dynamicMemoryAllocationFun(char *strPtr, int s)
{
    strPtr = (char *)malloc(s * sizeof(string));
    return strPtr;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(char *strPtr)
{
    if (strPtr == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    return 0;
}

// Initialize String - Function.
char *initializeStringFun(char *strPtr, int s)
{
    cout << "Please, enter a string: ";
    // cin >> strPtr;
    cin.getline(strPtr, s);

    return strPtr;
}

// Print String - Function.
void printStringFun(char *strPtr)
{
    cout << "Your entered: " << strPtr << endl;
}

// Freeing Memory - Function.
void freeingMemoryFun(char *strPtr)
{
    free(strPtr);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    char *stringPointer;
    int size = 50;

    // stringPointer = (char *)malloc(size * sizeof(char));
    // if (stringPointer == NULL)
    // {
    //     cout << "Memory allocation failed." << endl;
    //     return 1; // Exit if allocation was unsuccessful.
    // }
    // cout << "Please, enter a string: ";
    // cin.getline(stringPointer, size);
    // cout << "Your Entered: " << stringPointer << endl;
    // free(stringPointer);

    stringPointer = dynamicMemoryAllocationFun(stringPointer, size);
    checkMemoryAllocationFun(stringPointer);
    stringPointer = initializeStringFun(stringPointer, size);
    printStringFun(stringPointer);
    freeingMemoryFun(stringPointer);

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
