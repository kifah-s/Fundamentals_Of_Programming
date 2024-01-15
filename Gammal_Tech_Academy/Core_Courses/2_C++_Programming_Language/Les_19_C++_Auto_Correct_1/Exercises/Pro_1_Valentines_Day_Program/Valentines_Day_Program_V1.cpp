

/* >>> Valentine's Day Program ( Version 1 ) <<< */

/* >>> Valentine's Day programme.
2/14 is a special day for most couples. They like to spend time in special places to celebrate Valentine’s Day. Usually, these places have a large demand on this day, so the best solution is to book these places well before the date of going.
Required: Write a program for a restaurant that records the date of the reservation, the name of the person making the reservation, and the order of priority for the oldest date. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>

using namespace std;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Valentine's Day Program ( Version 1 ) .." << endl
          << endl;
}

// Add elements to set / Function.
set<pair<int, string>> addEleFun(set<pair<int, string>> s)
{
     s.insert({2, "dohA"});
     s.insert({2, "aaA"});
     s.insert({1, "kifaH"});
     s.insert({1, "aaA"});
     s.insert({3, "aaA"});
     s.insert({1, "bbB"});
     s.insert({2, "bbB"});
     s.insert({1, "ccC"});
     s.insert({3, "hudA"});

     return s;
}

// Print set / Function.
void printSetFun(set<pair<int, string>> s)
{
     for (auto k : s)
     {
          k.second[0] = toupper(k.second[0]);
          for (int i = 1; i < s.size(); i++)
          {
               k.second[i] = tolower(k.second[i]);
          }

          cout << k.second << "    -    " << k.first << endl;
     }
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat pair of set.
     set<pair<int, string>> valentinesDay;

     // Add elements to set.
     valentinesDay = addEleFun(valentinesDay);

     // Print set.
     printSetFun(valentinesDay);

     cout << endl
          << endl;

     return 0;
}