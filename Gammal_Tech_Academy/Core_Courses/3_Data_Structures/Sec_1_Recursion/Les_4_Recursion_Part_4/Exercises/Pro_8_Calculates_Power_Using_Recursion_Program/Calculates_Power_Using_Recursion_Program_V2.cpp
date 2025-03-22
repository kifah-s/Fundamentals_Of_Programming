
//* Calculates Power Using Recursion Program (Version 2).

/*
* Write a program that calculates the power of each element in an array using recursion.
* Given an array arr of size n, raise each element to the power of its index and store the results in a new array.

! Input:
! Please, enter size of array: 4
! Please, enter elements of array:
! element 1: 1
! element 2: 2
! element 3: 3
! element 4: 4

! Output:
! Original Array: 1 2 3 4
! Power of each element: 1 2 9 64
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
    cout << "\n\nYou welcome in Calculates Power Using Recursion Program (Version 2) ..\n"
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

// Print Array - Function.
void printArrayFun(int size, int myArr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }
}

// Calculate Powers - Recursion Function.
void calculatePowersRecFun(int myArr[], int calcPowArr[], int size, int index = 0)
{
    if (index == size)
    {
        return;
    }

    int power = 1;
    for (int i = 0; i < index; i++)
    {
        power = power * myArr[index];
    }

    calcPowArr[index] = power;

    calculatePowersRecFun(myArr, calcPowArr, size, index + 1);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int sizeOfArray = 0;

    // Call Functions.
    printWelcomeMessageFun();
    sizeOfArray = getSizeOfArrayFun();

    // Declare Arrays.
    int myArray[sizeOfArray], calculatePowerArray[sizeOfArray];

    // Call Functions.
    getElementsOfArrayFun(sizeOfArray, myArray);

    cout << "Original Array: ";
    printArrayFun(sizeOfArray, myArray);

    calculatePowersRecFun(myArray, calculatePowerArray, sizeOfArray);

    cout << "\nPower of each element: ";
    printArrayFun(sizeOfArray, calculatePowerArray);

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
