
//* Generic Function To Perform Arithmetic Operations Program (Version 1).

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
    cout << "\n\nYou welcome in Generic Function To Perform Arithmetic Operations Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename FN>

// Get First Number - Function.
FN getFirstNumberFun(FN num)
{
    cout << "Please enter tow numbers: " << endl;
    cout << "first number: ";
    cin >> num;

    return num;
}

// Create Template.
template <typename SN>

// Get Second Number - Function.
SN getSecondNumberFun(SN num)
{
    cout << "second number: ";
    cin >> num;

    return num;
}

// Create Template.
template <typename C>

// Get Operations - Function.
C getOperationsFun(C ope)
{
    cout << "Please, choose an operation ( + , - , * , / ): ";
    cin >> ope;

    return ope;
}

// Create Template.
template <typename A>

// Addition - Function.
A additionFun(A num1, A num2)
{
    A add = 0;
    add = num1 + num2;

    return add;
}

// Create Template.
template <typename S>

// Subtraction - Function.
S subtractionFun(S num1, S num2)
{
    S sub = 0;
    sub = num1 - num2;

    return sub;
}

// Create Template.
template <typename M>

// Multiplication - Function.
M multiplicationFun(M num1, M num2)
{
    M mul = 0;
    mul = num1 * num2;

    return mul;
}

// Create Template.
template <typename D>

// Division - Function.
D divisionFun(D num1, D num2)
{
    D div = 0;
    div = num1 / num2;

    return div;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    float firstNumber = 0, secondNumber = 0, result = 0;
    char operation;

    // Call Functions.
    firstNumber = getFirstNumberFun(firstNumber);
    secondNumber = getSecondNumberFun(secondNumber);
    operation = getOperationsFun(operation);

    switch (operation)
    {
    case '+':
        result = additionFun(firstNumber, secondNumber);
        cout << "Result: " << result;
        break;

    case '-':
        result = subtractionFun(firstNumber, secondNumber);
        cout << "Result: " << result;
        break;

    case '*':
        result = additionFun(firstNumber, secondNumber);
        cout << "Result: " << result;
        break;

    case '/':
        result = divisionFun(firstNumber, secondNumber);
        cout << "Result: " << result;
        break;

    default:
        break;
    }

    cout << "\n"
         << endl;
}
//* End Function ..
