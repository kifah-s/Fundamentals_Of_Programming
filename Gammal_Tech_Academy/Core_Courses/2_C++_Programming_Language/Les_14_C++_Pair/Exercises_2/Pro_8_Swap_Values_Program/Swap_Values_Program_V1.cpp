
//* Swap Values Program (Version 1).

/*
* Write a program and Swap the values of two pairs, taking input from the user.

! Input:
! Please, enter values for pair 1:
! value 1: 3
! value 2: 7

! Please, enter values for pair 2:
! value 1: 8
! value 2: 2

! Output:
! Befor swap:
! Pair 1: (3, 7)
! Pair 2: (8, 2)

! After swap:
! Pair 1: (8, 2)
! Pair 2: (3, 7)
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>

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
    cout << "\n\nYou welcome in Swap Values Program (Version 1) ..\n"
         << endl;
}

// Get Elements Pair 1 - Function.
pair<int, int> getElemetsPair1Fun(pair<int, int> p1)
{
    cout << "Please, enter values for pair 1: \n";
    cout << "value 1: ";
    cin >> p1.first;
    cout << "value 2: ";
    cin >> p1.second;

    return p1;
}

// Get Elements Pair 2 - Function.
pair<int, int> getElemetsPair2Fun(pair<int, int> p2)
{
    cout << "\nPlease, enter values for pair 2: \n";
    cout << "value 1: ";
    cin >> p2.first;
    cout << "value 2: ";
    cin >> p2.second;

    return p2;
}

// Swap Pairs - Function.
void swapPairsFun(pair<int, int> &p1, pair<int, int> &p2)
{
    pair<int, int> temp;

    temp = p1;
    p1 = p2;
    p2 = temp;
}

// Print Pairs - Function.
void printPairsFun(pair<int, int> p1, pair<int, int> p2)
{
    cout << "Pair 1: (" << p1.first << ", " << p1.second << ")\n";
    cout << "Pair 2: (" << p2.first << ", " << p2.second << ")";
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<int, int> pair_1, pair_2;

    // Call Functions.
    pair_1 = getElemetsPair1Fun(pair_1);
    pair_2 = getElemetsPair2Fun(pair_2);

    cout << "\nBefor Swap: \n";
    printPairsFun(pair_1, pair_2);

    swapPairsFun(pair_1, pair_2);

    cout << "\n\nAfter Swap: \n";
    printPairsFun(pair_1, pair_2);

    cout << "\n"
         << endl;
}
//* End Function ..
