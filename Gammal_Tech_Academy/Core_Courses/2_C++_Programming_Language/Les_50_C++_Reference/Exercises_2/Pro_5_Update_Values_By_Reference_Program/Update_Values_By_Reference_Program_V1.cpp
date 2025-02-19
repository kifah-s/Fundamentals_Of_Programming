
//* Update Values By Reference Program (Version 1).

/*
* Write a program that includes a function to update three integer values by reference.
* The program should declare three variables, display their values before updating,
* call the update function, and then display the updated values.

! Output:
! Befor update: num1 = 10, num2 = 8, num3 = 6
! After update: num1 = 15, num2 = 5, num3 = 12
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Update Values By Reference Program (Version 1) ..\n"
         << endl;
}

// Update Value By Reference - Function.
void updateValueByReferenceFun(int &n1, int &n2, int &n3)
{
    n1 = n1 + 5;
    n2 = n2 - 3;
    n3 = n3 * 2;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num1 = 10, num2 = 8, num3 = 6;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Befor update: ";
    cout << "num 1: " << num1 << ", num 2: " << num2 << ", num 3: " << num3 << endl;

    updateValueByReferenceFun(num1, num2, num3);

    cout << "After update: ";
    cout << "num 1: " << num1 << ", num 2: " << num2 << ", num 3: " << num3 << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
