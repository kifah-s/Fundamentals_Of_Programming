
//* Map To Store Cities Program (Version 1).

/*
* Create a program that uses a map to store city names along with their populations,
* Print the cities and populations in ascending order of populations.

! Output:
! Sorted by populations:
! delhi, populations: 100
! shanghai, populations: 200
! tokyo, populations: 300
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
    cout << "\n\nYou welcome in Map To Store Cities Program (Version 1) ..\n"
         << endl;
}

// Add Elements For Map - Function.
map<int, string> addElementsForMapFun(map<int, string> myMap)
{
    myMap[300] = "tokyo";
    myMap[100] = "delhi";
    myMap[200] = "shanghai";

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<int, string> myMap)
{
    cout << "Sorted by populations:" << endl;
    for (auto &x : myMap)
    {
        cout << x.second << ", populations: " << x.first << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    map<int, string> myMap;

    // Call Functions.
    myMap = addElementsForMapFun(myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
