

//* Display Message Program (Version 1).

/*
* Display the message "C++ is fun!"

! Output:
! C++ is fun!
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
    cout << "\n\nYou welcome in Display Message Program (Version 1) ..\n"
         << endl;
}

// Display Message - Function.
void displayMessageFun()
{
    cout << "C++ is fun!\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    displayMessageFun();
}
//* End Function ..
