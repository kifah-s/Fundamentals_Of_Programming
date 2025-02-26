
//* Count Number Of Digits Using Recursion Program (Version 1).

/*
* Write a program to count the number of digits in a positive integer using recursion.

! Input:
! Please, enter a positive integer: 1234

! Output:
! Number of digits: 4
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
    cout << "\n\nYou welcome in Count Number Of Digits Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;

    cout << "Please, enter a positive integer: ";
    cin >> num;

    return num;
}

// Count Number Of Digits - Recursion Function.
int countNumberOfDigitsRecFun(int num, int cou)
{
    if (num == 0) // Base Case.
    {
        cout << "Number of digits: " << cou << endl;
        return 0;
    }

    cou++;
    return countNumberOfDigitsRecFun(num / 10, cou); // Recursive call.
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfDigits = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    countNumberOfDigitsRecFun(myNumber, numberOfDigits);

    cout << "\n"
         << endl;
}
//* End Functions ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
