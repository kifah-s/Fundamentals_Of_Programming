

// >>> Sort Characters Program ( Version 1 ) <<< */

// >>> Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void sortCharactersFun(string str);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat String.
    string myStr = "HMFDCOXSBARPLGKUTYEINVQWJZ";

    // Sort Characters.
    sortCharactersFun(myStr);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Sort Characters Program ( Version 1 ) .." << endl
         << endl;
}

// Sort Characters  / Function.
void sortCharactersFun(string str)
{
    sort(str.begin(), str.end());

    cout << str;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
