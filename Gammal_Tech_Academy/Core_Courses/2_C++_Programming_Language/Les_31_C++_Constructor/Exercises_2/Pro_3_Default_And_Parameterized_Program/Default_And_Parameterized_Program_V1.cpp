
//* Class Default And Parameterized Program (Version 1).

/*
* Create a class DefaultAndParameterized with both default and parameterized constructors. Display appropriate messages for each constructor.

! Output:
! Default Constructor called.
! Parameterized Constructor called with value: 24.
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
class DefaultAndParameterized
{
public:
    DefaultAndParameterized()
    {
        cout << "Default Constructor called." << endl;
    }
    
    DefaultAndParameterized(int value)
    {
        cout << "Parameterized Constructor called with value: " << value << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Default And Parameterized Program (Version 1) ..\n"
         << endl;
}

// Default And Parameterized - Function.
void defaultAndParameterizedFun()
{
    DefaultAndParameterized obj1;
    DefaultAndParameterized obj2(24);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    defaultAndParameterizedFun();

    cout << "\n"
         << endl;
}
//* End Function ..
