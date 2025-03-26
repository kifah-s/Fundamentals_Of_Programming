
//* Dynamically Allocates Memory For Character Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for a character array of user-defined size,
* takes user input for the string, checks if it is a palindrome, and displays the result.

! Input:
! Please, enter the size of the string: 4
! Please, enter a string: mmmm

! Output:
! The string is a palindrome.
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Character Array Program (Version 1) ..\n"
         << endl;
}

// Get Size Of String - Function.
int getSizeOfStringFun()
{
    int s = 0;

    cout << "Please, enter the size of the string: ";
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

// Initialize String - Function.
void initializeStringFun(char *strPtr, int s)
{
    cout << "Please, enter a string: ";
    cin >> strPtr;
}

// Check String If Palindrome - Function.
bool checkStringIfPalindromeFun(char *strPtr, int s)
{
    bool isPal = true;

    for (int i = 0, j = s - 1; i < j; i++, j--)
    {
        if (strPtr[i] != strPtr[j])
        {
            isPal = false;
            break;
        }
    }

    return isPal;
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
    char *stringPtr;
    int size = 0;
    bool isPalindrome = true;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfStringFun();
    stringPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(stringPtr);
    initializeStringFun(stringPtr, size);
    isPalindrome = checkStringIfPalindromeFun(stringPtr, size);
    if (isPalindrome)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    freeingMemoryFun(stringPtr);

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
