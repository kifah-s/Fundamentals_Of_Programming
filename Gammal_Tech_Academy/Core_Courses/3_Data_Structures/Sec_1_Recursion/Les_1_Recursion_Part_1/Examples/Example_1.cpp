
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
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int n = 0;

    cout << "Please, enter a number: ";
    cin >> n;

    return n;
}

// Recursion - Function.
void recursionFun(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        recursionFun(n - 1);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    recursionFun(myNumber);

    cout << endl
         << endl;
}
//* End Function ..
