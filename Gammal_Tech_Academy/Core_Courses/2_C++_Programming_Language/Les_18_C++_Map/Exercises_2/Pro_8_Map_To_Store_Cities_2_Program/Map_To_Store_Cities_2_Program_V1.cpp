
//* Map To Store Cities 2 Program (Version 1).

/*
* Create a program that utilizes a map to store the names of cities and their respective average temperatures,
* The program should initialize the map with predefined data,
* and then print the cities and average temperatures in ascending order of city names.

! Output:
! Sorted by city name:
! city: A, temperatures: 18.5
! city: B, temperatures: 12.2
! city: C, temperatures: 22.8
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
    cout << "\n\nYou welcome in Map To Store Cities 2 Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, float> addElementsToMapFun(map<string, float> myMap)
{
    myMap = {
        {"B", 12.2},
        {"C", 22.8},
        {"A", 18.5}};

    // myMap["B"] = 12.2;
    // myMap["C"] = 22.8;
    // myMap["A"] = 18.5;

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<string, float> myMap)
{
    cout << "Sorted by city name:" << endl;
    for (auto &x : myMap)
    {
        cout << "city: " << x.first << ", temperatures: " << x.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    map<string, float> myMap;

    // Call Functions.
    myMap = addElementsToMapFun(myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
