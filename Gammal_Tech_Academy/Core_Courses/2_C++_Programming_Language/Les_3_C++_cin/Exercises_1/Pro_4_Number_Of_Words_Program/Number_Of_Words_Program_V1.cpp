

/* >>> Number Of Words Program ( Version 1 ) <<< */

/* >>> Write a program that inputs a sentence and outputs the number of words in the sentence using 'cin'. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************

void welcomeMassageFun();
string getStringFun(string x);
void numberOfWordsFun(string x);

// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************

    string anyString;

    // ************ End Variables ****************

    // **************** Functions ****************

    anyString = getStringFun(anyString);

    numberOfWordsFun(anyString);

    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************

// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Number Of Words Program ( Version 1 ) .." << endl
         << endl;
}

// Get string from user / Function.
string getStringFun(string x)
{
    cout << "Please enter any string: ";
    getline(cin, x);
    cout << endl;

    return x;
}

// Number Of Words / Function.
void numberOfWordsFun(string x)
{
    int counter = 1;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == ' ')
        {
            counter++;
        }
    }
    cout << "Number Of Words = " << counter;

    cout << endl
         << endl
         << endl;
}

// **************** End Functions ****************
