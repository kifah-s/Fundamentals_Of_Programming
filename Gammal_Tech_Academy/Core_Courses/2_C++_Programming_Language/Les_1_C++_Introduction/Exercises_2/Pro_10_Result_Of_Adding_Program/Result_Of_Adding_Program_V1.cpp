

//* Result Of Adding Program (Version 1).

/*
* Display the result of adding 8 and 4

! Output:
! 12
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
    cout << "\n\nYou welcome in Result Of Adding Program (Version 1) ..\n"
         << endl;
}

// Result Of Adding - Function.
void resultOfAddingFun()
{
    cout << "result of Adding 8 and 4: " << 8 + 4 << "\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    resultOfAddingFun();
}
//* End Function ..
