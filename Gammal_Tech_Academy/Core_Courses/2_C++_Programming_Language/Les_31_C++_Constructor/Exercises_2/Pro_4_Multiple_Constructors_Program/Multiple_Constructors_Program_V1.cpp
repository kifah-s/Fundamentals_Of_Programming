
//* Class Multiple Constructors Program (Version 1).

/*
* Create a class MultipleConstructors with two constructors,
* one without parameters and another with two parameters.
* Display appropriate messages for each constructor.

! Output:
! Constructor without parameters called.
! Constructor with parameters called: 10, 20.
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
class MultipleConstructors
{
public:
    MultipleConstructors()
    {
        cout << "Constructor without parameters called." << endl;
    }

    MultipleConstructors(int num1, int num2)
    {
        cout << "Constructor with parameters called: " << num1 << ", " << num2 << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Multiple Constructors Program (Version 1) ..\n"
         << endl;
}

// Default And Parameterized - Function.
void multipleConstructorsFun()
{
    MultipleConstructors obj1;
    MultipleConstructors obj2(10, 20);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    multipleConstructorsFun();

    cout << "\n"
         << endl;
}
//* End Function ..
