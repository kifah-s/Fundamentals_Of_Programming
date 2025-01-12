
//* First 4 Elements Program (Version 1).

/*
* Write a program to sort the first 4 elements of an array in descending order,
* The array x is initially {3, 5, 7, 2, 4, 6, 9}.


! Output:
! Sorted Array in Descending: 7 5 3 2 4 6 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int len, int arr[]);

int main()
{
    // Declare Variables.
    int myArray[] = {3, 5, 7, 2, 4, 6, 9};
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
void sortArrayFun(int len, int arr[])
{
    sort(arr, arr + 4, greater<int>());

    cout << "Sorted Array in Descending: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

// Result - Function.
void resultFun(int len, int arr[])
{
    printWelcomeMessageFun();
    sortArrayFun(len, arr);

    cout << "\n"
         << endl;
}
//* End Function ..
