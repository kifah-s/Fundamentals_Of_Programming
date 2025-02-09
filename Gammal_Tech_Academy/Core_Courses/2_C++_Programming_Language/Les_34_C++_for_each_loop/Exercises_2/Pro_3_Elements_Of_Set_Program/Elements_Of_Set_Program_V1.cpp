
//* Elements Of Set Program (Version 1).

/*
* Create a program that utilizes the for_each loop to print the elements of a set of integers.
* The set contains the numbers {5, 12, 8, 3}.

! Output:
! 5 12 8 3
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
    cout << "\n\nYou welcome in Elements Of Set Program (Version 1) ..\n"
         << endl;
}

// Print - Fuction.
void printFuc(int x)
{
    cout << x << " ";
}

// Using For Each - Function.
void usingForEachFun(set<int> mySet)
{
    for_each(mySet.begin(), mySet.end(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    set<int> mySet = {5, 12, 8, 3};

    // Call Functions.
    printWelcomeMessageFun();
    usingForEachFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
