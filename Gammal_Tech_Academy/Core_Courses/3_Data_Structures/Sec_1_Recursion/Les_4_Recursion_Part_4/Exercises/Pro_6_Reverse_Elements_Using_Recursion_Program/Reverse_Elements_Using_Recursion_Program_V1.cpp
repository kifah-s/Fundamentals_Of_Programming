
//* Reverse Elements Using Recursion Program (Version 1).

/*
* Write a program to reverse the elements of an array using recursion.

! Input:
! Please, enter size of array: 5
! Please, enter elements of array:
! element 1: 1
! element 2: 2
! element 3: 3
! element 4: 4
! element 5: 5

! Output:
! Reversed Array: 5 4 3 2 1
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Reverse Elements Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Size Of Array - Function.
int getSizeOfArrayFun()
{
    int size = 0;

    cout << "Please, enter size of array: ";
    cin >> size;

    return size;
}

// Get Elements Of Array - Function.
void getElementsOfArrayFun(int size, int myArr[])
{
    cout << "Please, enter elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "element " << i + 1 << ": ";
        cin >> myArr[i];
    }
}

// Reversed Elemets Of Array - Recursion Function.
void reversedElemetsOfArrayRecFun(int size, int myArr[])
{
    if (size < 0)
    {
        return;
    }
    else
    {
        cout << myArr[size] << " ";
        reversedElemetsOfArrayRecFun(size - 1, myArr);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int sizeOfArray = 0;

    // Call Functions.
    printWelcomeMessageFun();
    sizeOfArray = getSizeOfArrayFun();

    // Declare Array.
    int myArray[sizeOfArray];

    // Call Functions.
    getElementsOfArrayFun(sizeOfArray, myArray);

    cout << "Reversed Array: ";
    reversedElemetsOfArrayRecFun(sizeOfArray - 1, myArray);

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
