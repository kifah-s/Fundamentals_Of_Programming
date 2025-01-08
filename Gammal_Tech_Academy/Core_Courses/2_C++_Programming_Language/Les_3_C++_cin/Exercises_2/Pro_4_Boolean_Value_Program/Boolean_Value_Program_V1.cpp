

//* Boolean Value Program (Version 1).

/*
* Write a program that takes a boolean value (1 or 0) as input,
* stores it in a bool variable, and prints the entered boolean value.

! Input:
! Please, enter a boolean value: 1

! Output:
! The boolean value is: 1
*/

#include <iostream>

using namespace std;

void resultFun(bool x);

int main()
{
    // Declare Variables.
    bool myBooleanValue = 0;

    // Call Functions.
    resultFun(myBooleanValue);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Boolean Value Program (Version 1) ..\n"
         << endl;
}

// Get Boolean Value - Function.
bool getBooleanValueFun(bool x)
{
    cout << "Please, enter a boolean value: ";
    cin >> x;

    return x;
}

// Print Boolean Value - Function.
void printBooleanValueFun(bool x)
{
    cout << "\nThe boolean value is: " << x << "\n\n"
         << endl;
}

// Result - Function.
void resultFun(bool x)
{
    printWelcomeMessageFun();
    x = getBooleanValueFun(x);
    printBooleanValueFun(x);
}
//* End Function ..
