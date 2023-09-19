

/* >>> Vowels Program ( Version 1 ) <<< */

/* >>> Write a program that inputs a word and outputs the number of vowels in the word using 'cin'. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************

void welcomeMassageFun();
string getStringFun(string x);
void vowelsFun(string x);

// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************

    string anyString;

    // ************ End Variables ****************

    // **************** Functions ****************

    anyString = getStringFun(anyString);
    vowelsFun(anyString);

    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************

// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Vowels Program ( Version 1 ) .." << endl
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

// vowels / Function.
void vowelsFun(string x)
{
    int counter = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'A' || x[i] == 'a' || x[i] == 'E' || x[i] == 'e' || x[i] == 'I' ||
            x[i] == 'i' || x[i] == 'O' || x[i] == 'o' || x[i] == 'U' || x[i] == 'u')
        {
            counter++;
        }
    }
    cout << "Vowels = " << counter;

    cout << endl
         << endl
         << endl;
}

// **************** End Functions ****************
