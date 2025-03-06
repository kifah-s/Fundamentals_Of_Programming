
//* Reverse Number Using Recursion Program (Version 1).

/*
* Extend the previous program to find and display the reverse of the entered positive integer 'num' if it is odd.
* If 'num' is even, the program should continue to display the message "No result." using recursion

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of digits: 5
! Sum of digits: 15
! Product of digits: 120
! Revers of digits: 54321
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
    cout << "\n\nYou welcome in Reverse Number Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Number Of Digits - Recursion Function.
int numberOfDigitsRecFun(int num, int numOfDig)
{
    if (num == 0) // Base Case.
    {
        return numOfDig;
    }
    else
    {
        num = num / 10;
        numOfDig++;
        return numberOfDigitsRecFun(num, numOfDig); // Recursive Call.
    }
}

// Sum Of Digits - Recursion Function.
int sumOfDigitsRecFun(int num, int sumOfDig)
{
    if (num == 0) // Base Case.
    {
        return sumOfDig;
    }
    else
    {
        int lastDigit = num % 10;
        sumOfDig = sumOfDig + lastDigit;
        num = num / 10;
        return sumOfDigitsRecFun(num, sumOfDig); // Recursive Call.
    }
}

// Product Of Digits - Recursion Function.
int productOfDigitsRecFun(int num, int proOfDig)
{
    if (num == 0) // Base Case.
    {
        return proOfDig;
    }
    else
    {
        int lastDigit = num % 10;
        proOfDig = proOfDig * lastDigit;
        num = num / 10;
        return productOfDigitsRecFun(num, proOfDig); // Recursive Call.
    }
}

// Revers Number - Recursion Function.
int reversNumberRecFun(int num, int revNum)
{
    if (num == 0) // Base Case.
    {
        return revNum;
    }
    else
    {
        int lastDigit = num % 10;
        revNum = (revNum * 10) + lastDigit; 
        num = num / 10;
        return reversNumberRecFun(num, revNum); // Recursive Call.
    }
}

// Check Number - Function.
bool checkNumberFun(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfDigits = 0, sumOfDigits = 0, productOfDigits = 1, reversNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    if (checkNumberFun(myNumber) == true)
    {
        numberOfDigits = numberOfDigitsRecFun(myNumber, numberOfDigits);
        cout << "Number of digits: " << numberOfDigits << endl;

        sumOfDigits = sumOfDigitsRecFun(myNumber, sumOfDigits);
        cout << "Sum of digits: " << sumOfDigits << endl;

        productOfDigits = productOfDigitsRecFun(myNumber, productOfDigits);
        cout << "Product of digits: " << productOfDigits << endl;
        
        reversNumber = reversNumberRecFun(myNumber, reversNumber);
        cout << "Revers of digits: " << reversNumber << endl;
    }
    else
    {
        cout << "No Result" << endl;
    }

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
