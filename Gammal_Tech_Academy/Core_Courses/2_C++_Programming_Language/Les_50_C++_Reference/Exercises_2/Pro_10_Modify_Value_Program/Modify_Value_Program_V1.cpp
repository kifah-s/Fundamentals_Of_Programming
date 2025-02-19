
//* Modify Value Program (Version 1).

/*
* Write a program that demonstrates the use of pointers to modify the value of a variable indirectly.
* Declare an integer variable, a pointer to that variable, display the original variable's value,
* modify the value through the pointer, and then display the updated value.

! Output:
! Befor Modification: 50
! After Modification: 75
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
    cout << "\n\nYou welcome in Modify Value Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 50;
    int *ptr = &num;
    
    // Call Functions.
    printWelcomeMessageFun();
    
    cout << "Befor Modification: " << num << endl;
    
    *ptr = 75;
    
    cout << "After Modification: " << *ptr << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
