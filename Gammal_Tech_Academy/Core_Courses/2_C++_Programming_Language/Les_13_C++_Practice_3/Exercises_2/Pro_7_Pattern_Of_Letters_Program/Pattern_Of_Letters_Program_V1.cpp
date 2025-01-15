
//* Pattern Of Letters Program (Version 1).

/*
* Write a program to print a pattern of letters forming an isosceles triangle with 4 rows.

! Output:
!      A
!     A B
!    A B C
!   A B C D
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
    int num = 4;

    // Call Functions.
    resultFun(num);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Pattern Of Letters Program (Version 1) ..\n"
         << endl;
}

// Print Hollow Isosceles Triangle - Function.
void printHollowIsoscelesTriangleFun(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << char('A' + k - 1) << " ";
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
