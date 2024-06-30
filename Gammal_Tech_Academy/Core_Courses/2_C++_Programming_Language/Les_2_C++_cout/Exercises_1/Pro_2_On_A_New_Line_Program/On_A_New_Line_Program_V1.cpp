

/* >>> On A New Line Program ( Version 1 ) <<< */

/* >>> The given program outputs "C++".Change the code to output each character on a new line. <<< */

#include <iostream>
#include <string>

using namespace std;

// Function.
void welcomeMassageFun();
void givenProgramFun();
void currentProgramFun();

// End Function.

int main()
{
    welcomeMassageFun();

    givenProgramFun();
    currentProgramFun();

    return 0;
}

// Function.
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in On A New Line Program ( Version 1 ) .." << endl
         << endl;
}

// Given program / Function.
void givenProgramFun()
{
    cout << "Given program:" << endl;
    cout << "C++" << endl
         << endl
         << endl;
}

// Current programme / Function.
void currentProgramFun()
{
    cout << "Current program:" << endl;
    cout << "C" << endl
         << "+" << endl
         << "+" << endl
         << endl
         << endl;
}

// End Function.
