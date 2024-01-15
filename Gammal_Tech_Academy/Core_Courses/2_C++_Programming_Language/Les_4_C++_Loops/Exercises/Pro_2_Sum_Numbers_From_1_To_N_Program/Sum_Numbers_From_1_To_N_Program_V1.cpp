

//* >>> Sum Numbers From 1 To N Program ( Version 1 ) <<< */

//* >>> Write a program that inputs an integer n and outputs the sum of the first n positive integers. <<< */

#include <iostream>
#include <string>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
int numFromUserFun(int x);
void sumNumFun(int x, int sum);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    int number = 0, sumNumbers = 0;
    // ... End Variables ...

    // ... Functions ...
    number = numFromUserFun(number);
    sumNumFun(number, sumNumbers);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Sum Numbers From 1 To N Program ( Version 1 ) .." << endl
         << endl;
}

// Get number from user / Function.
int numFromUserFun(int x)
{
    cout << "Please enter a number: ";
    cin >> x;

    return x;
}

// Sum numbers from 1 to user input / Function.
void sumNumFun(int x, int sum)
{
    sum = 0;
    for (int i = 0; i <= x; i++)
    {
        sum += i;
    }
    cout << endl
         << "Sum numbers from 1 to " << x << " = " << sum << endl
         << endl
         << endl;
}
// *** End Functions ***
