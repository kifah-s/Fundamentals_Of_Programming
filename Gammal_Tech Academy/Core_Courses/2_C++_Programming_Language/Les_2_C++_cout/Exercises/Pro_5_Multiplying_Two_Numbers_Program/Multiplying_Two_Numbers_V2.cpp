

/* >>> Multiplying Two Numbers Program ( Version 2 ) <<< */

/* >>> Write a program that outputs the product of two numbers entered by the user using cout. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************

void welcomeMassageFun();
int firstNumberFun(int x);
int secondNumberFun(int x);
int multiplicationResultFun(int x, int y);

// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************

    int firstNumber = 0, secondNumber = 0, multiplicationResult = 0;

    // ************ End Variables ****************

    // **************** Functions ****************

    firstNumber = firstNumberFun(firstNumber);
    secondNumber = secondNumberFun(secondNumber);

    multiplicationResult = multiplicationResultFun(firstNumber, secondNumber);
    cout << endl
         << "Multiplication result = " << multiplicationResult << endl
         << endl;

    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************

// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Multiplying Two Numbers Program ( Version 2 ) .." << endl
         << endl;
}

// Get first number from user / Function.
int firstNumberFun(int x)
{
    cout << "Please enter first number: ";
    cin >> x;

    return x;
}

// Get second number from user / Function.
int secondNumberFun(int x)
{
    cout << "Please enter second number: ";
    cin >> x;

    return x;
}

// Multiplication result / Function.
int multiplicationResultFun(int x, int y)
{
    return x * y;
}

// **************** End Functions ****************
