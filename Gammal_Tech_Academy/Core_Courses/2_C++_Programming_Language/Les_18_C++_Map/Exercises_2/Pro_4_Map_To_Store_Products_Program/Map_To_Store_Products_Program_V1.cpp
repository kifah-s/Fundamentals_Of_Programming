
//* Map To Store Products Program (Version 1).

/*
* Create a program that uses a map to store product names along with their prices,
* Print the products and prices in descending order of prices.

! Output:
! Sorted by publication:
! Product: C, price: 200
! Product: A, price: 150
! Product: B, price: 100
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
    cout << "\n\nYou welcome in Map To Store Products Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<int, string, greater<int>> addElementsToMapFun(map<int, string, greater<int>> myMap)
{
    myMap[200] = "C";
    myMap[100] = "B";
    myMap[150] = "A";

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<int, string, greater<int>> myMap)
{
    cout << "Sorted by price (Descending):" << endl;
    for (auto &x : myMap)
    {
        cout << "Product: " << x.second << ", price: " << x.first << endl;
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
