

//* First 4 Elements Program (Version 1).

/*
* Write a program to sort the first 4 elements of an array in descending order,
* The array x is initially {9, 8, 7, 6, 5}.

! Output:
! Sorted Array in Descending order: 9 8 7 6 5
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void resultFun(int len, int myArr[]);

int main()
{
    // Declare Variables.
    int myArray[] = {9, 8, 7, 6, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    // Call Functions.
    resultFun(length, myArray);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in First 4 Elements Program (Version 1) ..\n"
         << endl;
}

// Sort Array - Function.
void sortArrayFun(int len, int myArr[])
{
    sort(myArr, myArr + 4, greater<int>());
}

// Print Array - Function.
void printArrayFun(int len, int myArr[])
{
    cout << "Sorted Array in Descending order: ";
    for (int i = 0; i < len; i++)
    {
        cout << myArr[i] << " ";
    }
}

// Result - Function.
void resultFun(int len, int myArr[])
{
    printWelcomeMessageFun();
    sortArrayFun(len, myArr);
    printArrayFun(len, myArr);

    cout << "\n\n"
         << endl;
}
//* End Function ..
