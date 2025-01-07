

//* Print Shape Program (Version 1).

/*
* write a program to print this shape.

! Output:
! * * *
! * * *
*/

#include <iostream>

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
    cout << "\n\nYou welcome in Print Shape Program (Version 1) ..\n"
         << endl;
}

// Print Shape - Function.
void printShapeFun()
{
    // cout << "* * *\n* * *\n\n"
    cout << "* * *\n";
    cout << "* * *\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printShapeFun();
}
//* End Function ..
