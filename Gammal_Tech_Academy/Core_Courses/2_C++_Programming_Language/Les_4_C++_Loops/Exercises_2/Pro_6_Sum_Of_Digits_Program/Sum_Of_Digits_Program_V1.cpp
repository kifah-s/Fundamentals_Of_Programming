

//* Sum Of Digits Program (Version 1).

/*
* Write a program to find the sum of digits of a given number using a for.

! Input:
! Please, enter a number: 7894

! Output:
! Sum Digits: 28
*/

#include <iostream>

using namespace std;

void resultFun(int num, int sumDig);

int main()
{
    // Declare Variables.
    int number = 0, sumDigits = 0;

    // Call Functions.
    resultFun(number, sumDigits);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Of Digits Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Sum Digits - Function.
int sumDigitsFun(int num, int sumDig)
{
    int digit = 0;

    for (; num > 0;)
    {
        digit = num % 10;
        sumDig = sumDig + digit;
        num = num / 10;
    }

    return sumDig;
}

// Result - Function.
void resultFun(int num, int sumDig)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    sumDig = sumDigitsFun(num, sumDig);

    cout << "\nSum Digits: " << sumDig << "\n\n"
         << endl;
}
//* End Function ..
