
//* Dynamically Allocates Memory For Array Of Char 2 Program (Version 1).

/*
*Write a program that dynamically allocates memory for a character array of user-defined size,
* takes user input for the string, counts the number of vowels, and displays the count.

! Input:
! Please, enter the size of the string: 7
! Please, enter a string: dynamic

! Output:
! Number of vowels in the string: 2
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array Of Char 2 Program (Version 1) ..\n"
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

// Number Of Vowels - Function.
int numberOfVowelsFun(char *arrPtr, int s)
{
    int numOfVow = 0;

    for (int i = s; i >= 0; i--)
    {
        if (arrPtr[i] == 'A' || arrPtr[i] == 'a' || arrPtr[i] == 'E' || arrPtr[i] == 'e' || arrPtr[i] == 'I' || arrPtr[i] == 'i' || arrPtr[i] == 'O' || arrPtr[i] == 'o' || arrPtr[i] == 'U' || arrPtr[i] == 'u')
        {
            numOfVow++;
        }
    }
    return numOfVow;
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
    int size = 0, numberOfVowels = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfStringFun();
    arrayPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPtr);
    initializeArrayFun(arrayPtr, size);
    numberOfVowels = numberOfVowelsFun(arrayPtr, size);

    cout << "Number of vowels in the string: " << numberOfVowels << endl;

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
