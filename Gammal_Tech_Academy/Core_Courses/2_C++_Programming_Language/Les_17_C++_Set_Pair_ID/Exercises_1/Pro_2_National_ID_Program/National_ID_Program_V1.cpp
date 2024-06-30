

/* >>> National ID Program ( Version 1 ) <<< */

/* >>> National ID Program for Citizens..
In most countries, each person has a different national number from the other person
Required: Write a program that records the name and national number of a number of citizens and prints them arranged according to the national number of each person. <<< */

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

// Add some elements to set / Function.
set<pair<int, string>> addSomeElementsFun(set<pair<int, string>> s);

// Print set / Function.
void printSetFun(set<pair<int, string>> s);

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat pair of set.
     set<pair<int, string>> people;

     // Add some elements to set.
     people = addSomeElementsFun(people);

     // Print set.
     printSetFun(people);

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
          << "You welcome in National ID Program ( Version 1 ) .." << endl
          << endl;
}

// Add some elements to set / Function.
set<pair<int, string>> addSomeElementsFun(set<pair<int, string>> s)
{
     s.insert(pair<int, string>(3, "salam"));
     s.insert(pair<int, string>(2, "doha"));
     s.insert(pair<int, string>(1, "kifah"));

     return s;
}

// Print set / Function.
void printSetFun(set<pair<int, string>> s)
{
     for (auto i : s)
     {
          cout << i.first << " - " << i.second << endl;
     }
}

// ... End Functions ...