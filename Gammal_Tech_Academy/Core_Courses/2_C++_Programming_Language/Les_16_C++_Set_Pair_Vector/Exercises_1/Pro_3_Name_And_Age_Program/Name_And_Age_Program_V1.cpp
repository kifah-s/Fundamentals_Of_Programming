

/* >>> Name And Age Program ( Version 1 ) <<< */

/* >>> Write a program that uses a pair to store the name and age of a person and then prints them out. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// Welcome massage / Function.
void welcomeMassageFun();

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create a pair to store name and age of a person.
     pair<string, int> person;

     // Add name and age to pair.
     person.first = "kifah";
     person.second = 26;

     // Print pair.
     cout << person.first << " - " << person.second;

     cout << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Name And Age Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...