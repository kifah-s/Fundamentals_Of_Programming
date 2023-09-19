

/* >>> C++ Is Cool Program ( Version 4 ) <<< */

/* >>> Write a program to print "C++ is cool".Note that the sentence starts with a capital letter. <<< */

#include <iostream>
#include <string>

using namespace std;

// Function.
void welcomeMassageFun();
string isColeFun();

// End Function.

int main()
{
    welcomeMassageFun();

    string c = isColeFun();

    cout << c << endl
         << endl
         << endl;

    return 0;
}

// Function.
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in C++ Is Cool Program ( Version 4 ) .." << endl
         << endl;
}

// C++ is cole / Function.
string isColeFun()
{
    string x = "C++ Is Cool";

    return x;
}
// End Function.
