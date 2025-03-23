
//* Product Of Elements Using Recursion Program (Version 1).

/*
* Write a program that calculates the product of elements at even positions in an array using recursion.
* Given an array arr of size n, compute the product of elements at positions 0, 2, 4, etc., and store the result.

! Input:
! Please, enter size of array: 5
! Please, enter elements of array:
! element 1: 1
! element 2: 2
! element 3: 3
! element 4: 4
! element 5: 5

! Output:
! Product of elements at even postion: 15
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
    cout << "\n\nYou welcome in Product Of Elements Using Recursion Program (Version 1) ..\n"
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

// Product Of Elements - Recursion Function.
int productOfElementsRecFun(int size, int myArr[], int proOfEle)
{
    if (size < 0)
    {
        return proOfEle;
    }
    else
    {
        if (size % 2 == 0)
        {
            proOfEle = myArr[size] * proOfEle;
        }

        return productOfElementsRecFun(size - 1, myArr, proOfEle);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int sizeOfArray = 0, productOfElements = 1;

    // Call Functions.
    printWelcomeMessageFun();
    sizeOfArray = getSizeOfArrayFun();

    // Declare Arrays.
    int myArray[sizeOfArray];

    // Call Functions.
    getElementsOfArrayFun(sizeOfArray, myArray);

    productOfElements = productOfElementsRecFun(sizeOfArray - 1, myArray, productOfElements);
    cout << "Product of elements at even postion: " << productOfElements << endl;

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
