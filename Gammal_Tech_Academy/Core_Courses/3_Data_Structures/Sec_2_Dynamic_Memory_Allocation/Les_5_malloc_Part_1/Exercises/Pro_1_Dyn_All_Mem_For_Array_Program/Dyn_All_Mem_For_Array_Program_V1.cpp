
//* Dynamically Allocates Memory For Array Program (Version 1).

/*
* Write a program that dynamically allocates memory for an integer array of size 5,
* initializes it, and then displays the elements.

! Output:
! Array Elements: 1 2 3 4 5
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Array Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
int resultFun()
{
    // Declare Pointer and Variables.
    int *arrPtr;
    int size = 5;

    // Call Functions.
    printWelcomeMessageFun();

    // Dynamic Memory Allocation.
    arrPtr = (int *)malloc(size * sizeof(int));

    if (arrPtr == NULL)
    {
        cout << "Memory allocation failed" << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    // Initialize Array.
    for (int i = 0; i < size; i++)
    {
        arrPtr[i] = i + 1;
    }

    // Print Array.
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrPtr[i] << " ";
    }

    // Freeing Memory.
    free(arrPtr);

    cout << endl
         << endl;

    return 0;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
