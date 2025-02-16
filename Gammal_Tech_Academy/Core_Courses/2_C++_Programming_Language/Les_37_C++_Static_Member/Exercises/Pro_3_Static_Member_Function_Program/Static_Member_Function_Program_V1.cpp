
//* Static Member Function Program (Version 1).

/*
* Create a program that includes a class MyClass with a static member function named staticFunction.
* In the main function, call the static member function without creating an object of the class.

! Output:
! Static Member Function.
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

//* Class ..
class MyClass
{
private:
public:
    static void staticFunction()
    {
        cout << "Static Member Function.";
    }
};
//* End Class ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Static Member Function Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    MyClass::staticFunction();

    cout << "\n"
         << endl;
}
//* End Function ..
