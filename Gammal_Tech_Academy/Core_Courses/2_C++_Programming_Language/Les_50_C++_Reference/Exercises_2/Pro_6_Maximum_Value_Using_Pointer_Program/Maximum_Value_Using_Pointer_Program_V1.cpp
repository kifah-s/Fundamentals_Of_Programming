
//* Maximum Value Using Pointer Program (Version 1).

/*
* Write a program that uses pointers to find the maximum value in an array. {3, 7, 1, 12, 5}.

! Output:
! Maximum Value: 12
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

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Maximum Value Using Pointer Program (Version 1) ..\n"
         << endl;
}

// Maximum Value - Function.
void maximumValueFun(int s, int arr[], int *p)
{
    *p = arr[0];

    for (int i = 1; i < s; i++)
    {
        if (arr[i] > *p)
        {
            *p = arr[i];
        }
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int size = 5, myArray[size] = {3, 7, 1, 12, 5}, maxValue = 0;
    int *pot = &maxValue;

    // Call Functions.
    printWelcomeMessageFun();

    maximumValueFun(size, myArray, pot);

    // cout << "Maximum Value: " << maxValue << endl;
    cout << "Maximum Value: " << *pot << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
