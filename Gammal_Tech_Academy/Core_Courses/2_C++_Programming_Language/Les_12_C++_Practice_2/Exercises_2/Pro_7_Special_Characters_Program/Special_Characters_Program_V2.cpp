
//* Special Characters Program (Version 2).

/*
* Write a program that takes a number as input and prints a right-angled triangle of special characters (e.g., @, #, $).


! Input:
! Please, enter a number: 4

! Output:
! #
! $$
! %%%
! &&&&
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num);

int main()
{
    // Declare Variables.
    int number = 0;
    // char myChar = '#';

    // Call Functions.
    resultFun(number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Special Characters Program (Version 2) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Print Special Characters - Function.
void printSpecialCharactersFun(int num)
{
    num = getNumberFun(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('#' + i - 1);
        }
        cout << endl;
        // mychar = mychar + 1;
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printSpecialCharactersFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
