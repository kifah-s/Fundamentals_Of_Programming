

//* Enter Number Program (Version 1).

/*
* Write a program that prompts the user to enter a number,
* stores it in an integer variable, and then prints the entered number.

! Input:
! Please, Enter a number: 5

! Output:
! Number is 5
*/

#include <iostream>

using namespace std;

void resultFun(int num);

int main()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    resultFun(number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Enter Number Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, Enter a number: ";
    cin >> num;

    return num;
}

// Print Number - Function.
void printNumberFun(int num)
{
    cout << "\nNumber is: " << num << "\n\n"
         << endl;
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    printNumberFun(num);
}
//* End Function ..
