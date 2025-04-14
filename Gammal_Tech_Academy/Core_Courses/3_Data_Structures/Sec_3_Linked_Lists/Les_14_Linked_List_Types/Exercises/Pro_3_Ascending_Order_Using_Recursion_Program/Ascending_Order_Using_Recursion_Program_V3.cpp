
//* Ascending Order Using Recursion Program (Version 3).

/*
* Write a program that takes an integer input 'num' from the user,
* and prints the numbers from -2 to 'num' in ascending order.
* using recursion

! Input:
! Please, enter a number: 3

! Output:
! Numbers form -2 to 3: -2 -1 0 1 2 3
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
#include <fstream>

using namespace std;

//* Functions ..

// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Ascending Order Using Recursion Program (Version 3) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Ascending Order - Recursion Function.
void ascendingOrderRecFun(int num, int negTwo)
{
    if (negTwo <= num)
    {
        cout << negTwo << " ";
        return ascendingOrderRecFun(num, negTwo + 1);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0, negativeTwo = -2;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();
    cout << "Numbers from -2 to " << number << ": ";
    ascendingOrderRecFun(number, negativeTwo);

    cout << endl
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
