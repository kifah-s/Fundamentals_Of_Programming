
//* Simple Calculator 2 Program (Version 1).

/*
* Create a program that acts as a simple calculator, allowing users to perform addition, subtraction, multiplication, and division. using switch.

! Input:
! Please, Enter two numbers:
! first number: 5
! second number: 6
! Please, enter operation(+ , - , * , /): -

! Output:
! Result: -1
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
    cout << "\n\nYou welcome in Simple Calculator 2 Program (Version 1) ..\n"
         << endl;
}

// Get First Number - Function.
float getFirstNumberFun()
{
    float n;
    cout << "Please, Enter tow numbers: " << endl;
    cout << "First number: ";
    cin >> n;

    return n;
}

// Get Second Number - Function.
float getSecondNumberFun()
{
    float n;
    cout << "Second number: ";
    cin >> n;

    return n;
}

// Get Operation - Function.
char getOperationFun()
{
    char c;
    cout << "Please, enter operation(+ , - , * , /): ";
    cin >> c;

    return c;
}

// Addition - Function.
float additionFun(float n1, float n2)
{
    float res = n1 + n2;

    return res;
}

// Subtraction - Function.
float subtractionFun(float n1, float n2)
{
    float res = n1 - n2;

    return res;
}

// Multiplication - Function.
float multiplicationFun(float n1, float n2)
{
    float res = n1 * n2;

    return res;
}

// Division - Function.
float divisionFun(float n1, float n2)
{
    float res = n1 / n2;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    float num1 = 0, num2 = 0, result = 0;
    char operation;

    // Call Functions.
    printWelcomeMessageFun();
    num1 = getFirstNumberFun();
    num2 = getSecondNumberFun();
    operation = getOperationFun();

    if (operation == '+')
    {
        result = additionFun(num1, num2);
        cout << "Result: " << result << endl;
    }
    else if (operation == '-')
    {
        result = subtractionFun(num1, num2);
        cout << "Result: " << result << endl;
    }
    else if (operation == '*')
    {
        result = multiplicationFun(num1, num2);
        cout << "Result: " << result << endl;
    }
    else if (operation == '/')
    {
        if (num2 == 0)
        {
            cout << "You can't divide by 0." << endl;
        }
        else
        {
            result = divisionFun(num1, num2);
            cout << "Result: " << result << endl;
        }
    }
    else
    {
        cout << "Invalid Input." << endl;
    }

    cout << "\n"
         << endl;
}
//* End Function ..
