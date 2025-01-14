
//* Specified Index Program (Version 1).

/*
* program to take a number as input and print substrings starting from the specified index.


! Input:
! Please, enter the starting index: 2

! Output:
! med
! ed
! d
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num, string name);

int main()
{
    // Declare Variables.
    string name = "ahmed";
    int number = 0;

    // Call Functions.
    resultFun(number, name);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Specified Index Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter the starting index: ";
    cin >> num;

    return num;
}

// Sub And Print Name - Function.
void subAndPrintNameFun(int num, string name)
{
    num = getNumberFun(num);

    // cout << name.substr(0) << endl;
    // cout << name.substr(1) << endl;
    // cout << name.substr(2) << endl;
    // cout << name.substr(3) << endl;
    // cout << name.substr(4) << endl;

    for (int i = num; i < name.size(); i++)
    {
        cout << name.substr(i) << endl;
    }
}

// Result - Function.
void resultFun(int num, string name)
{
    printWelcomeMessageFun();
    subAndPrintNameFun(num, name);

    cout << "\n"
         << endl;
}
//* End Function ..
