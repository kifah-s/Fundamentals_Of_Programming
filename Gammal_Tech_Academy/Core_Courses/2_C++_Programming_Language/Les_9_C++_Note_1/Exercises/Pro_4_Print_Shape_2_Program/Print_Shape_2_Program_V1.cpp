

//* Print Shape 2 Program (Version 1).

/*
* write a program to print this shape.


! Output:
!        *
!      *   *
!     *     *
!    *       *
!     *     *
!      *  *
!        *
!       ***
!      *****
!     ********
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun();

int main()
{
    // Declare Variables.

    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Print Shape 2 Program (Version 1) ..\n"
         << endl;
}

// Print Shape - Function.
void printShapeFun()
{
    cout << "        *\n";
    cout << "      *   *\n";
    cout << "     *     *\n";
    cout << "    *       *\n";
    cout << "     *     *\n";
    cout << "      *   *\n";
    cout << "        *\n";
    cout << "       ***\n";
    cout << "      *****\n";
    cout << "     *******\n";
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printShapeFun();

    cout << "\n"
         << endl;
}
//* End Function ..
