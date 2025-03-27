
//* Dynamically Allocates Memory For Float Array 3 Program (Version 1).

/*
* Write a program that dynamically allocates memory for a float array of user-defined size,
* takes user input for each element, calculates the square root of each element, and displays the results.

! Input:
! Please, enter size of array: 4
! Please, enter 4 float numbers:
! element 1: 16
! element 2: 64
! element 3: 36
! element 4: 64

! Output:
! Square roots of array elements:
! element 1: 4.00
! element 2: 8.00
! element 3: 6.00
! element 4: 8.00
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
#include <cmath>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Float Array 3 Program (Version 1) ..\n"
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

// Calculate Square - Function.
void calculateSquareFun(float *arrPtr, int s)
{
    cout << "\nSquare roots of array elements:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "element " << i + 1 << ": " << fixed << setprecision(2) << sqrt(arrPtr[i]) << endl;
    }
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
    float *arrayPtr;
    int size = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun();
    arrayPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPtr);
    initializeArrayFun(arrayPtr, size);
    calculateSquareFun(arrayPtr, size);

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
