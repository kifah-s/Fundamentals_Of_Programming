

//* Sort Array Program (Version 1).

/*
* Write a program to sort the elements of an array in ascending order using the sort function from the algorithm library,
* The array x is initially {9, 8, 7, 6, 5}.

! Output:
! Sorted Array: 5 6 7 8 9
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
    cout << "\n\nYou welcome in Sort Array Program (Version 1) ..\n"
         << endl;
}

// Sort Array - Function.
void sortArrayFun(int len, int myArr[])
{
    sort(myArr, myArr + len);
}

// Print Array - Function.
void printArrayFun(int len, int myArr[])
{
    cout << "Sorted Array: ";
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
