
//* Double Pointers Program (Version 1).

/*
* Write a program that demonstrates the use of pointers and double pointers.
* Declare an integer variable, a pointer to that variable, and a double pointer to the pointer.
* Display the original variable's value, the value through the first pointer, and the value through the double pointer.

! Output:
! Value of num: 15
! Value through ptr1: 15
! Value through ptr2: 15
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
    cout << "\n\nYou welcome in Double Pointers Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 15, *ptr1 = &num, **ptr2 = &ptr1;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Value of num: " << num << endl;
    cout << "Value through ptr1: " << *ptr1 << endl;
    cout << "Value through ptr2: " << **ptr2 << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
