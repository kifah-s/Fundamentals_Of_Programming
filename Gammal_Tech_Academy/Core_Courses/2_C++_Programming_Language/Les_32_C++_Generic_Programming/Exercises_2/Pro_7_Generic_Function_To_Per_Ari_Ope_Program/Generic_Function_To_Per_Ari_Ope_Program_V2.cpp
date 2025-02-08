
//* Generic Function To Perform Arithmetic Operations Program (Version 2).

/*
* Write a program that uses a generic function to perform arithmetic operations (addition, subtraction, multiplication, division) on two numbers.
* Allow the user to input two numbers and choose the operation. Provide the program code and the output.

! Input:
! Please enter two numbers:
! Please, enter first number: 2
! Please, enter second number: 8
! Please, choose an operation ( + , - , * , / ) :

! Output:
! Result: 10
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

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Generic Function To Perform Arithmetic Operations Program (Version 2) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Perform Arithmetic Operations - Function.
T performArithmeticOperationsFun(T num1, T num2, char ope)
{
    switch (ope)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;

    default:
        return 0;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    float firstNumber = 0, secondNumber = 0;
    char operation;

    cout << "Please enter tow numbers: " << endl;
    cout << "first number: ";
    cin >> firstNumber;

    cout << "second number: ";
    cin >> secondNumber;

    cout << "Please, choose an operation ( + , - , * , / ): ";
    cin >> operation;

    // Call Functions.
    cout << "Result: " << performArithmeticOperationsFun(firstNumber, secondNumber, operation);

    cout << "\n"
         << endl;
}
//* End Function ..
