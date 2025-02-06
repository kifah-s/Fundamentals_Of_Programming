
//* Find and Print Program (Version 1).

/*
* Write a program using generic programming to find and print the maximum of two values.
* The program should be able to handle integers, floats, characters, and strings.
* Provide the program code, the question, and the output.

! Output:
! 6
! 6.5
! T
! Tech
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
    cout << "\n\nYou welcome in Find and Print Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Maximum - Function.
void maximumFun(T val_1, T val_2)
{
    T max;

    max = (val_1 > val_2) ? val_1 : val_2;

    cout << max << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();
    maximumFun(6, 2);
    maximumFun(6.5, 2.5);
    maximumFun('T', 'A');
    maximumFun("Tech", "Gammal");

    cout
        << "\n"
        << endl;
}
//* End Function ..
