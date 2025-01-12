

//* Comparing String Program (Version 1).

/*
* Write a program that takes a string as input and Comparing Strings.


! Input:
! Please, enter a first string: kifah
! Please, enter a second string: kifah

! Output:
! Equal.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(string myFirStr, string mySecStr);

int main()
{
    // Declare Variables.
    string myFirstString, mySecondString;

    // Call Functions.
    resultFun(myFirstString, mySecondString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Comparing String Program (Version 1) ..\n"
         << endl;
}

// Get First String - Function.
string getFirstStringFun(string myFirStr)
{
    cout << "Please, enter a first string: ";
    cin >> myFirStr;

    return myFirStr;
}

// Get Second String - Function.
string getSecondStringFun(string mySecStr)
{
    cout << "Please, enter a second string: ";
    cin >> mySecStr;

    return mySecStr;
}

// Comparing Strings - Function.
void comparingStringsFun(string myFirStr, string mySecStr)
{
    if (myFirStr == mySecStr)
    {
        cout << "\nEqual.";
    }
    else
    {
        cout << "\nNot Equal.";
    }
}

// Result - Function.
void resultFun(string myFirStr, string mySecStr)
{
    printWelcomeMessageFun();
    myFirStr = getFirstStringFun(myFirStr);
    mySecStr = getSecondStringFun(mySecStr);
    comparingStringsFun(myFirStr, mySecStr);

    cout << "\n\n"
         << endl;
}
//* End Function ..
