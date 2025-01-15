
//* Right Angled Triangle Program (Version 2).

/*
* Write a program that takes a number as input and prints a right-angled triangle of alphabets.


! Input:
! Please, enter a number: 4

! Output:
! A
! BB
! CCC
! DDDD
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
    int number = 0;

    // Call Functions.
    resultFun(number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Right Angled Triangle Program (Version 2) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Print Right Angled Triangle - Function.
void printRightAngledTriangleFun(int num)
{
    num = getNumberFun(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1);
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printRightAngledTriangleFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
