
//* Elements Of Vector Program (Version 1).

/*
* Write a program that employs the for_each loop to print the elements of a vector of characters.
* The vector contains the characters {'a', 'b', 'c', 'd'}.

! Output:
! a b c d
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
    cout << "\n\nYou welcome in Elements Of Vector Program (Version 1) ..\n"
         << endl;
}

// Print - Fuction.
void printFuc(char x)
{
    cout << x << " ";
}

// Using For Each - Function.
void usingForEachFun(vector<char> myVec)
{
    for_each(myVec.begin(), myVec.end(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<char> myVector = {'a', 'b', 'c', 'd'};

    // Call Functions.
    printWelcomeMessageFun();
    usingForEachFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
