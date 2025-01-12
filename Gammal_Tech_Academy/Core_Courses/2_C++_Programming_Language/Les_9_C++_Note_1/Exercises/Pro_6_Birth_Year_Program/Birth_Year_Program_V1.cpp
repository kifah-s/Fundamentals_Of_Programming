

//* Birth Year Program (Version 1).

/*
* Create a program that asks the user for their birth year and prints a message.


! Input:
! Please, enter your birth year: 2002

! Output:
! Your were born in the year: 2002
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int bir);

int main()
{
    // Declare Variables.
    int userBirthYear = 0;

    // Call Functions.
    resultFun(userBirthYear);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Birth Year Program (Version 1) ..\n"
         << endl;
}

// Get Birth Year - Function.
int getBirthYearFun(int bir)
{
    cout << "Please, enter your Birth Year: ";
    cin >> bir;

    return bir;
}

// Result - Function.
void resultFun(int bir)
{
    printWelcomeMessageFun();
    bir = getBirthYearFun(bir);

    cout << "\nYour were born in the year: " << bir;

    cout << "\n"
         << endl;
}
//* End Function ..
