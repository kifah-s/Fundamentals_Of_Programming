
//* Dynamically Allocates Memory Average Elements Of Vector Program (Version 1).

/*
* Write a program that initializes a vector with four integers,
* calculates and prints the average of all elements.

! Output:
! Vector Elements: 1 2 3 4
! Average of vector elements: 2.50
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory Average Elements Of Vector Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int numOfEle)
{
    int *ptrToVec = (int *)calloc(numOfEle, sizeof(int));

    if (ptrToVec != nullptr)
    {
        return ptrToVec;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
        return nullptr; // Exit if allocation was unsuccessful.
    }
}

// Initialize Vector - Function.
void initializeVectorFun(int *ptrToVec, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        ptrToVec[i] = i + 1;
    }
}

// Print Vector - Function.
void printVectorFun(int *ptrToVec, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        cout << ptrToVec[i] << " ";
    }
}

// Calculate Average - Function.
float calculateAverageFun(int *ptrToVec, int numOfEle)
{
    float ave = 0, sum = 0;

    for (int i = 0; i < numOfEle; i++)
    {
        sum += ptrToVec[i];
    }

    ave = (float)sum / numOfEle;

    return ave;
}

// Freeing Memory - Function.
void freeingMemoryFun(int *ptrToVec)
{
    free(ptrToVec);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    int *pointerToVector;
    int numberOfElements = 4;
    float averageNumbers = 0;

    // Call Functions.
    pointerToVector = dynamicMemoryAllocationFun(numberOfElements);
    initializeVectorFun(pointerToVector, numberOfElements);

    cout << "Vector Elements: ";
    printVectorFun(pointerToVector, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector << endl;

    averageNumbers = calculateAverageFun(pointerToVector, numberOfElements);
    cout << "\nAverage of vector elements: " << averageNumbers;

    freeingMemoryFun(pointerToVector);

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
