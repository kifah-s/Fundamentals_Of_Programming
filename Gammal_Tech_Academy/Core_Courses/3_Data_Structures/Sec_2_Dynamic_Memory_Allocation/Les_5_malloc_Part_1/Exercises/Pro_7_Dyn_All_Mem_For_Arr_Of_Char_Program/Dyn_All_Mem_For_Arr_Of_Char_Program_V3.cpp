
//* Dynamically Allocates Memory For Array Of Char Program (Version 3).

/*
* Write a program that dynamically allocates memory for a character array of user-defined size,
* takes user input for the string, reverses it, and displays the reversed string.

! Input:
! Please, enter the size of the string: 5
! Please, enter a string: hello

! Output:
! Reversed string: olleh
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array Of Char Program (Version 3) ..\n"
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
    char *arrPtr = (char *)malloc(s * sizeof(char));

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

// Reverse String - Function.
void reverseStringFun(char *arrPtr, int s)
{
    reverse(arrPtr, arrPtr + s);

    cout << "Reversed string: ";
    
    // for (int i = 0; i < s; i++)
    // {
    //     cout << arrPtr[i];
    // }

    cout << arrPtr;
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
    reverseStringFun(arrayPtr, size);

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
