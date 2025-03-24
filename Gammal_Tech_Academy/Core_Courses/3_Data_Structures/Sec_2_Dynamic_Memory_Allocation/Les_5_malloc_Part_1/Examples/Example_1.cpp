
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
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

//* End Functions ..

int main()
{
    // Declare Variables.

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of string: " << sizeof(string) << endl;

    cout << endl
         << endl;

    return 0;
}
