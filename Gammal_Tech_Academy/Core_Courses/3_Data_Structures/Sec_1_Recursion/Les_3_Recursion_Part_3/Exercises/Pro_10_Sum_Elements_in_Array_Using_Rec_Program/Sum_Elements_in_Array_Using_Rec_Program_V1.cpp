
//* Sum Elements in Array Using Recursion Program (Version 1).

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
    cout << "\n\nYou welcome in Sum Elements in Array Using Recursion Program (Version 1) ..\n"
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
int calculateSumOfElementsRecFun(int size, int myArr[], int sumEleOfArr, int i = 0)
{
    if (i == size)
    {
        return sumEleOfArr;
    }
    else
    {
        sumEleOfArr = sumEleOfArr + myArr[i];
        return calculateSumOfElementsRecFun(size, myArr, sumEleOfArr, i + 1);
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
    int myArray[sizeOfArray], sumElemetsOfArray = 0;

    // Call Functions.
    getElementsOfArrayFun(sizeOfArray, myArray);
    sumElemetsOfArray = calculateSumOfElementsRecFun(sizeOfArray, myArray, sumElemetsOfArray);
    cout << "Sum of array elemets: " << sumElemetsOfArray << endl;

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
