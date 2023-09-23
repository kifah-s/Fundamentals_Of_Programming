

// >>> Reverse String Program ( Version 1 ) <<< */

// >>> Write a C++ program to reverse a given string. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void reversStringFun(string x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat String.
    string myStr = "++C ,olleH";

    // Revers string.
    reversStringFun(myStr);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Reverse String Program ( Version 1 ) .." << endl
         << endl;
}

// Revers String / Function.
void reversStringFun(string x)
{
    reverse(x.begin(), x.end());

    cout << x;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
