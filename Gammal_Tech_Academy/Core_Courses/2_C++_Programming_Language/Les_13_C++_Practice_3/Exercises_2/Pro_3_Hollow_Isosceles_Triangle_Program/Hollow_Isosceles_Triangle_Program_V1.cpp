
//* Hollow Isosceles Triangle Program (Version 1).

/*
* Write a program to print a hollow isosceles triangle with 6 rows.

! Output:
!      *
!     * *
!    *   *
!   *     *
!  *       *
! ***********
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
    int num = 6;

    // Call Functions.
    resultFun(num);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Hollow Isosceles Triangle Program (Version 1) ..\n"
         << endl;
}

// Print Hollow Isosceles Triangle - Function.
void printHollowIsoscelesTriangleFun(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1 || i == num)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printHollowIsoscelesTriangleFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
