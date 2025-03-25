
//* Dynamically Allocates Memory For 2 String Program (Version 1).

/*
* Write a program that dynamically allocates memory for two strings,
* takes user input for each, concatenates them, and displays the result.

! Input:
! Please, enter a first string: Hello
! Please, enter a second string: World

! Output:
! Concatenate string: Hello World
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
#include <cstring>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For 2 String Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
char *dynamicMemoryAllocationFun(char *strPtr, int s)
{
    strPtr = (char *)malloc(s * sizeof(char));
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
char *initializeStringFun(char *strPtr, int s, string strNum)
{
    cout << "Please, enter a " << strNum << " string: ";
    cin >> strPtr;
    // cin.getline(strPtr, s);

    return strPtr;
}

// Print Concatenate String - Function.
void printConcatenateStringFun(char *strPtr1, char *strPtr2, char *conPtr)
{
    conPtr = strcat(strPtr1, strPtr2);

    cout << "Concatenate string: " << conPtr << endl;
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
    char *firstStringPtr, *secondStringPtr, *concatenateStringPtr;
    int firstStringsize = 50, secondStringsize = 50, concatenateStringSize = 100;

    // Dynamic Memory Allocation.
    firstStringPtr = dynamicMemoryAllocationFun(firstStringPtr, firstStringsize);
    secondStringPtr = dynamicMemoryAllocationFun(secondStringPtr, secondStringsize);
    concatenateStringPtr = dynamicMemoryAllocationFun(concatenateStringPtr, concatenateStringSize);

    // Check Memory Allocation.
    checkMemoryAllocationFun(firstStringPtr);
    checkMemoryAllocationFun(secondStringPtr);
    checkMemoryAllocationFun(concatenateStringPtr);

    // Initialize String.
    firstStringPtr = initializeStringFun(firstStringPtr, firstStringsize, "first");
    secondStringPtr = initializeStringFun(secondStringPtr, secondStringsize, "second");

    // Print Concatenate String.
    printConcatenateStringFun(firstStringPtr, secondStringPtr, concatenateStringPtr);

    // Freeing Memory.
    freeingMemoryFun(firstStringPtr);
    freeingMemoryFun(secondStringPtr);
    freeingMemoryFun(concatenateStringPtr);

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
