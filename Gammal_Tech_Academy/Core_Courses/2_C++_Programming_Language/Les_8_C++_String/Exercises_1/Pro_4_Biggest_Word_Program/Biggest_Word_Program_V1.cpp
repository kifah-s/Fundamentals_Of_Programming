

// >>> Biggest Word Program ( Version 1 ) <<< */

// >>> Write a C++ program to find the largest word in a given string. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void largestWordFun(string str);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat String.
    string myStr = "Hello, world .. my name is Kifah Salloum";

    // find the largest word .
    largestWordFun(myStr);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Biggest Word Program ( Version 1 ) .." << endl
         << endl;
}

// find the largest word  / Function.
void largestWordFun(string str)
{
    istringstream stream(str);
    string word = "", largestWord = "";

    while (stream >> word)
    {
        if (word.length() > largestWord.length())
        {
            largestWord = word;
        }
    }
    cout <<"The largest word is: "<< largestWord;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
