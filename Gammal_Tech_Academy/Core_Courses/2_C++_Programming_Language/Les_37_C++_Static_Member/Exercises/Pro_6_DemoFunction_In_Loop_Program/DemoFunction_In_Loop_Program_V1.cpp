
//* DemoFunction In Loop Program (Version 1).

/*
* create a program that includes a function demoFunction with a static variable.
* and increment of +1 each time , In the main function, call demoFunction in a loop and observe the behavior of the static variable.

! Output:
! Static Variable Value: 0
! Static Variable Value: 1
! Static Variable Value: 2
! Static Variable Value: 3
! Static Variable Value: 4
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
    cout << "\n\nYou welcome in DemoFunction In Loop Program (Version 1) ..\n"
         << endl;
}

// Demo Function - Function.
void demoFunctionFun()
{
    static int number = 0;
    cout << "Static Variable Value: " << number << endl;
    number++;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.

    // Call Functions.
    printWelcomeMessageFun();

    for (int i = 0; i < 5; i++)
    {
        demoFunctionFun();
    }

    cout << "\n"
         << endl;
}
//* End Function ..
