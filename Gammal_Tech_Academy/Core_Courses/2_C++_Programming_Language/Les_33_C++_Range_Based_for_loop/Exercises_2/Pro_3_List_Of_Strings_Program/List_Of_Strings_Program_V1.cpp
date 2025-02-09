
//* List Of Strings Program (Version 1).

/*
* Create a program that uses a range-based for loop to iterate through a list of strings without the need for a vector.

! Output:
! www
! gammal
! tech
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
    cout << "\n\nYou welcome in List Of Strings Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc()
{
    for (string i : {"www", "gammal", "tech"})
    {
        cout << i << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc();

    cout << "\n"
         << endl;
}
//* End Function ..
