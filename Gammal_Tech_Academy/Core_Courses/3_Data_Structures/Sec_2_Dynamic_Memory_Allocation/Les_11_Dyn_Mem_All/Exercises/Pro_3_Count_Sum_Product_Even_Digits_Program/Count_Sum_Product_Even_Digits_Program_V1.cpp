
//* Count Sum Product Even Digits Program (Version 1).

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
    cout << "\n\nYou welcome in Count Sum Product Even Digits Program (Version 1) ..\n"
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

// Count Sum Product Even Digits - Function.
void countSumProductEvenDigitsFun(int myNum, int &countEvenDig, int &sumEvenDig, int &productEvenDig)
{
    int digit = 0;

    if (myNum > 0)
    {
        digit = myNum % 10;

        if (digit % 2 == 0)
        {
            countEvenDig++;
            sumEvenDig += digit;
            productEvenDig *= digit;
        }

        countSumProductEvenDigitsFun(myNum / 10, countEvenDig, sumEvenDig, productEvenDig);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int myNumber = 0, countEvenDigit = 0, sumEvenDigit = 0, productEvenDigit = 1;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    countSumProductEvenDigitsFun(myNumber, countEvenDigit, sumEvenDigit, productEvenDigit);

    cout << "Number of even digits: " << countEvenDigit << endl;
    cout << "Sum of even digits: " << sumEvenDigit << endl;
    cout << "Product of even digits: " << productEvenDigit << endl;

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
