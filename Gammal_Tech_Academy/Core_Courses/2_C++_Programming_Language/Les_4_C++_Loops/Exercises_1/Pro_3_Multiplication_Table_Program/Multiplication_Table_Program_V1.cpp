

//* >>> Multiplication Table Program ( Version 1 ) <<< */

//* >>> Write a program that inputs a positive integer n and outputs the multiplication table for the number from 1 to n. <<< */

#include <iostream>
#include <string>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
int numFromUserFun(int x);
void MulTabFun(int x, int mult);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    int number = 0, multiplication = 0;
    // ... End Variables ...

    // ... Functions ...
    number = numFromUserFun(number);
    MulTabFun(number, multiplication);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Multiplication Table Program ( Version 1 ) .." << endl
         << endl;
}

// Get number from user / Function.
int numFromUserFun(int x)
{
    cout << "Please enter a number: ";
    cin >> x;

    return x;
}

// Multiplication Table / Function.
void MulTabFun(int x, int mult)
{
    mult = 0;
    for (int i = 1; i <= x; i++)
    {
        mult = i * 5;
        cout << i << " * " << x << " = " << mult << endl;
    }
    cout << endl
         << endl
         << endl;
}
// *** End Functions ***
