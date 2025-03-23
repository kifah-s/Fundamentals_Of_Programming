
//* Odd Elements Using Recursion Program (Version 2).

/*
* Write a program that counts the number of odd elements in an array using recursion.
* Given an array arr of size n, find and print the count of odd numbers.

! Input:
! Please, enter size of array: 5
! Please, enter elements of array:
! element 1: 1
! element 2: 2
! element 3: 3
! element 4: 4
! element 5: 5

! Output:
! Number of odd elements in the array: 3
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
#include <cmath>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Odd Elements Using Recursion Program (Version 2) ..\n"
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

// Odd Elements - Recursion Function.
int oddElementsRecFun(int size, int myArr[], int index = 0)
{
    if (index >= size)
    {
        return 0;
    }

    return (myArr[index] % 2 != 0) + oddElementsRecFun(size, myArr, index + 1);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int sizeOfArray = 0, counterOddElements = 0;

    // Call Functions.
    printWelcomeMessageFun();
    sizeOfArray = getSizeOfArrayFun();

    // Declare Arrays.
    int myArray[sizeOfArray];

    // Call Functions.
    getElementsOfArrayFun(sizeOfArray, myArray);

    counterOddElements = oddElementsRecFun(sizeOfArray, myArray);
    cout << "Number of odd elements in the array: " << counterOddElements << endl;

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
