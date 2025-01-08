

//* Product Of Digits Program (Version 1).

/*
* Create a program to find the product of digits of a given number using a for.

! Input:
! Please, enter a number: 8423

! Output:
! Product Digits: 192
*/

#include <iostream>

using namespace std;

void resultFun(int num, int proDig);

int main()
{
    // Declare Variables.
    int number = 0, productDigits = 1;

    // Call Functions.
    resultFun(number, productDigits);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Product Of Digits Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Product Digits - Function.
int productDigitsFun(int num, int proDig)
{
    int digit = 0;

    for (; num > 0;)
    {
        digit = num % 10;
        proDig = proDig * digit;
        num = num / 10;
    }

    return proDig;
}

// Result - Function.
void resultFun(int num, int proDig)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    proDig = productDigitsFun(num, proDig);

    cout << "\nProduct Digits: " << proDig << "\n\n"
         << endl;
}
//* End Function ..
