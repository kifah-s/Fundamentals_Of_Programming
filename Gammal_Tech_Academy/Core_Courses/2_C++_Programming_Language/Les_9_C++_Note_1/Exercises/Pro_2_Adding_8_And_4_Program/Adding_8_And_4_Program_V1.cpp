

//* Adding 8 And 4 Program (Version 1).

/*
* Print the result of adding 8 and 4.


! Output:
! Result of adding 8 and 4: 12
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
    cout << "\n\nYou welcome in Adding 8 And 4 Program (Version 1) ..\n"
         << endl;
}

// Adding 8 And 4 - Function.
void adding8And4Fun()
{
    cout << "Result of adding 8 and 4: " << 8 + 4;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    adding8And4Fun();

    cout << "\n\n"
         << endl;
}
//* End Function ..
