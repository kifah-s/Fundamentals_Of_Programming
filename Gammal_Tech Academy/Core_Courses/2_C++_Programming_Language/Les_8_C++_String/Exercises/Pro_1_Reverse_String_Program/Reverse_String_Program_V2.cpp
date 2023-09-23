

// >>> Reverse String Program ( Version 2 ) <<< */

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
    char myStr[] = "++C ,olleH";

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
         << "You welcome in Reverse String Program ( Version 2 ) .." << endl
         << endl;
}

// Revers String / Function.
void reversStringFun(string x)
{
    string reversedText = "";
    for (int i = x.length() - 1; i >= 0; i--)
    {
        // reversedText = reversedText + x[i];
        reversedText += x[i];
    }

    cout << reversedText;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
