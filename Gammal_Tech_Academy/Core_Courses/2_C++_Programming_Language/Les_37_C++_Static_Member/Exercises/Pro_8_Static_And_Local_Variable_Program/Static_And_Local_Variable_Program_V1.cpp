
//* Static And Local Variable Program (Version 1).

/*
* Create a program that includes a trial function with a static variable and a local variable.
* Increment each variable once ,in the main function, call the demoFunction several times and observe the behavior of both variables.

! Output:
! Static Variable Value: 0
! Local Variable Value: 0
! Static Variable Value: 1
! Local Variable Value: 0
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
    cout << "\n\nYou welcome in Static And Local Variable Program (Version 1) ..\n"
         << endl;
}

// Demo Function - Function.
void demoFunctionFun()
{
    static int staticVar = 0;
    int localVar = 0;

    cout << "Static Variable Value: " << staticVar << endl;
    cout << "Local Variable Value: " << localVar << endl;
    
    staticVar++;
    localVar++;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.

    // Call Functions.
    printWelcomeMessageFun();

    demoFunctionFun();
    demoFunctionFun();

    cout << "\n"
         << endl;
}
//* End Function ..
