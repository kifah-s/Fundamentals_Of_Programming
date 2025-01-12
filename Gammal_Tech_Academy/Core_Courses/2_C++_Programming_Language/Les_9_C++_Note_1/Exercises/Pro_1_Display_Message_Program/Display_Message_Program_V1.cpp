

//* Display Message Program (Version 1).

/*
* Display the message "Programming is exciting!".


! Output:
! Programming is exciting!
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
    cout << "\n\nYou welcome in Display Message Program (Version 1) ..\n"
         << endl;
}

// Display Message - Function.
void displayMessageFun()
{
    cout << "Programming is exciting!";
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    displayMessageFun();

    cout << "\n\n"
         << endl;
}
//* End Function ..
