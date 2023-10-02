

// >>> First And Second Elements 2 Program ( Version 2 ) <<< */

/* >>> Create a pair of a string and a float, and print out the first and second elements. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<string, float> myFirstPair;
     // ... End Variables ...

     myFirstPair.first = "kifah";
     myFirstPair.second = 2.5;

     // ... Functions ...
     // ... End Functions ...

     cout << "First Element is: " << myFirstPair.first << endl;
     cout << "Second Element is: " << myFirstPair.second << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in First And Second Elements 2 Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...