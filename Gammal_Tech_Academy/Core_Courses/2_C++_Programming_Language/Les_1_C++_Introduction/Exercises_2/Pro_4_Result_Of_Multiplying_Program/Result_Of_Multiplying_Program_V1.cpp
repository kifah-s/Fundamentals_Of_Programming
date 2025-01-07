

//* Result Of Multiplying Program (Version 1).

/*
* Print the result of multiplying 4 by 6

! Output:
! 24
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
    cout << "\n\nYou welcome in Result Of Multiplying Program (Version 1) ..\n"
         << endl;
}

// Result Of Multiplying - Function.
void resultOfMultiplyingFun()
{
    cout << "result of multiplying 4 * 6 is: " << 6 * 4 << "\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    resultOfMultiplyingFun();
}
//* End Function ..
