

//* Set Of Strings Program (Version 1).

/*
* Develop a program that utilizes a set to store and automatically sort a sequence of strings,
* Insert the strings "apple", "orange", "banana", "grape", and "apple" into the set.


! Output:
! Sorted Set elements: apple banana grape orange
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(set<string> mySet);

int main()
{
    // Declare Variables.
    set<string> mySet = {"apple", "orange", "banana", "grape", "apple"};

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Set Of Strings Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Function.
void printElementsFun(set<string> mySet)
{
    cout << "Sorted Set of string: ";

    for (const string &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<string> mySet)
{
    printWelcomeMessageFun();
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
