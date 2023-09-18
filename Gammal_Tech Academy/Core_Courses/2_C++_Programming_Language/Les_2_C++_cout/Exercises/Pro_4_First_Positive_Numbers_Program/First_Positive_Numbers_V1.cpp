

/* >>> First Positive Numbers Program ( Version 1 ) <<< */

/* >>> Write a program that outputs the first 10 positive numbers using cout. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************
void welcomeMassageFun();
void printFirstPositiveNumbersFun();
// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************
    // ************ End Variables ****************

    // **************** Functions ****************
    printFirstPositiveNumbersFun();
    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in First Positive Numbers Program ( Version 1 ) .." << endl
         << endl;
}

// Print First Positive Numbers / Function.
void printFirstPositiveNumbersFun()
{
    cout << "First 10 Positive Numbers: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;
}
// **************** End Functions ****************
