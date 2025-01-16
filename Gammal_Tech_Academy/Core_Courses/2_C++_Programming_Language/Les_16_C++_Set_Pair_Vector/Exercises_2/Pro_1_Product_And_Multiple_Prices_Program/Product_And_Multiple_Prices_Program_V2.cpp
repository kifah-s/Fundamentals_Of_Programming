
//* Product And Multiple Prices Program (Version 2).

/*
* Create a set of pairs to store product names along with their respective prices. Print the sorted pairs.

! Input:
! Please, enter number of product: 2

! Please, enter product name: Laptop
! Please, enter product price Or ( 0 to finish ): 500
! Please, enter product price Or ( 0 to finish ): 1500
! Please, enter product price Or ( 0 to finish ): 0

! Please, enter product name: Phone
! Please, enter product price Or ( 0 to finish ): 150
! Please, enter product price Or ( 0 to finish ): 250
! Please, enter product price Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! Product name: Laptop.
! Product price: 500 $.
! Product price: 1500 $.

! Product name: Phone.
! Product price: 150 $.
! Product price: 250 $.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
// #include <iomanip>

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
    cout << "\n\nYou welcome in Product And Multiple Prices Program (Version 2) ..\n"
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
set<pair<string, vector<double>>> getElemetsFun(set<pair<string, vector<double>>> mySet)
{
    int numOfPro = getNumberOfProductFun(numOfPro);

    // Temporary Element.
    // pair<string, vector<double>> temporary;

    for (int i = 0; i < numOfPro; i++)
    {
        // Temporary Element.
        pair<string, vector<double>> temporary;

        cout << "\nPlease, enter product name: ";
        cin >> temporary.first;

    more:
        double price = 0;

        cout << "Please, enter product price Or ( 0 to finish ): ";
        cin >> price;

        if (price)
        {
            temporary.second.push_back(price);
            goto more;
        }

        mySet.insert(temporary);
        // temporary.second.clear();
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, vector<double>>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "\nProduct Name: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\tProduct Price: " << p.second[i] << " $" << endl;
        }
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, vector<double>>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
