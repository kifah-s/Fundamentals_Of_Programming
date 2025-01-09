

//* Sort Mixed Array Program (Version 1).

/*
* Create a program that sorts a mixed array of integers and floats in ascending order,
* The array mixedArray is initially {9, 8.5, 7, 6.3, 5}.

! Output:
! Sorted Mixed Array: 5 6.3 7 8.5 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void resultFun(int len, float myArr[]);

int main()
{
    // Declare Variables.
    float myArray[] = {9, 8.5, 7, 6.3, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    // Call Functions.
    resultFun(length, myArray);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort Mixed Array Program (Version 1) ..\n"
         << endl;
}

// Sort Array - Function.
void sortArrayFun(int len, float myArr[])
{
    sort(myArr, myArr + len);
}

// Print Array - Function.
void printArrayFun(int len, float myArr[])
{
    cout << "Sorted Array: ";
    for (int i = 0; i < len; i++)
    {
        cout << myArr[i] << " ";
    }
}

// Result - Function.
void resultFun(int len, float myArr[])
{
    printWelcomeMessageFun();
    sortArrayFun(len, myArr);
    printArrayFun(len, myArr);

    cout << "\n\n"
         << endl;
}
//* End Function ..
