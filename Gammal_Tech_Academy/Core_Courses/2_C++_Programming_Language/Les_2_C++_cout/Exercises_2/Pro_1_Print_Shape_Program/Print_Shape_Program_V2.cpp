

//* Print Shape Program (Version 2).

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
    cout << "\n\nYou welcome in Print Shape Program (Version 2) ..\n"
         << endl;
}

// Print Shape - Function.
void printShapeFun()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printShapeFun();
}
//* End Function ..
