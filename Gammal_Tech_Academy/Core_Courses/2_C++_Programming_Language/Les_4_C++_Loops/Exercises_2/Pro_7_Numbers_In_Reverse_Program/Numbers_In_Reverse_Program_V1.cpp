

//* Numbers In Reverse Program (Version 1).

/*
* Create a program to print the first 10 natural numbers in reverse order using a for.

! Output:
! 10 9 8 7 6 5 4 3 2 1
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
    cout << "\n\nYou welcome in Numbers In Reverse Program (Version 1) ..\n"
         << endl;
}

// Numbers In Reverse - Function.
void numbersInReverseFun()
{
    for (int i = 10; i >= 1; i--)
    {
        cout << i << " ";
    }
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    numbersInReverseFun();

    cout << "\n\n"
         << endl;
}
//* End Function ..
