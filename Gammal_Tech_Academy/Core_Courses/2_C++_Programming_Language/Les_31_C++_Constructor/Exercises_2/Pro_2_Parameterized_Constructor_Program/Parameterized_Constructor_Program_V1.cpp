
//* Class Parameterized Constructor Program (Version 1).

/*
* Create a class ParameterizedConstructor with a parameterized constructor that takes an integer as input and prints its value.

! Output:
! Parameterized Constructor called with value: 42
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
class ParameterizedConstructor
{
public:
    ParameterizedConstructor(int num)
    {
        cout << "Parameterized Constructor called with value: " << num << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Parameterized Constructor Program (Version 1) ..\n"
         << endl;
}

// Parameterized Constructor - Function.
void parameterizedConstructorFun()
{
    ParameterizedConstructor obj(42);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    parameterizedConstructorFun();

    cout << "\n"
         << endl;
}
//* End Function ..
