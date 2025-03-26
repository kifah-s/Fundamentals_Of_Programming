
//* Dynamically Allocates Memory For Character Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for a character array of user-defined size,
* takes user input for the string, converts it to uppercase, and displays the result.

! Input:
! Please, enter the size of the string: 7
! Please, enter a string: dynamic

! Output:
! Uppercase string: DYNAMIC
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
#include <iomanip>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Character Array Program (Version 1) ..\n"
         << endl;
}

// Get Size Of String - Function.
int getSizeOfStringFun()
{
    int s = 0;

    cout << "Please, enter the size of string: ";
    cin >> s;

    return s;
}

// Dynamic Memory Allocation - Function.
char *dynamicMemoryAllocationFun(int s)
{
    char *arrPtr = (char *)malloc((s + 1) * sizeof(char));

    return arrPtr;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(char *arrPtr)
{
    if (arrPtr == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    return 0;
}

// Initialize Array - Function.
void initializeArrayFun(char *arrPtr, int s)
{
    cout << "Please, enter a string: ";
    cin >> arrPtr;
}

// Uppercase String - Function.
void uppercaseStringFun(char *arrPtr, int s)
{
    for (int i = 0; i < s; i++)
    {
        // arrPtr[i] = arrPtr[i] - 32;
        arrPtr[i] = toupper(arrPtr[i]);
    }

    cout << "Uppercase String: " << arrPtr << endl;
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
    char *arrayPtr;
    int size = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfStringFun();
    arrayPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPtr);
    initializeArrayFun(arrayPtr, size);
    uppercaseStringFun(arrayPtr, size);

    freeingMemoryFun(arrayPtr);

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
