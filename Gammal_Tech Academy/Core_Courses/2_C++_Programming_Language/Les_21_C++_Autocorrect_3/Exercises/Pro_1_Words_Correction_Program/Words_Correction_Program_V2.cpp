

/* >>> Words Correction Program ( Version 2 ) <<< */

/* >>> A program that records 3 words (hello, gammal, website),
and asks the user to enter a word and corrects any incorrect word the user enters with the word closest to it out of the 3 words based on the number of similar letters. <<< */

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

// Global vector.
vector<string> correctNames;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Words Correction Program ( Version 2 ) .." << endl
          << endl;
}

// Check if name is from correct names or not / Function.
bool checkFun(string x)
{
     for (int i = 0; i < correctNames.size(); i++)
     {
          if (x == correctNames[i])
          {
               return 1;
          }
     }

     return 0;
}

// Correct Name / Function.
string correctFun(string x)
{
     int num = 0;
     string c = "";
     for (int i = 0; i < correctNames.size(); i++)
     {
          int count = 0;
          for (int j = 0; j < correctNames[i].size(); j++)
          {
               for (int k = 0; k < x.size(); k++)
               {
                    if (correctNames[i][j] == x[k])
                    {
                         count++;
                    }
               }
          }
          if (count > num)
          {
               num = count;
               c = correctNames[i];
          }
     }
     return c;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Add words to vector.
     correctNames.push_back("kifah");
     correctNames.push_back("doha");
     correctNames.push_back("wesam");
     correctNames.push_back("amaar");
     correctNames.push_back("maram");

     // Receive name from user.
     string in;
     cout << "Please enter a name: ";
     cin >> in;

     // Check if name is from correct names or not.
     if (checkFun(in))
     {
          cout << endl
               << in;
     }
     else
     {
          cout << endl
               << correctFun(in);
     }

     cout << endl
          << endl;

     return 0;
}