
//* Dynamically Allocates Memory For Int Array 2 Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of user-defined size, initializes it,
* calculates the sum, and then displays the result.

! Input:
! Please, enter a size of array: 3
! Please, enter 3 Elements:
! Ele 1: 1
! Ele 2: 2
! Ele 3: 3

! Output:
! Sum of array elements: 6
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Int Array 2 Program (Version 1) ..\n"
         << endl;
}

// Get Number of Elements - Function.
int getNumberOfElementsFun()
{
    int numOfNums = 0;

    cout << "Please, enter number of numbers: ";
    cin >> numOfNums;

    return numOfNums;
}

// Dynamic Memory Allocation 1 - Function.
int *dynamicMemoryAllocationFun_1(int numOfEle)
{
    int *arrPtr = (int *)malloc(numOfEle * sizeof(int));

    if (arrPtr != nullptr)
    {
        return arrPtr;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
        return nullptr; // Exit if allocation was unsuccessful.
    }
}

// Initialize Array 1 - Function.
void initializeArrayFun_1(int *arrPtr, int numOfEle)
{
    cout << "Please enter " << numOfEle << " Elements: " << endl;

    for (int i = 0; i < numOfEle; i++)
    {
        cout << "Ele " << i + 1 << ": ";
        cin >> arrPtr[i];
    }
}

// Print Array - Function.
int calculateSumFun(int *arrPtr, int numOfEle)
{
    int sum = 0;

    for (int i = 0; i < numOfEle; i++)
    {
        sum += arrPtr[i];
    }

    return sum;
}

// Freeing Memory - Function.
void freeingMemoryFun(int *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    int *arrayPointer;
    int numberOfElements = 0, sumElements = 0;

    // Call Functions.
    numberOfElements = getNumberOfElementsFun();
    arrayPointer = dynamicMemoryAllocationFun_1(numberOfElements);
    initializeArrayFun_1(arrayPointer, numberOfElements);
    sumElements = calculateSumFun(arrayPointer, numberOfElements);
    cout << "Sum of array elements: " << sumElements;

    freeingMemoryFun(arrayPointer);

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
