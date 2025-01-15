
//* Array Of Pairs Program (Version 1).

/*
* Write a program and define a pair and print its elements.

! Input:
! How many names do you want to enter: 3
! Please, enter name 1: kifah
! Please, enter number 1: 1

! Please, enter name 2: kifah
! Please, enter number 2: 2

! Please, enter name 3: kifah
! Please, enter number 3: 3

! Output:
! kifah 1
! kifah 2
! kifah 3
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
    cout << "\n\nYou welcome in Array Of Pairs Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Pair - Function.
int getNumberOfPairFun(int numOfPa)
{
    cout << "How many names do you want to enter: ";
    cin >> numOfPa;

    return numOfPa;
}

// Get Elemets - Function.
void getElemetsFun(int numOfPa, pair<string, int> myPair[])
{
    for (int i = 0; i < numOfPa; i++)
    {
        cout << "Please, enter name " << i + 1 << ": ";
        cin >> myPair[i].first;

        cout << "Please, enter number " << i + 1 << ": ";
        cin >> myPair[i].second;
    }
}

// Print Pair Elements - Function.
void printPairElementsFun(int numOfPa, pair<string, int> myPair[])
{
    cout << "Name And Numbers ..\n";
    for (int i = 0; i < numOfPa; i++)
    {
        cout << "Name: " << myPair[i].first;
        cout << ", Number: " << myPair[i].second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    int numOfPair = 0;

    // Call Functions.
    numOfPair = getNumberOfPairFun(numOfPair);

    // Declare Pair.
    pair<string, int> myPair[numOfPair];

    // Call Functions.
    getElemetsFun(numOfPair, myPair);
    printPairElementsFun(numOfPair, myPair);

    cout << "\n"
         << endl;
}
//* End Function ..
