
//* Dynamically Allocates Memory For Character Array 2 Program (Version 1).

/*
* Write a program that dynamically allocates memory for a character array of user-defined size,
* takes user input for the string, counts the occurrences of a specific character, and displays the count.

! Input:
! Please, enter the size of the string: 8
! Please, enter a string: elephant
! Please, enter the character to count: e

! Output:
! Number of occurrences of 'e' in the string: 2
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Character Array 2 Program (Version 1) ..\n"
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
    char *strPtr = (char *)malloc((s + 1) * sizeof(char));

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

// Initialize Array - Function.
void initializeArrayFun(char *strPtr, int s)
{
    cout << "Please, enter a string: ";
    cin >> strPtr;
}

// Get Character - Function.
char getCharacterFun()
{
    char myChar = 'a';

    cout << "Please, enter the character to count: ";
    cin >> myChar;

    return myChar;
}

// Count Char - Function.
int countCharFun(char *strPtr, int s, char myChar)
{
    int charCounter = 0;

    for (int i = 0; i < s; i++)
    {
        if (strPtr[i] == myChar)
        {
            charCounter++;
        }
    }

    return charCounter;
}

// Freeing Memory - Function.
void freeingMemoryFun(char *strPtr)
{
    free(strPtr);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    char *arrayPtr, myChar;
    int size = 0, charCounter = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfStringFun();
    arrayPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPtr);
    initializeArrayFun(arrayPtr, size);
    myChar = getCharacterFun();
    charCounter = countCharFun(arrayPtr, size, myChar);
    cout << "Number of occurrences of '" << myChar << "' in the string: " << charCounter << endl;

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
