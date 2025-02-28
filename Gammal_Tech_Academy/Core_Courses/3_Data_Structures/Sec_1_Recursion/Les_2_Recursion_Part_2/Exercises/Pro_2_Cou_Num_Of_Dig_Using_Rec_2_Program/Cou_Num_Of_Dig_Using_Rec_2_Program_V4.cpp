
//* Count Number Of Digits Using Recursion 2 Program (Version 4).

/*
* Write a program that takes a positive integer input 'num' from the user and counts the number of digits in it.
* Implement this functionality using a recursive function named countDigits.
* Ensure that the program only performs the count if the entered number is odd,
* otherwise, it should display "no result."

! Input:
! Please, enter a positive integer: 333

! Output:
! Number of digits: 3
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
    cout << "\n\nYou welcome in Count Number Of Digits Using Recursion 2 Program (Version 4) ..\n"
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
int countNumberOfDigitsRecFun(int num)
{
    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        return 1 + countNumberOfDigitsRecFun(num / 10); // Recursive call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    if (myNumber % 2 != 0) // OR (myNumber % 2)
    {
        cout << "Number of digits: " << countNumberOfDigitsRecFun(myNumber) << endl;
    }
    else
    {
        cout << "no result." << endl;
    }

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
