

// >>> Change All Letters Program ( Version 2 ) <<< */

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
         << "You welcome in Change All Letters Program ( Version 2 ) .." << endl
         << endl;
}

// change every letter in a given string with the letter following it in the alphabet / Function.
void allLetterFun(string x)
{
    int char_code;

    for (int i = 0; i < x.length(); i++)
    {
        char_code = int(x[i]);

        if (char_code == 122)
        {
            x[i] = char(97);
        }
        else if (char_code == 90)
        {
            x[i] = char(65);
        }
        else if (char_code >= 65 && char_code <= 90 ||
                 char_code >= 97 && char_code <= 122)
        {
            x[i] = char(char_code + 1);
        }
    }

    cout << x;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
