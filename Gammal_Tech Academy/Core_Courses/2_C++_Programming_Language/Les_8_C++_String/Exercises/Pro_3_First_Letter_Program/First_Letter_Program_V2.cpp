

// >>> First Letter Program ( Version 2 ) <<< */

// >>> Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void firstLetterFun(string x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat String.
    string myStr = "hello, world";

    // change first letter for all words.
    firstLetterFun(myStr);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in First Letter Program ( Version 2 ) .." << endl
         << endl;
}

// change first letter for all words / Function.
void firstLetterFun(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        if (i == 0)
        {
            x[i] = toupper(x[i]);
        }
        else if (x[i - 1] == ' ')
        {
            x[i] = toupper(x[i]);
        }
    }

    cout << x;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
