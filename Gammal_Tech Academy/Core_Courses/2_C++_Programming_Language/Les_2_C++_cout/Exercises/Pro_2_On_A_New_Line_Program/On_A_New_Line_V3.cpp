

/* >>> On A New Line Program ( Version 3 ) <<< */

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
         << "You welcome in On A New Line Program ( Version 3 ) .." << endl
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
    string c = "C++";

    cout << "Current program:" << endl;
    for (int i = 0; c[i]; i++)
    {
        cout << c[i] << "\n";
    }
    cout << endl
         << endl;
}

// End Function.
