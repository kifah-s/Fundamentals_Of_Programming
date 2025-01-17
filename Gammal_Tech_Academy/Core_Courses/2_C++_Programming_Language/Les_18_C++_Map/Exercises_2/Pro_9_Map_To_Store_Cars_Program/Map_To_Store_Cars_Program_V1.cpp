
//* Map To Store Cars Program (Version 1).

/*
* Create a program that uses a map to store car models and their corresponding production years,
* The program should initialize the map with predefined data and,
* then print the car models and production years in descending order of production years.

! Output:
! Sorted by production years:
! Cars: A, production years: 2022
! Cars: B, production years: 2016
! Cars: C, production years: 2010
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
    cout << "\n\nYou welcome in Map To Store Cars Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<int, string, greater<int>> addElementsToMapFun(map<int, string, greater<int>> myMap)
{
    myMap[2010] = "C";
    myMap[2022] = "A";
    myMap[2016] = "B";

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<int, string, greater<int>> myMap)
{
    cout << "Sorted by production year (Descending):" << endl;
    for (auto &x : myMap)
    {
        cout << "Cars: " << x.second << ", production years: " << x.first << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    map<int, string, greater<int>> myMap;

    // Call Functions.
    myMap = addElementsToMapFun(myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
