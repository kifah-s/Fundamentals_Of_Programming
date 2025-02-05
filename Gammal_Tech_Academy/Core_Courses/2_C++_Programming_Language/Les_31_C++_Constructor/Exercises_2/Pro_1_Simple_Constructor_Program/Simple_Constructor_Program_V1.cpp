
//* Class Simple Constructor Program (Version 1).

/*
* Create a class SimpleConstructor with a default constructor that prints "Default Constructor Called" when an object is created.

! Output:
! Default Constructor Called
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
class SimpleConstructor
{
public:
    SimpleConstructor()
    {
        cout << "Default Constructor Called." << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Simple Constructor Program (Version 1) ..\n"
         << endl;
}

// Simple Constructor - Function.
void simpleConstructorFun()
{
    SimpleConstructor obj;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    simpleConstructorFun();

    cout << "\n"
         << endl;
}
//* End Function ..
