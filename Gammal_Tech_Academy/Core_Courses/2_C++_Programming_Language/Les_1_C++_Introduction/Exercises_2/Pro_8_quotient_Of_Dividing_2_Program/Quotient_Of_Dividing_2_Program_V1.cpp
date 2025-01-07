

//* Quotient Of Dividing 2 Program (Version 1).

/*
* Print the quotient of dividing 15 by 5

! Output:
! 3
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
    cout << "\n\nYou welcome in quotient Of Dividing 2 Program (Version 1) ..\n"
         << endl;
}

// Quotient Of Dividing - Function.
void quotientOfDividingFun()
{
    cout << "result of quotient dividing 15 by 5: " << 15 / 5 << "\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    quotientOfDividingFun();
}
//* End Function ..
