
//* Dynamically Allocates Memory For Integer Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of user-defined size,
* takes user input for each element, counts the number of even numbers, and displays the count.

! Input:
! Please, enter size of array: 3
! Please, enter 3 elements:
! element 1: 1
! element 2: 3
! element 3: 5

! Output:
! Number of even numbers in the array: 0
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Integer Array Program (Version 1) ..\n"
         << endl;
}

// Get Size Of Array - Function.
int getSizeOfArrayFun(int s)
{
    cout << "Please, enter size of array: ";
    cin >> s;

    return s;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int s)
{
    int *arrPtr = (int *)malloc(s * sizeof(int));
    return arrPtr;
}

// Check Memory Allocation - Function.
int checkMemoryAllocationFun(int *arrPtr)
{
    if (arrPtr == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    return 0;
}

// Initialize Array - Function.
void initializeArrayFun(int *arrPtr, int s)
{
    cout << "Please, enter " << s << " Elements: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arrPtr[i];
    }
}

// Count Even Numbers  - Function.
int countEvenNumbersFun(int *arrPtr, int s)
{
    int couEvenNum = 0;
    for (int i = 0; i < s; i++)
    {
        if (arrPtr[i] % 2 == 0)
        {
            couEvenNum++;
        }
        
    }

    return couEvenNum;
}

// Freeing Memory - Function.
void freeingMemoryFun(int *arrPtr)
{
    free(arrPtr);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int *arrayPointer, size = 0, counterEvenNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();
    size = getSizeOfArrayFun(size);
    arrayPointer = dynamicMemoryAllocationFun(size);
    checkMemoryAllocationFun(arrayPointer);
    initializeArrayFun(arrayPointer, size);
    counterEvenNumber = countEvenNumbersFun(arrayPointer, size);
    cout << "Number of even numbers in the array: " << counterEvenNumber << endl;

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
