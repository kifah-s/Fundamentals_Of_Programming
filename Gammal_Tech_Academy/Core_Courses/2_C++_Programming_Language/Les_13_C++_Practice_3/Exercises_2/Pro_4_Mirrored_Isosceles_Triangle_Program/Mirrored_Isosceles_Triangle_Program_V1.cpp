
//* Mirrored Isosceles Triangle Program (Version 1).

/*
* Write a program to print a mirrored isosceles triangle with 3 rows.

! Output:
! * * *
!  * *
!   *
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
    int num = 3;

    // Call Functions.
    resultFun(num);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Mirrored Isosceles Triangle Program (Version 1) ..\n"
         << endl;
}

// Print Mirrored Isosceles Triangle - Function.
void printMirroredIsoscelesTriangleFun(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < num - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printMirroredIsoscelesTriangleFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
