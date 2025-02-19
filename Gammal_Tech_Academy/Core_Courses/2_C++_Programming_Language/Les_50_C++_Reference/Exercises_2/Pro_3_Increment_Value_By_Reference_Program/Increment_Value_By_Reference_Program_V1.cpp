
//* Increment Value By Reference Program (Version 1).

/*
* Write a program that includes a function to increment an integer value by reference.
* The program should declare a variable, display its value before incrementing,
* call the increment function, and then display the updated value.

! Output:
! Befor increment: 7
! After increment: 8
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
    cout << "\n\nYou welcome in Increment Value By Reference Program (Version 1) ..\n"
         << endl;
}

// Increment Value By Reference - Function.
void incrementValueByReferenceFun(int &n)
{
    n = n + 1;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 7;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Befor increment: ";
    cout << num << endl;

    incrementValueByReferenceFun(num);

    cout << "After increment: ";
    cout << num << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
