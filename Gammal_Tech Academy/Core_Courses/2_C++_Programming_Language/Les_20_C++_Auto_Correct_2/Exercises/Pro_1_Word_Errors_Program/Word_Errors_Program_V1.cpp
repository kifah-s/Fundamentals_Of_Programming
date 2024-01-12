

/* >>> Word Errors Program ( Version 1 ) <<< */

/* >>> A program that records 3 errors for the word "gammal", and if the user enters any of these 3 words,
it asks him, "Do you mean gammal (y/n)?" If the user types y, it prints "www.gammal.tech" If he types n, it prints "wrong URL". <<< */

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
          << "You welcome in Word Errors Program ( Version 1 ) .." << endl
          << endl;
}

// Add expected errors to map / Function.
map<string, string> expectedErrorsFun(map<string, string> m)
{
     m["gamal"] = "gammal";
     m["gammaal"] = "gammal";
     m["gaammal"] = "gammal";

     return m;
}

// Check input / Function.
void checkInputFun(map<string, string> m, string s)
{
     char c;
     if (m.find(s) != m.end())
     {
          cout << "do you mean gammal (y / n): ";
          cin >> c;

          if (c == 'y')
          {
               cout << "www.gammal.tech";
          }
          else if (c == 'n')
          {
               cout << "wrong URL";
          }
     }
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat map.
     map<string, string> myMap;

     // Add expected errors to map.
     myMap = expectedErrorsFun(myMap);

     // Receive input from the user.
     string input;
     cout << "Please enter word: ";
     cin >> input;

     // Check input.
     checkInputFun(myMap, input);

     cout << endl
          << endl;

     return 0;
}