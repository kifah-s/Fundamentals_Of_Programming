
//* DemoFunction With Conditions Program (Version 1).

/*
* Create a program that includes a function demoFunction with a static variable.
* In the main function, call demoFunction with both true and false conditions and observe the behavior of the static variable.

! Output:
! Static Variable Value: 10
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
    cout << "\n\nYou welcome in DemoFunction With Conditions Program (Version 1) ..\n"
         << endl;
}

// Demo Function - Function.
void demoFunctionFun(bool condition)
{
    if (condition)
    {
        static int number = 10;
        cout << "Static Variable Value: " << number << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.

    // Call Functions.
    printWelcomeMessageFun();

    demoFunctionFun(true);
    demoFunctionFun(false);

    cout << "\n"
         << endl;
}
//* End Function ..
