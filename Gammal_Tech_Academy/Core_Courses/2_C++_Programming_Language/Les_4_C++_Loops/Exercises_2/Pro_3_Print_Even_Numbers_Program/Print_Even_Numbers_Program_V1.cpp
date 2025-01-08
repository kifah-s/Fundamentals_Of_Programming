

//* Print Even Numbers Program (Version 1).

/*
* Write a program to print even numbers between 1 and 10 using a for.

! Output:
! 2 4 6 8 10
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
    cout << "\n\nYou welcome in Print Even Numbers Program (Version 1) ..\n"
         << endl;
}

// Print Even Numbers - Function.
void printEvenNumbersFun()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printEvenNumbersFun();

    cout << "\n\n"
         << endl;
}
//* End Function ..
