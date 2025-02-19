
//* Value and Memory Address Program (Version 1).

/*
* Write a program that declares an integer variable, initializes it with a value,
* and then prints the value and memory address using pointers.

! Output:
! Value: 42
! Memory Address: 0x7ffcb99c8abc
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
    cout << "\n\nYou welcome in Value and Memory Address Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 42;
    int *ptr = &num;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Value: " << *ptr << endl;
    cout << "Memory Address: " << &ptr << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
