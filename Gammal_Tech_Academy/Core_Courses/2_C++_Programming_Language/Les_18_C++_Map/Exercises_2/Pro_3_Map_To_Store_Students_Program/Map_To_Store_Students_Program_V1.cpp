
//* Map To Store Students Program (Version 1).

/*
* Create a program that uses a map to store student names along with their corresponding exam scores,
* Print the names and scores in ascending order of names.

! Output:
! Sorted by name:
! Student: A, score: 85
! Student: B, score: 75
! Student: C, score: 95
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
    cout << "\n\nYou welcome in Map To Store Students Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, float> addElementsToMapFun(map<string, float> myMap)
{
    myMap["B"] = 75;
    myMap["C"] = 95;
    myMap["A"] = 85;

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<string, float> myMap)
{
    cout << "Sorted by name:" << endl;
    for (auto &x : myMap)
    {
        cout << "Student: " << x.first << ", score: " << x.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    map<string, float> myMap;

    // Call Functions.
    myMap = addElementsToMapFun(myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
