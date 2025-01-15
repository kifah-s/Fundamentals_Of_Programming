
//* Compare Pairs Program (Version 2).

/*
* Compare two pairs and check if they are equal, taking input from the user.

! Input:
! Please, enter values to pair 1:
! values 1: 2
! values 2: 2

! Please, enter values to pair 2:
! values 1: 2
! values 2: 2


! Output:
! Pairs Is Equal.
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
    cout << "\n\nYou welcome in Compare Pairs Program (Version 2) ..\n"
         << endl;
}

// Get Elements Pair 1 - Function.
pair<int, int> getElemetsPair1Fun(pair<int, int> x)
{
    cout << "Please, enter values to pair 1:\n";
    cout << "Value 1: ";
    cin >> x.first;

    cout << "Value 2: ";
    cin >> x.second;

    return x;
}

// Get Elements Pair 2 - Function.
pair<int, int> getElemetsPair2Fun(pair<int, int> y)
{
    cout << "\nPlease, enter values to pair 2:\n";
    cout << "Value 1: ";
    cin >> y.first;

    cout << "Value 2: ";
    cin >> y.second;

    return y;
}

// Compare Pairs - Function.
void comparePairsFun(pair<int, int> x, pair<int, int> y)
{
    if (x == y)
    {
        cout << "\nPairs Is Equal.";
    }
    else
    {
        cout << "\nPairs Is Not Equal.";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<int, int> myPair_1, myPair_2;

    // Call Functions.
    myPair_1 = getElemetsPair1Fun(myPair_1);
    myPair_2 = getElemetsPair2Fun(myPair_2);
    comparePairsFun(myPair_1, myPair_2);

    cout << "\n"
         << endl;
}
//* End Function ..
