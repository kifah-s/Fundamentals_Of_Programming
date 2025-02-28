
//* Sum Of Digits Using Recursion Program (Version 3).

/*
* Write a program to find the sum of digits of a positive integer using recursion.

! Input:
! Please, enter a positive integer: 159

! Output:
! Sum of digits is: 15
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
    cout << "\n\nYou welcome in Sum Of Digits Using Recursion Program (Version 3) ..\n"
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

// Sum Number Of Digits - Recursion Function.
int sumNumberOfDigitsRecFun(int num, int sum)
{
    int digit = 0;

    if (num == 0) // Base Case.
    {
        return sum;
    }
    else
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
        return sumNumberOfDigitsRecFun(num, sum); // Recursive Call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, sumOfDigits = 0;

    // Call Functions.
    printWelcomeMessageFun();
    myNumber = getNumberFun();
    sumOfDigits = sumNumberOfDigitsRecFun(myNumber, sumOfDigits);

    cout << "Sum Number Of Digits is: " << sumOfDigits << endl;

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
