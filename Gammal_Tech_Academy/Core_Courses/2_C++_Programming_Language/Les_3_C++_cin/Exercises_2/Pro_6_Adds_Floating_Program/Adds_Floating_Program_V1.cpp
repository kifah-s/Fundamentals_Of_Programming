

//* Adds Floating Program (Version 1).

/*
* Write a program that asks the user for two floating-point numbers,
* adds them, and prints the result.

! Input:
! Please, enter two floating numbers:
! floating 1: 8.3
! floating 2: 6.9

! Output:
! Sum of Adds: 15.2
*/

#include <iostream>

using namespace std;

void resultFun(float num1, float num2, float res);

int main()
{
    // Declare Variables.
    float number1 = 0, number2 = 0, result = 0;

    // Call Functions.
    resultFun(number1, number2, result);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Adds Floating Program (Version 1) ..\n"
         << endl;
}

// Get Number 1 - Function.
float getNumber1Fun(float num1)
{
    cout << "Please, enter two floating numbers: " << endl;
    cout << "floating 1: ";
    cin >> num1;

    return num1;
}

// Get Number 2 - Function.
float getNumber2Fun(float num2)
{
    cout << "floating 2: ";
    cin >> num2;

    return num2;
}

// Adds Floating - Function.
float addsFloatingFun(float num1, float num2, float res)
{
    num1 = getNumber1Fun(num1);
    num2 = getNumber2Fun(num2);

    res = num1 + num2;

    return res;
}

// Result - Function.
void resultFun(float num1, float num2, float res)
{
    printWelcomeMessageFun();
    res = addsFloatingFun(num1, num2, res);

    cout << "\nSum of Adds: " << res << "\n\n"
         << endl;
}
//* End Function ..
