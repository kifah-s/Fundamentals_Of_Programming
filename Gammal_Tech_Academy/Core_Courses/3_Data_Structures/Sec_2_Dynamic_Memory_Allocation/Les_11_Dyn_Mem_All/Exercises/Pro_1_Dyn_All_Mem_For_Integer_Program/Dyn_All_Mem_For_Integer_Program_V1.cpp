
//* Dynamically Allocates Memory For Integer Program (Version 1).

/*
* Write a program that prompts the user to enter an integer 'num' and then prints the even numbers from 1 to 'num' in ascending order.

! Output:
! Please, enter a number: 7

! Output:
! Even numbers form 1 to 7 is: 2 4 6
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Integer Program (Version 1) ..\n"
         << endl;
}

// Dynamic Memory Allocation - Function.
int *dynamicMemoryAllocationFun(int numOfEle)
{
    int *intPtr = (int *)calloc(numOfEle, sizeof(int));

    if (intPtr != nullptr)
    {
        return intPtr;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
        return nullptr; // Exit if allocation was unsuccessful.
    }
}

// Initialize Number - Function.
void initializeNumberFun(int *intPtr)
{
    cout << "Please, enter a number: ";
    cin >> *intPtr;
}

// Print Even Numbers - Function.
void printEvenNumbersFun(int *intPtr, int numOfEle)
{
    cout << "Even Numbers form 1 to " << *intPtr << " is: ";
    for (int i = 1; i <= *intPtr; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

// Freeing Memory - Function.
void freeingMemoryFun(int *intPtr)
{
    free(intPtr);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int *integerPointer;
    int numberOfElements = 1;

    // Call Functions.
    printWelcomeMessageFun();

    integerPointer = dynamicMemoryAllocationFun(numberOfElements);
    initializeNumberFun(integerPointer);
    printEvenNumbersFun(integerPointer, numberOfElements);

    freeingMemoryFun(integerPointer);

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
