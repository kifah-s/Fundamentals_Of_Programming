
//* Map To Store Books Program (Version 1).

/*
* Create a program that uses a map to store book titles along with their publication years,
* Print the books and publication years in descending order of years.

! Output:
! Sorted by publication:
! Book: A, populations: 2022
! Book: B, populations: 2016
! Book: C, populations: 2010
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
    cout << "\n\nYou welcome in Map To Store Books Program (Version 1) ..\n"
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
    cout << "Sorted by publication year (Descending):" << endl;
    for (auto &x : myMap)
    {
        cout << "Book: " << x.second << ", publication: " << x.first << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    map<int, string, greater<int>> myMap;

    // Call Functions.
    myMap = addElementsToMapFun(myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
