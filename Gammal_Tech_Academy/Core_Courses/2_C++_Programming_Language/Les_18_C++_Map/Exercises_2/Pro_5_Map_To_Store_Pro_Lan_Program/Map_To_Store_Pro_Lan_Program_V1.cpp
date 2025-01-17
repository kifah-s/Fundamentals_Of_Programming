
//* Map To Store Programming Languages Program (Version 1).

/*
* Create a program that uses a map to store programming languages along with their release years,
* Print the languages and release years in ascending order of years.

! Output:
! Sorted by release years:
! C++, release years: 1983
! Java, release years: 1991
! Python, release years: 1995
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
    cout << "\n\nYou welcome in Map To Store Programming Languages Program (Version 1) ..\n"
         << endl;
}

// Add Elements For Map - Function.
map<int, string> addElementsForMapFun(map<int, string> myMap)
{
    myMap[1995] = "Python";
    myMap[1983] = "C++";
    myMap[1991] = "Java";

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<int, string> myMap)
{
    cout << "Sorted by release years:" << endl;
    for (auto &x : myMap)
    {
        cout << x.second << ", release years: " << x.first << endl;
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
