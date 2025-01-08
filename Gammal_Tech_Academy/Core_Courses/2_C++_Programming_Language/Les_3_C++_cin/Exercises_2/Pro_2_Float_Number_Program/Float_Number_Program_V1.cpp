

//* Float Number Program (Version 1).

/*
* Create a program that takes a decimal number as input,
* stores it in a float variable, and prints the entered number.

! Input:
! Please, Enter a number: 5.58

! Output:
! Number is 5.5
*/

#include <iostream>

using namespace std;

void resultFun(float num);

int main()
{
    // Declare Variables.
    float number = 0;

    // Call Functions.
    resultFun(number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Float Number Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
float getNumberFun(float num)
{
    cout << "Please, Enter a number: ";
    cin >> num;

    return num;
}

// Print Number - Function.
void printNumberFun(float num)
{
    cout << "\nNumber is: " << num << "\n\n"
         << endl;
}

// Result - Function.
void resultFun(float num)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    printNumberFun(num);
}
//* End Function ..
