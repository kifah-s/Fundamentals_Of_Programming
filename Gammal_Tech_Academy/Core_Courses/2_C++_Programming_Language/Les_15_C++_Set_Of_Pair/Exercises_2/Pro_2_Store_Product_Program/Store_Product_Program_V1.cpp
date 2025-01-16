
//* Store Product Program (Version 1).

/*
* Create a set of pairs to store product names and their prices. Print the sorted pairs.

! Input:
! Please, enter number of product: 3

! Please, enter product name 1: Phone
! Please, enter product price 1: 200

! Please, enter product name 2: Mouse
! Please, enter product price 2: 20

! Please, enter product name 3: HeadPhone
! Please, enter product price 3: 50

! Output:
! Sorted Pairs:
! Product name: Mouse, Product price: 20 $.
! Product name: Phone, Product price: 200 $.
! Product name: HeadPhone, Product price: 20 $.
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
    cout << "\n\nYou welcome in Store Product Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Products - Function
int getNumberOfProductFun(int num)
{
    cout << "Please, enter number of products: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, int>> getElemetsFun(set<pair<string, int>> mySet)
{
    int numOfPro = getNumberOfProductFun(numOfPro);

    // Temporary Element.
    pair<string, int> temporary;

    for (int i = 0; i < numOfPro; i++)
    {
        cout << "Please, enter product name " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter product price " << i + 1 << ": ";
        cin >> temporary.second;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, int>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "Product Name: " << p.first << ", Product Price: " << p.second << " $" << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, int>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
