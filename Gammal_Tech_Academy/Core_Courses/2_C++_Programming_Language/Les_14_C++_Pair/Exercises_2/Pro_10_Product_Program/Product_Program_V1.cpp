
//* Product Program (Version 1).

/*
* Create a pair to store the name and price of a product, taking input from the user.

! Input:
! Please, enter product name: phone
! Please, enter product price: 200

! Output:
! Product Name: phone
! Product Price: 200 $
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
    cout << "\n\nYou welcome in Product Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
pair<string, float> getElemetsFun(pair<string, float> myPa)
{
    cout << "Please, enter product name: ";
    cin >> myPa.first;

    cout << "Please, enter product price: ";
    cin >> myPa.second;

    return myPa;
}

// Print Pair Elements - Function.
void printPairElementsFun(pair<string, float> myPa)
{
    cout << "\nProduct Name: " << myPa.first << endl;
    cout << "Product Price: " << myPa.second << " $";
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<string, float> product;

    // Call Functions.
    product = getElemetsFun(product);
    printPairElementsFun(product);

    cout << "\n"
         << endl;
}
//* End Function ..
