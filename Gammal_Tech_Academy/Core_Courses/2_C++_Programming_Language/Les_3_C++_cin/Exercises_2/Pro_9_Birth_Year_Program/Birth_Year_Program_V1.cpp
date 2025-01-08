

//* Birth Year Program (Version 1).

/*
* Create a program that asks the user for their birth year and prints a message.

! Input:
! Please, enter your birth year: 2002

! Output:
! You were born in the year 2002.
*/

#include <iostream>

using namespace std;

void resultFun(int birYear);

int main()
{
    // Declare Variables.
    int myBirthYear = 0;

    // Call Functions.
    resultFun(myBirthYear);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Birth Year Program (Version 1) ..\n"
         << endl;
}

// Get BirthYear - Function.
int getBirthYearFun(int birYear)
{
    cout << "Please, enter your birth year: ";
    cin >> birYear;

    return birYear;
}

// Print Birth Year - Function.
void printBirthYearFun(int birYear)
{
    cout << "\nYou were born in the year " << birYear << ".\n\n"
         << endl;
}

// Result - Function.
void resultFun(int birYear)
{
    printWelcomeMessageFun();
    birYear = getBirthYearFun(birYear);
    printBirthYearFun(birYear);
}
//* End Function ..
