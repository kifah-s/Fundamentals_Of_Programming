
//* Dynamically Allocates Memory Sum Two Vector Program (Version 1).

/*
* Write a program that initializes two vectors with three integers each,
* calculates the element-wise sum, and prints the resulting vector.

! Output:
! Sum Two Vector: 5 7 9
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory Sum Two Vector Program (Version 1) ..\n"
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

// Initialize Vector 1 - Function.
void initializeVector_1_Fun(int *ptrToVec_1, int numOfEle)
{
    // ptrToVec_1[0] = 1;
    // ptrToVec_1[1] = 2;
    // ptrToVec_1[2] = 3;

    for (int i = 0; i < numOfEle; i++)
    {
        ptrToVec_1[i] = i + 1;
    }
}

// Initialize Vector 2 - Function.
void initializeVector_2_Fun(int *ptrToVec_2, int numOfEle)
{
    // ptrToVec_2[0] = 4;
    // ptrToVec_2[1] = 5;
    // ptrToVec_2[2] = 6;

    for (int i = 0; i < numOfEle; i++)
    {
        ptrToVec_2[i] = i + 4;
    }
}

// Initialize Vector 3 - Function.
void initializeVector_3_Fun(int *ptrToVec_1, int *ptrToVec_2, int *ptrToVec_3, int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        ptrToVec_3[i] = ptrToVec_1[i] + ptrToVec_2[i];
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

// Freeing Memory - Function.
void freeingMemoryFun(int *ptrToVec_1, int *ptrToVec_2, int *ptrToVec_3)
{
    free(ptrToVec_1);
    free(ptrToVec_2);
    free(ptrToVec_3);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    int *pointerToVector_1, *pointerToVector_2, *pointerToVector_3;
    int numberOfElements = 3;

    // Call Functions.
    pointerToVector_1 = dynamicMemoryAllocationFun(numberOfElements);
    pointerToVector_2 = dynamicMemoryAllocationFun(numberOfElements);
    pointerToVector_3 = dynamicMemoryAllocationFun(numberOfElements);

    initializeVector_1_Fun(pointerToVector_1, numberOfElements);
    initializeVector_2_Fun(pointerToVector_2, numberOfElements);
    initializeVector_3_Fun(pointerToVector_1, pointerToVector_2, pointerToVector_3, numberOfElements);

    cout << "Elements Of Vector 1: ";
    printVectorFun(pointerToVector_1, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector_1 << endl;

    cout << "\nElements Of Vector 2: ";
    printVectorFun(pointerToVector_2, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector_2 << endl;

    cout << "\nSum Of Vector 1 and Vector 2 - Elements Of Vector 3: ";
    printVectorFun(pointerToVector_3, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector_3 << endl;

    freeingMemoryFun(pointerToVector_1, pointerToVector_2, pointerToVector_3);

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
