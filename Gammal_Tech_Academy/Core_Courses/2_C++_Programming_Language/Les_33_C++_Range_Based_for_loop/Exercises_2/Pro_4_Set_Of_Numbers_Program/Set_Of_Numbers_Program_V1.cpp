
//* Set Of Numbers Program (Version 1).

/*
* Write a program that utilizes a range-based for loop to iterate through a set of numbers and print their values without using vector.

! Output:
! 5 3 6 9 8 7 4
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
    cout << "\n\nYou welcome in Set Of Numbers Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc()
{
    for (int i : {5, 3, 6, 9, 8, 7, 4})
    {
        cout << i << " ";
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
