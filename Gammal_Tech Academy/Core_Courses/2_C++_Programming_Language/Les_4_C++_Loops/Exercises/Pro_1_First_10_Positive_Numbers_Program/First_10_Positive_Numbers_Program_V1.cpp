

//* >>> First 10 Positive Numbers Program ( Version 1 ) <<< */

//* >>> Write a program that outputs the first 10 positive integers. <<< */

#include <iostream>
#include <string>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void fir10PosNumFun();
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    // ... End Variables ...

    // ... Functions ...
    fir10PosNumFun();
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in First 10 Positive Numbers Program ( Version 1 ) .." << endl
         << endl;
}

// Print first 10 positive numbers / Function.
void fir10PosNumFun()
{
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;
}
// *** End Functions ***
