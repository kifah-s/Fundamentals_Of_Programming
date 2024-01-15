

/* >>> Reverse Program ( Version 2 ) <<< */

/* >>> Write a program that inputs a string and outputs it in reverse using 'cin'. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************

void welcomeMassageFun();
string getStringFun(string x);
void reverseStringFun(string x);

// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************

    string anyString;
    
    // ************ End Variables ****************

    // **************** Functions ****************

    anyString = getStringFun(anyString);
    reverseStringFun(anyString);

    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************

// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Reverse Program ( Version 2 ) .." << endl
         << endl;
}

// Get string from user / Function.
string getStringFun(string x)
{
    cout << "Please enter any string: ";
    cin >> x;

    cout << endl;

    return x;
}

// Reverse string / Function.
void reverseStringFun(string x)
{
    cout << "Reverse: ";
    for (int i = x.length(); i >= 0; i--)
    {
        cout << x[i];
    }

    cout << endl
         << endl
         << endl;
}

// **************** End Functions ****************
