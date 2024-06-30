

// >>> Change All Letters Program ( Version 1 ) <<< */

// >>> Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a). <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void allLetterFun(string x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat String.
    string myStr = "Gdkkn";

    // change every letter in a given string with the letter following it in the alphabet.
    allLetterFun(myStr);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Change All Letters Program ( Version 1 ) .." << endl
         << endl;
}

// change every letter in a given string with the letter following it in the alphabet / Function.
void allLetterFun(string x)
{
    string newString = "";

    for (int i = 0; i <= x.length() - 1; i++)
    {
        // newString = newString + x[i + 1];
        newString += x[i] + 1;
    }

    cout << newString;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
