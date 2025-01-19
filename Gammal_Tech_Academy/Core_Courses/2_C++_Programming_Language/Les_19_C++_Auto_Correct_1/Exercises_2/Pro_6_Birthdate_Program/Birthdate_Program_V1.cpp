
//* Birthdate Program (Version 1).

/*
* Write a program that asks for the user's birthdate and then outputs a message with the capitalized month.

! Input:
! What is your birthdate month? july

! Output:
! Happy birthday month! I hope July brings you jou.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Birthdate Program (Version 1) ..\n"
         << endl;
}

// Get Birthdate Month - Function.
string getBirthdateMonthFun(string birMon)
{
    cout << "What is your birthdate month? ";
    cin >> birMon;

    return birMon;
}

// Update Birthdate Month - Function.
string updateBirthdateMonthFun(string birMon)
{
    birMon[0] = toupper(birMon[0]);

    return birMon;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string BirthdateMonth;

    // Call Functions.
    BirthdateMonth = getBirthdateMonthFun(BirthdateMonth);
    BirthdateMonth = updateBirthdateMonthFun(BirthdateMonth);

    cout << "\nHappy birthday month! I hope " << BirthdateMonth << " brings you jou.";

    cout << "\n"
         << endl;
}
//* End Function ..
