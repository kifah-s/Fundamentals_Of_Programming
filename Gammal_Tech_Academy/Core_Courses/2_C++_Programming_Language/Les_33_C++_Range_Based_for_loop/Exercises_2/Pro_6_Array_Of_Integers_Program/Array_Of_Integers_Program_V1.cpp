
//* Array Of Integers Program (Version 1).

/*
* Write a program that uses a range-based for loop to iterate through an array of integers and print their values.

! Output:
! 3 4 5 8 20 2 1 6
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
    cout << "\n\nYou welcome in Array Of Integers Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc()
{
    int myArray[] = {3, 4, 5, 8, 20, 2, 1, 6};

    for (int i : myArray)
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
