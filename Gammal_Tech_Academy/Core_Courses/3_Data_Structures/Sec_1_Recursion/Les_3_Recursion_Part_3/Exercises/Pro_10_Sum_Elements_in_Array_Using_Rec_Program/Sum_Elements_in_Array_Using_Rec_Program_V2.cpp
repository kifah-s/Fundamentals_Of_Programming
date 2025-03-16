
//* Sum Elements in Array Using Recursion Program (Version 2).

/*
* Write a program to find the sum of elements in an array using recursion.

! Input:
! Please, enter a size of the array: 5
! Please, enter the elements of the array:
! Ele 1: 1
! Ele 2: 2
! Ele 3: 3
! Ele 4: 4
! Ele 5: 5

! Output:
! Sum of array elemets: 15
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

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Elements in Array Using Recursion Program (Version 2) ..\n"
         << endl;
}

// Get Size Of Array - Function.
int getSizeOfArrayFun()
{
    int sizeOfArr = 0;

    cout << "Please, enter a size of the array: ";
    cin >> sizeOfArr;

    return sizeOfArr;
}

// Get Elements Of Array - Function.
void getElementsOfArrayFun(int size, int myArr[])
{
    cout << "Please, enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Ele " << i + 1 << ": ";
        cin >> myArr[i];
    }
}

// Calculate Sum Of Elements - Recursion Function.
int calculateSumOfElementsRecFun(int size, int myArr[], int i = 0)
{
    if (i == size)
    {
        return 0;
    }
    else
    {
        return myArr[i] + calculateSumOfElementsRecFun(size, myArr, i + 1);
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
    cout << "Sum of array elemets: " << calculateSumOfElementsRecFun(sizeOfArray, myArray) << endl;

    cout << endl
         << endl;
}
//* End Functions ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
