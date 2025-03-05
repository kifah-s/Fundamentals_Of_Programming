
//*  Example 1 ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

// Calc Power Using Recursion Function.
int calcPowerUsingRecFun(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int z = calcPowerUsingRecFun(n, p / 2);
    z = z * z;

    if (p % 2 == 1)
    {
        z = z * n;
    }

    return z;
}
//* End Functions ..

int main()
{
    // Declare Variables.
    int num = 0, pow = 0;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Please enter a number: ";
    cin >> num;

    cout << "Please enter a power: ";
    cin >> pow;

    cout << num << " power " << pow << " is: " << calcPowerUsingRecFun(num, pow);

    cout << endl
         << endl;

    return 0;
}
