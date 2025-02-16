
//* Static Variable In Function Program (Version 1).

/*
* Write a program that uses a static variable in a function.
* The program must call the function several times,
* at least once incrementing the variable by one and displaying the value of the constant variable.

! Output:
! Calling the function multiple times:
! Static variable value: 1
! Static variable value: 2
! Static variable value: 3
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
    cout << "\n\nYou welcome in Static Variable In Function Program (Version 1) ..\n"
         << endl;
}

// Static Variable - Function.
void staticVariableFun()
{
    static int myVar = 0;
    myVar++;
    cout << "Static variable value: " << myVar << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.

    // Call Functions.
    printWelcomeMessageFun();
    staticVariableFun();
    staticVariableFun();
    staticVariableFun();

    cout << "\n"
         << endl;
}
//* End Function ..
