

//* >>> Multiples Of 3 Program ( Version 1 ) <<< */

//* >>> You are given a program that outputs all the numbers from 0 to 20. Change the code to make it output only numbers that are multiples of 3. <<< */

#include <iostream>
#include <string>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void multiplesOf3Fun();
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    // ... End Variables ...

    // ... Functions ...
    multiplesOf3Fun();
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Multiples Of 3 Program ( Version 1 ) .." << endl
         << endl;
}

// Multiples Of 3 / Function.
void multiplesOf3Fun()
{
    cout << "Multiples Of 3: " << endl;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
    cout << endl
         << endl
         << endl;
}
// *** End Functions ***
