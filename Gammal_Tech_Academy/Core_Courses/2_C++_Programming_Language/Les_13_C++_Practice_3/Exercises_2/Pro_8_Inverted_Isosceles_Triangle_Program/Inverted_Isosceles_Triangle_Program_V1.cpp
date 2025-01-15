
//* Inverted Isosceles Triangle Program (Version 1).

/*
* Write a program to print an inverted isosceles triangle of letters with 5 rows.

! Output:
! E E E E E
!  D D D D
!   C C C
!    B B
!     A
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num);

int main()
{
    // Declare Variables.
    int num = 5;

    // Call Functions.
    resultFun(num);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Inverted Isosceles Triangle Program (Version 1) ..\n"
         << endl;
}

// Print Inverted Isosceles Triangle - Function.
void printInvertedIsoscelesTriangleFun(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printInvertedIsoscelesTriangleFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
