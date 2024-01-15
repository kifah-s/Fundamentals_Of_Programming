

/* >>> Sum Two Numbers Program ( Version 1 ) <<< */

/* >>> Write a program that inputs two numbers and outputs their sum using 'cin'. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************

void welcomeMassageFun();
int firstNumberFun(int x);
int secondNumberFun(int x);
void sumResultFun(int x, int y, int sum);

// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************

    int firstNumber = 0, secondNumber = 0, sumResult = 0;

    // ************ End Variables ****************

    // **************** Functions ****************

    firstNumber = firstNumberFun(firstNumber);
    secondNumber = secondNumberFun(secondNumber);
    sumResultFun(firstNumber, secondNumber, sumResult);

    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************

// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Sum Two Numbers Program ( Version 1 ) .." << endl
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
void sumResultFun(int x, int y, int sum)
{
    sum = x + y;

    cout << endl
         << "Sum result = " << sum << endl
         << endl;
}

// **************** End Functions ****************
