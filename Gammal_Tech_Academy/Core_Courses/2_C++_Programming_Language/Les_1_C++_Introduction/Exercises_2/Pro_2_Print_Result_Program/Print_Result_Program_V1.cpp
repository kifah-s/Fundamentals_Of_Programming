

//* Print Result Program (Version 1).

/*
* Print the result of adding 5 and 3 using std::cout.

! Output:
! 8
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
    cout << "\n\nYou welcome in Print Result Program (Version 1) ..\n"
         << endl;
}

// Print Result - Function.
void printResultFun()
{
    cout << "Result 5 + 3 is: " << 5 + 3 << "\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printResultFun();
}
//* End Function ..
