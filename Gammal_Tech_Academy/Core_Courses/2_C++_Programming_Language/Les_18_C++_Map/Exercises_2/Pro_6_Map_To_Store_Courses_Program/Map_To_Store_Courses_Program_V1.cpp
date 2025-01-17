
//* Map To Store Courses Program (Version 1).

/*
* Create a program that initializes a map with predefined data representing courses and their corresponding credit hours,
* The program should print the courses and credit hours in ascending order of courses.

! Output:
! Sorted by name:
! Course: B, hours: 45
! Course: A, hours: 25
! Course: C, hours: 10
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
    cout << "\n\nYou welcome in Map To Store Courses Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, float> addElementsToMapFun(map<string, float> myMap)
{
    // myMap["B"] = 45;
    // myMap["C"] = 10;
    // myMap["A"] = 25;

    myMap = {
        {"B", 45},
        {"C", 10},
        {"A", 25}};

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<string, float> myMap)
{
    cout << "Sorted by name:" << endl;
    for (auto &x : myMap)
    {
        cout << "Course: " << x.first << ", hours: " << x.second << endl;
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
