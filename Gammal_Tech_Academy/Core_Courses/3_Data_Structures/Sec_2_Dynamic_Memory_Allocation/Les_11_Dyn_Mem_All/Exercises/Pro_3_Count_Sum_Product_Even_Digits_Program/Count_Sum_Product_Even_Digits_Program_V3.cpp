
//* Count Sum Product Even Digits Program (Version 3).

/*
* Write a program that takes a positive integer 'num' as input from the user.
* The program should count and display the number of even digits,
* calculate and display the sum of even digits,
* and calculate and display the product of even digits in 'num'.

! Output:
! Please, enter a positive number: 12345

! Output:
! Number of even digits: 2
! Sum of even digits: 6
! Product of even digits: 8
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
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Count Sum Product Even Digits Program (Version 3) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int myNum = 0;

    cout << "Please, enter a positive number: ";
    cin >> myNum;

    return myNum;
}

// Count Even Digits - Function.
int countEvenDigitsFun(int myNum)
{
    return (myNum == 0) ? 0 : (myNum % 2 == 0) + countEvenDigitsFun(myNum / 10);
}

// Sum Even Digits - Function.
int sumEvenDigitsFun(int myNum)
{
    return (myNum == 0) ? 0 : ((myNum % 2 == 0) ? myNum % 10 : 0) + sumEvenDigitsFun(myNum / 10);
}

// Product Even Digits - Function.
int productEvenDigitsFun(int myNum)
{
    return (myNum == 0) ? 1 : ((myNum % 2 == 0) ? myNum % 10 : 1) * productEvenDigitsFun(myNum / 10);
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    cout << "Number of even digits: " << countEvenDigitsFun(myNumber) << endl;
    cout << "Sum of even digits: " << sumEvenDigitsFun(myNumber) << endl;
    cout << "Product of even digits: " << productEvenDigitsFun(myNumber) << endl;

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
