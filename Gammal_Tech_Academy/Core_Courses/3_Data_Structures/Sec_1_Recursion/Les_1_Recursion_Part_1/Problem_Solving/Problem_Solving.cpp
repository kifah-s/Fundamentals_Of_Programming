
//*  Problem Solving ..

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
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

int findNthNumber(int x, int y, int n)
{
    if (n == 1)
        return x;
    if (n == 2)
        return y;
    return findNthNumber(x, y, n - 1) + findNthNumber(x, y, n - 2);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int t, x, y, n;

    // Call Functions.
    printWelcomeMessageFun();

    cin >> t;
    
    while (t--)
    {
        cin >> x >> y >> n;
        cout << findNthNumber(x, y, n) << endl;
    }

    cout << endl
         << endl;
}
//* End Function ..
