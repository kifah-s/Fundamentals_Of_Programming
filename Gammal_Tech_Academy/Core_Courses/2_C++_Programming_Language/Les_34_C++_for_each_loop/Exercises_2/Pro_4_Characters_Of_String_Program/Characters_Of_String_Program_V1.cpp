
//* Characters Of String Program (Version 1).

/*
* Write a program that employs the for_each loop to print the characters of a string.
* The string is "Hello".

! Output:
! H e l l o
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
    cout << "\n\nYou welcome in Characters Of String Program (Version 1) ..\n"
         << endl;
}

// Print - Fuction.
void printFuc(char x)
{
    cout << x << " ";
}

// Using For Each - Function.
void usingForEachFun(string myStr)
{
    for_each(myStr.begin(), myStr.end(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    string myString = "Hello";

    // Call Functions.
    printWelcomeMessageFun();
    usingForEachFun(myString);

    cout << "\n"
         << endl;
}
//* End Function ..
