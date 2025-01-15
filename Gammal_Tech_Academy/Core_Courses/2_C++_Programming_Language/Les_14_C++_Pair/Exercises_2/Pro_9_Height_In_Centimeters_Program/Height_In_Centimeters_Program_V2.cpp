
//* Height In Centimeters Program (Version 2).

/*
* Create a pair to store a person's name and height in centimeters, taking input from the user.

! Input:
! Please, enter person name: kifah
! Please, enter hight(in centimeters): 182.5

! Output:
! Name: kifah
! Hight: 182.5 cm
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
    cout << "\n\nYou welcome in Height In Centimeters Program (Version 2) ..\n"
         << endl;
}

// Get Elements - Function.
void getElemetsFun(pair<string, float> &myPa)
{
    cout << "Please, enter person name: ";
    cin >> myPa.first;

    cout << "Please, enter hight(in centimeters): ";
    cin >> myPa.second;
}

// Print Pair Elements - Function.
void printPairElementsFun(pair<string, float> myPa)
{
    cout << "\nName: " << myPa.first << endl;
    cout << "Hight: " << myPa.second << " cm";
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<string, float> myPair;

    // Call Functions.
    getElemetsFun(myPair);
    printPairElementsFun(myPair);

    cout << "\n"
         << endl;
}
//* End Function ..
