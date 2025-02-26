
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

// Fibonacci - Function.
int fib(int x)
{
    if (x < 2)
    {
        return x;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 0;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Please, enter a number: ";
    cin >> num;

    cout << fib(num) << endl;

    cout << endl
         << endl;
}
//* End Functions ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
