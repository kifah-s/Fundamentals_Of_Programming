

//* Sort Array Of Characters Program (Version 1).

/*
* Write a program to sort the first 6 elements of an array of characters in ascending order,
* The array charArray is initially {'f', 'b', 'z', 'a', 'c', 'x', 'y', 'm'}.

! Output:
! Sorted Array Of Characters(First 6 Elements): a b c f x z y m
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void resultFun(int len, char myArr[]);

int main()
{
    // Declare Variables.
    char myArray[] = {'f', 'b', 'z', 'a', 'c', 'x', 'y', 'm'};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    // Call Functions.
    resultFun(length, myArray);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort Array Of Characters Program (Version 1) ..\n"
         << endl;
}

// Sort Array - Function.
void sortArrayFun(int len, char myArr[])
{
    sort(myArr, myArr + 6);
}

// Print Array - Function.
void printArrayFun(int len, char myArr[])
{
    cout << "Sorted Array Of Characters(First 6 Elements): ";
    for (int i = 0; i < len; i++)
    {
        cout << myArr[i] << " ";
    }
}

// Result - Function.
void resultFun(int len, char myArr[])
{
    printWelcomeMessageFun();
    sortArrayFun(len, myArr);
    printArrayFun(len, myArr);

    cout << "\n\n"
         << endl;
}
//* End Function ..
