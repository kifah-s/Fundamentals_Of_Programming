
//* Count and Sum and Product Even Digits Using Recursion 2 Program (Version 4).

/*
* * Write a program that takes a positive integer 'num' as input from the user.
* The program should count and display the number of even digits, calculate and display the sum of even digits,
* and calculate and display the product of even digits in 'num'.

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of Even digits: 2
! Sum of Even digits: 6
! Product of Even digits: 8
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
    cout << "\n\nYou welcome in Count and Sum and Product Even Digits Using Recursion 2 Program (Version 4) ..\n"
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

// Count Even Digits - Recursion Function.
int countEvenDigitsRecFun(int num)
{
    return (num == 0) ? 0 : (num % 2 == 0) + countEvenDigitsRecFun(num / 10);
}

// Sum Even Digits - Recursion Function.
int sumEvenDigitsRecFun(int num)
{
    return (num == 0) ? 0 : ((num % 2 == 0) ? num % 10 : 0) + sumEvenDigitsRecFun(num / 10);
}

// Product Even Digits - Recursion Function.
int productEvenDigitsRecFun(int num)
{
    return (num == 0) ? 1 : ((num % 2 == 0) ? num % 10 : 1) * productEvenDigitsRecFun(num / 10);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    cout << "Number of Even digits: " << countEvenDigitsRecFun(myNumber) << endl;

    cout << "Sum of Even digits: " << sumEvenDigitsRecFun(myNumber) << endl;

    cout << "Product of Even digits: " << productEvenDigitsRecFun(myNumber) << endl;

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
