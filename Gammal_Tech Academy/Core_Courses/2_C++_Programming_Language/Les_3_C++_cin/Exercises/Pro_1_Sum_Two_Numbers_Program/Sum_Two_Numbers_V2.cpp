

/* >>> Sum Two Numbers Program ( Version 2 ) <<< */

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
int sumResultFun(int x, int y, int sum);

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
    sumResult = sumResultFun(firstNumber, secondNumber, sumResult);

    cout << endl
         << "Sum result = " << sumResult << endl
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
         << "You welcome in Sum Two Numbers Program ( Version 2 ) .." << endl
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
int sumResultFun(int x, int y, int sum)
{
    sum = x + y;

    return sum;
}

// **************** End Functions ****************
