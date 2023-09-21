

//* >>> Stock Market Investors Program ( Version 1 ) <<< */

/* >>> A program for stock market investors.
The stock market is the place for buying and selling company shares. The person who profits most from stock market investments is the person who buys the lowest-priced shares and sells the highest-priced shares. But the prices of these shares are always changing.
Required: Write a program that allows the user to enter the share prices of a group of companies... and arrange them from smallest to largest... so that the investor knows what he should buy and what he should sell. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// *** Functions ***
void welcomeMassageFun();
vector<float> getNumFun(vector<float> vec, float n);
void fromSmalToLarFun(vector<float> vec);
// *** End Functions ***

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<float> myVector;
    float number = 0;
    // ... End Variables ...

    // ... Functions ...
    myVector = getNumFun(myVector, number);
    fromSmalToLarFun(myVector);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Stock Market Investors Program ( Version 1 ) .." << endl
         << endl;
}

// Get numbers from user / Function.
vector<float> getNumFun(vector<float> vec, float n)
{
    do
    {
        cout << "Please enter company stock prices (OR Enter \"0\" for arrange them from smallest to largest): ";
        cin >> n;
        if (n != 0)
        {
            vec.push_back(n);
        }
    } while (n != 0);

    return vec;
}

// Arrange the elements from smallest to largest / Function.
void fromSmalToLarFun(vector<float> vec)
{
    cout << endl
         << "Stock prices from smallest to largest:" << endl;
    sort(vec.begin(), vec.end());
    for (float i : vec)
    {
        cout << i << " $" << endl;
    }
    cout << endl
         << endl
         << endl;
}
// *** End Functions ***
