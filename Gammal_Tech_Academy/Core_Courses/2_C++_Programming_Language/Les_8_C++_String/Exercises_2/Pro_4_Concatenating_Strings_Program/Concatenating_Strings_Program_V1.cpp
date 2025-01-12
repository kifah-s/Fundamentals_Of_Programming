

//* Concatenating Strings Program (Version 1).

/*
* Write a program that takes two string as input and Concatenating the strings.


! Input:
! Please, enter a first string: kifah
! Please, enter a second string: saloum

! Output:
! Concatenating Strings: kifah saloum
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(string myFirStr, string mySecStr, string myConStr);

int main()
{
    // Declare Variables.
    string myFirstString, mySecondString, myConcatenateStrings;

    // Call Functions.
    resultFun(myFirstString, mySecondString, myConcatenateStrings);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Concatenating Strings Program (Version 1) ..\n"
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

// Concatenating Strings - Function.
string concatenatingStringsFun(string myFirStr, string mySecStr, string myConStr)
{
    myConStr = myFirStr + " " + mySecStr;

    return myConStr;
}

// Result - Function.
void resultFun(string myFirStr, string mySecStr, string myConStr)
{
    printWelcomeMessageFun();
    myFirStr = getFirstStringFun(myFirStr);
    mySecStr = getSecondStringFun(mySecStr);
    myConStr = concatenatingStringsFun(myFirStr, mySecStr, myConStr);

    cout << "\nConcatenating Strings: " << myConStr;

    cout << "\n\n"
         << endl;
}
//* End Function ..
