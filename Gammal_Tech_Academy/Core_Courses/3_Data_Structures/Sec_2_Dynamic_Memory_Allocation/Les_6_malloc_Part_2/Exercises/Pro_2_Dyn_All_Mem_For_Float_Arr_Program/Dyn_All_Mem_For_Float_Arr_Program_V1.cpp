
//* Dynamically Allocates Memory For Float Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for a float array of user-defined size,
* takes user input for each element (including negative numbers),
* calculates the average of positive numbers, and displays the result.

! Input:
! Please, enter size of array: 4
! Please, enter 4 float numbers:
! element 1: -4.5
! element 2: 6.3
! element 3: 5.3
! element 4: -9

! Output:
! Average of Positive number in the array: 5.80
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Float Array Program (Version 1) ..\n"
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

// Calculate Average Of Positive Elements  - Function.
float calculateAverageOfPositiveElementsFun(float *arrPtr, int s)
{
    float sum = 0, ave = 0, posCou = 0;

    for (int i = 0; i < s; i++)
    {
        if (arrPtr[i] > 0)
        {
            sum += arrPtr[i];
            posCou++;
        }
    }

    ave = sum / posCou;

    return ave;
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
    float *arrayPtr, averageOfPositiveElements = 0;
    int size = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun();
    arrayPtr = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPtr);
    initializeArrayFun(arrayPtr, size);
    averageOfPositiveElements = calculateAverageOfPositiveElementsFun(arrayPtr, size);
    cout << "Average of Positive number in the array: " << fixed << setprecision(2) << averageOfPositiveElements << endl;

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
