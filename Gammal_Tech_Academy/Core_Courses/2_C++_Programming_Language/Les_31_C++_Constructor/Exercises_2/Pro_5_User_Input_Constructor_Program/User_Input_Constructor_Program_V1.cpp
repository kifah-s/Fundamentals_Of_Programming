
//* Class User Input Constructor Program (Version 1).

/*
* Create a class UserInputConstructor with a parameterized constructor that takes input from the user and displays the entered value.

! Input:
! Please, enter a value: 50

! Output:
! parameterized constructor called with value: 50
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

//* Classes ..
class UserInputConstructor
{
public:
    UserInputConstructor()
    {
        int number = 0;

        cout << "Please, enter a value: ";
        cin >> number;

        cout << "parameterized constructor called with value: " << number << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class User Input Constructor Program (Version 1) ..\n"
         << endl;
}

// User Input Constructor - Function.
void userInputConstructorFun()
{
    UserInputConstructor obj1;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    userInputConstructorFun();

    cout << "\n"
         << endl;
}
//* End Function ..
