

//* >>> Lexical Order Program ( Version 1 ) <<< */

//* >>> Sort an array of strings in Lexical Order using the built-in sort function. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void lexicalOrderVECFun(vector<string> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<string> myVector = {"E", "B", "A", "C", "D"};
    // ... End Variables ...

    // ... Functions ...
    lexicalOrderVECFun(myVector);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Lexical Order Program ( Version 1 ) .." << endl
         << endl;
}

// Lexical Order for vector / Function.
void lexicalOrderVECFun(vector<string> x)
{
    cout << "Vector Before Lexical Order:" << endl;
    for (string i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    sort(x.begin(), x.end());
    cout << "Vector After Lexical Order:" << endl;
    for (string i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    //* -----------------------------------------------

    /* cout << "Vector Before Lexical Order:" << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl
         << endl;

    sort(x.begin(), x.end());
    cout << "Vector After Lexical Order:" << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl
         << endl; */
}
// *** End Functions ***
