

/* >>> C++ Is Cool Program ( Version 2 ) <<< */

/* >>> Write a program to print "C++ is cool".Note that the sentence starts with a capital letter. <<< */

#include <iostream>
#include <string>

using namespace std;

// Function.
void welcomeMassageFun();
void isColeFun(char x[]);

// End Function.

int main()
{
    welcomeMassageFun();

    char c[] = "C++ Is Cool" ;
    isColeFun(c);

    return 0;
}

// Function.
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in C++ Is Cool Program ( Version 2 ) .." << endl
         << endl;
}

// C++ is cole / Function.
void isColeFun(char x[])
{
    cout << x << endl
         << endl
         << endl;
}
// End Function.
