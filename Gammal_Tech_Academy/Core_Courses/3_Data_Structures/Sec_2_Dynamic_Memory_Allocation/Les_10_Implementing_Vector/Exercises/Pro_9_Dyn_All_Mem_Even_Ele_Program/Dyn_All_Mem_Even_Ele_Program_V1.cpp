
//* Dynamically Allocates Memory Even Elements Of Vector Program (Version 1).

/*
* Write a program that initializes a vector with six integers,
* counts and prints the number of even elements in the vector.

! Output:
! Vector Elements: 1 2 3 4 5 6
! Number of even elements in vector: 3
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory Even Elements Of Vector Program (Version 1) ..\n"
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

// Check Even Numbers - Function.
int checkEvenNumbersFun(int *ptrToVec, int numOfEle)
{
    int counterEvenNum = 0;

    for (int i = 1; i < numOfEle; i++)
    {
        if (ptrToVec[i] % 2 == 0)
        {
            counterEvenNum++;
            cout << "Even Number: " << ptrToVec[i] << endl;
        }
    }

    return counterEvenNum;
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
    int numberOfElements = 6;
    int evenNumbers = 0;

    // Call Functions.
    pointerToVector = dynamicMemoryAllocationFun(numberOfElements);
    initializeVectorFun(pointerToVector, numberOfElements);

    cout << "Vector Elements: ";
    printVectorFun(pointerToVector, numberOfElements);
    cout << "\nPointer Address: " << pointerToVector << endl;

    evenNumbers = checkEvenNumbersFun(pointerToVector, numberOfElements);
    cout << "\nNumber of even elements in vector:  " << evenNumbers;

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
