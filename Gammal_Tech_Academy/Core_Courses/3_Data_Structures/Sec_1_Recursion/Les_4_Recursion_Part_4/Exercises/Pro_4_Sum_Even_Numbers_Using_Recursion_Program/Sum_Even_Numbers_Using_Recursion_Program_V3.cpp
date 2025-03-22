
//* Sum Even Numbers Using Recursion Program (Version 3).

/*
* Write a program to find the sum of even numbers from 2 to N using recursion.

! Input:
! Please, enter a number: 8

! Output:
! Sum even numbers from 2 to 8: 20
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>
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
    cout << "\n\nYou welcome in Sum Even Numbers Using Recursion Program (Version 3) ..\n"
         << endl;
}

// Get number - Function.
int getNumberFun()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Sum Even Numbers - Recursion Function.
int sumEvenNumbersRecFun(int num)
{
    if (num < 2)
    {
        return 0;
    }
    else
    {
        if (num % 2 == 0)
        {
            return num + sumEvenNumbersRecFun(num - 1);
        }
        else
        {
            return sumEvenNumbersRecFun(num - 1);
        }
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0, sumEvenNumbers = 0;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();
    sumEvenNumbers = sumEvenNumbersRecFun(number);

    cout << "Sum even numbers from 2 to " << number << ": " << sumEvenNumbers << endl;

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
