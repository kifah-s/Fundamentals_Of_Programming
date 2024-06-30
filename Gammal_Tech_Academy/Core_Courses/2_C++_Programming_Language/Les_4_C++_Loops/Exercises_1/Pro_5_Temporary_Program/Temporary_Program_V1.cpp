

//* >>> Temporary Program ( Version 1 ) <<< */

//* >>> Create a timer program that will take the number of seconds as input, output the remaining time and countdown to 0. You need to output every number, including 0. <<< */

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
int getNumFun(int x);
void temporaryFun(int x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    int number = 0;
    // ... End Variables ...

    // ... Functions ...
    number = getNumFun(number);
    temporaryFun(number);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Temporary Program ( Version 1 ) .." << endl
         << endl;
}

// Get number from user / Function.
int getNumFun(int x)
{
    cout << "Please enter a number: ";
    cin >> x;

    return x;
}

// Temporary / Function.
void temporaryFun(int x)
{
    for (int i = x; i >= 0; i--)
    {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl
         << endl;
}
// *** End Functions ***
