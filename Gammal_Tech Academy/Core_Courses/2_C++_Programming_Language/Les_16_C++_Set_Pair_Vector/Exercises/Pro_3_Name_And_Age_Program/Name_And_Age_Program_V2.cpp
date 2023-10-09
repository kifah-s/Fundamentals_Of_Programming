

/* >>> Name And Age Program ( Version 2 ) <<< */

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

     // Create a pair in vector to store name and age of a persons.
     vector<pair<string, int>> person;
     pair<string, int> p;

     // Add name and age to pair.
     p.first = "kifah";
     p.second = 26;
     person.push_back(p);
     
     // Add name and age to pair.
     p.first = "a";
     p.second = 1;
     person.push_back(p);
     
     // Add name and age to pair.
     p.first = "b";
     p.second = 3;
     person.push_back(p);

     // Print pair in vector.
     for (auto k : person)
     {
          cout << k.first << " - " << k.second << endl;
     }
     
     
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
          << "You welcome in Name And Age Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...