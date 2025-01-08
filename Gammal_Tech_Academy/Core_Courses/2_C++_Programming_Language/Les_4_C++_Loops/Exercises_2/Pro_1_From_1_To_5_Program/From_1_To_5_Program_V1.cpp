

//* From 1 To 5 Program (Version 1).

/*
* Write a program that takes two integers as input and prints their difference.

! Output:
! 1 2 3 4 5
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
    cout << "\n\nYou welcome in From 1 To 5 Program (Version 1) ..\n"
         << endl;
}

// From 1 To 5 - Function.
void from1To5Fun()
{
    for (int i = 1; i < 6; i++)
    {
        cout << i << " ";
    }
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    from1To5Fun();

    cout << "\n\n"
         << endl;
}
//* End Function ..
