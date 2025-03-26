
//* Dynamically Allocates Memory For Float Array 2 Program (Version 1).

/*
* Write a program that dynamically allocates memory for a float array of user-defined size,
* takes user input for each element, searches for a specific element, and displays whether it is present or not.

! Input:
! Please, enter size of array: 3
! Please, enter 3 float numbers:
! element 1: 1.5
! element 2: 5.5
! element 3: 0.3
! Please, enter the element to search: 5.5

! Output:
! Element 5.5 is present in the array.
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Float Array 2 Program (Version 1) ..\n"
         << endl;
}

// Get Size Of Array - Function.
int getSizeOfArrayFun()
{
    int s = 0;

    cout << "Please, enter size of array: ";
    cin >> s;

    return s;
}

// Dynamic Memory Allocation - Function.
float *dynamicMemoryAllocationFun(int s)
{
    float *arrPtr = (float *)malloc(s * sizeof(float));

    return arrPtr;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(float *arrPtr)
{
    if (arrPtr == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    return 0;
}

// Initialize Array - Function.
void initializeArrayFun(float *arrPtr, int s)
{
    cout << "Please, enter " << s << " float numbers: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arrPtr[i];
    }
}

// Get Number - Function.
float getNumberFun()
{
    float num = 0;

    cout << "Please, enter the element to search: ";
    cin >> num;

    return num;
}

// Check Number - Function.
bool checkNumberFun(float *arrPtr, int s, float myNum)
{
    bool checkNumber = false;

    for (int i = 0; i < s; i++)
    {
        if (arrPtr[i] == myNum)
        {
            checkNumber = true;
            break;
        }
    }

    return checkNumber;
}

// Freeing Memory - Function.
void freeingMemoryFun(float *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    float *arrayPtr, myNumber = 0;
    int size = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun();
    arrayPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPtr);
    initializeArrayFun(arrayPtr, size);
    myNumber = getNumberFun();
    if (checkNumberFun(arrayPtr, size, myNumber))
    {
        cout << "Element " << myNumber << " is present in the array." << endl;
    }
    else
    {
        cout << "Element " << myNumber << " is not present in the array." << endl;
    }

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
