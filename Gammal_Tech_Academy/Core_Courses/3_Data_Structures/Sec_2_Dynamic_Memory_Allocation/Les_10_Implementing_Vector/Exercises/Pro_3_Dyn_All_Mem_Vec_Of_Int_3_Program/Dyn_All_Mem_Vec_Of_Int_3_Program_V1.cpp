
//* Dynamically Allocates Memory Vector Of Integer 3 Program (Version 1).

/*
* Write a program that initializes a vector with five integers,
* removes the last element, and prints the updated vector.

! Output:
! Vector Elements After Update: 1 2 3 4
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory Vector Of Integer 3 Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation 1 - Function.
int *dynamicMemoryAllocationFun_1(int numOfEle)
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

// Initialize Vector 1 - Function.
void initializeVectorFun_1(int *ptrToVec, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        ptrToVec[i] = i + 1;
    }
}

// Dynamic Memory Allocation 2 - Function.
int *dynamicMemoryAllocationFun_2(int *ptrToVec, int &numOfEle)
{
    numOfEle = numOfEle - 1;

    ptrToVec = (int *)realloc(ptrToVec, numOfEle * sizeof(int));

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

// Initialize Vector 2 - Function.
// void initializeVectorFun_2(int *ptrToVec, int numOfEle)
// {
//     for (int i = 0; i < numOfEle; i++)
//     {
//         ptrToVec[i] = i + 1;
//     }
// }

// Print Vector - Function.
void printVectorFun(int *ptrToVec, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        cout << ptrToVec[i] << " ";
    }
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
    int numberOfElements = 5;

    // Call Functions.
    pointerToVector = dynamicMemoryAllocationFun_1(numberOfElements);
    initializeVectorFun_1(pointerToVector, numberOfElements);
    cout << "Vector Elements Before Update: ";
    printVectorFun(pointerToVector, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector << endl
         << endl;

    pointerToVector = dynamicMemoryAllocationFun_2(pointerToVector, numberOfElements);
    // initializeVectorFun_2(pointerToVector, numberOfElements);
    cout << "\nVector Elements After Update: ";
    printVectorFun(pointerToVector, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector;

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
