

//* Print Message Program (Version 1).

/*
* Print the message "I am learning C++", using std::cout.

! Output:
! I am learning C++
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
    cout << "\n\nYou welcome in Print Message Program (Version 1) ..\n"
         << endl;
}

// Print Message - Function.
void printMessageFun()
{
    cout << "I am learning C++\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printMessageFun();
}
//* End Function ..
