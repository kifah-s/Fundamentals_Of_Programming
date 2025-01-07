

//* Result Of Subtracting Program (Version 1).

/*
* Display the result of subtracting 7 from 12

! Output:
! 5
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
    cout << "\n\nYou welcome in Result Of Subtracting Program (Version 1) ..\n"
         << endl;
}

// Result Of Subtracting - Function.
void resultOfSubtractingFun()
{
    cout << "result of subtracting 7 from 12: " << 12 - 7 << "\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    resultOfSubtractingFun();
}
//* End Function ..
