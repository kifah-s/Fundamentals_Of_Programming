
//* Generic Function To Compare Program (Version 1).

/*
* Write a program with a generic function to compare two values and determine if they are equal.
* Allow the user to input two characters and check if they are equal.
* Provide the program code and the output.

! Input:
! Please enter two characters:
! first character: A
! second character: B

! Output:
! Characters are equal.
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
    cout << "\n\nYou welcome in Generic Function To Compare Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Compare Two Values - Function.
bool compareTwoValuesFun(T firVal, T secVal)
{
    if (firVal == secVal)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    char firstChar, secondChar;

    cout << "Please, enter tow characters: " << endl;
    cout << "first character: ";
    cin >> firstChar;

    cout << "second character: ";
    cin >> secondChar;

    if (compareTwoValuesFun(firstChar, secondChar))
    {
        cout << "Characters are equal.";
    }
    else
    {
        cout << "Characters are not equal.";
    }

    cout << "\n"
         << endl;
}
//* End Function ..
