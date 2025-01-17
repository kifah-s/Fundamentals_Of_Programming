
//* Map To Store Countries Program (Version 1).

/*
* Create a program that allows the user to input and store country names along with their respective capitals using a map,
* Print the countries and capitals in alphabetical order of countries.

! Input:
! please, enter number of Countries: 3

! please, enter country name: Japan
! please, enter country capitals: tokyo

! please, enter country name: france
! please, enter country capitals: paris

! please, enter country name: usa
! please, enter country capitals: washington

! Output:
! Sorted by country name:
! country: france, capitals:paris
! country: japan, capitals: tokyo
! country: usa, capitals: washington
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>

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
    cout << "\n\nYou welcome in Map To Store Countries Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Countries - Function.
int getNumberOfCountriesFun(int numOf)
{
    cout << "please, enter number of Countries: ";
    cin >> numOf;

    return numOf;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(int numOf, map<string, string> myMap)
{
    for (int i = 0; i < numOf; i++)
    {
        string couName, couCapitals;

        cout << "\nplease, enter country name: ";
        cin >> couName;

        cout << "please, enter country capitals: ";
        cin >> couCapitals;

        myMap[couName] = couCapitals;
    }

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<string, string> myMap)
{
    cout << "\nSorted by country name:" << endl;
    for (auto &x : myMap)
    {
        cout << "country: " << x.first << ", capitals: " << x.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    map<string, string> myMap;
    int numOf = 0;

    // Call Functions.
    numOf = getNumberOfCountriesFun(numOf);
    myMap = addElementsToMapFun(numOf, myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
