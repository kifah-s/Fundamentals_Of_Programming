
//* Class Multiple User Input Program (Version 1).

/*
* Create a class MultipleUserInput with a constructor that takes two inputs from the user and displays their sum.

! Input:
! Please, enter a first number: 5
! Please, enter a second number: 6

! Output:
! Sum of numbers: 11
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
class MultipleUserInput
{
public:
    MultipleUserInput()
    {
        int firstNum = 0, secondNum = 0, sumNumbers = 0;

        cout << "Please, enter a first number: ";
        cin >> firstNum;
        
        cout << "Please, enter a second number: ";
        cin >> secondNum;

        sumNumbers = firstNum + secondNum;

        cout << "Sum of numbers: " << sumNumbers << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Multiple User Input Program (Version 1) ..\n"
         << endl;
}

// Multiple User Input - Function.
void multipleUserInputFun()
{
    MultipleUserInput obj1;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    multipleUserInputFun();

    cout << "\n"
         << endl;
}
//* End Function ..
