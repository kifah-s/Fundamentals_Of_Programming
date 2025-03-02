
//* Count Odd Digits Using Recursion Program (Version 2).

/*
* Write a program that prompts the user to enter a positive integer 'num'.
* The program should count and display the number of odd digits in 'num'.

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of even digits: 3
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
    cout << "\n\nYou welcome in Count Odd Digits Using Recursion Program (Version 2) ..\n"
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

// Count Odd Digits - Recursion Function.
int countOddDigitsRecFun(int num, int numOfOddDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return numOfOddDig;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            numOfOddDig++;
        }

        num = num / 10;

        return countOddDigitsRecFun(num, numOfOddDig); // Recursive call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfOddDigits = 0;

    // Call Functions.
    printWelcomeMessageFun();
    myNumber = getNumberFun();
    numberOfOddDigits = countOddDigitsRecFun(myNumber, numberOfOddDigits);
    cout << "Number of Odd digits: " << numberOfOddDigits << endl;

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
