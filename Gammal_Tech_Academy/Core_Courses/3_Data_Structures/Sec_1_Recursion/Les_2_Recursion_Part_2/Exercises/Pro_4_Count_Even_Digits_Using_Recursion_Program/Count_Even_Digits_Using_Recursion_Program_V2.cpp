
//* Count Even Digits Using Recursion Program (Version 2).

/*
* Write a program that prompts the user to enter a positive integer 'num'.
* The program should count and display the number of even digits in 'num'.

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of even digits: 2
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
    cout << "\n\nYou welcome in Count Even Digits Using Recursion Program (Version 2) ..\n"
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

// Count even Digits - Recursion Function.
int countEvenDigitsRecFun(int num, int numOfEvenDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return numOfEvenDig;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            numOfEvenDig++;
        }

        num = num / 10;

        return countEvenDigitsRecFun(num, numOfEvenDig); // Recursive call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfEvenDigits = 0;

    // Call Functions.
    printWelcomeMessageFun();
    myNumber = getNumberFun();
    numberOfEvenDigits = countEvenDigitsRecFun(myNumber, numberOfEvenDigits);
    cout << "Number of even digits: " << numberOfEvenDigits << endl;

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
