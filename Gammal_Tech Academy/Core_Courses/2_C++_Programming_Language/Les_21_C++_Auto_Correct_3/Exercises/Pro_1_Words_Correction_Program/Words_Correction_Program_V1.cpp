

/* >>> Words Correction Program ( Version 1 ) <<< */

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
vector<string> correctWords;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Words Correction Program ( Version 1 ) .." << endl
          << endl;
}

// Check if word is from correct words or not / Function.
bool checkFun(string x)
{
     for (int i = 0; i < correctWords.size(); i++)
     {
          if (x == correctWords[i])
          {
               return 1;
          }
     }

     return 0;
}

// Correct word / Function.
string correctFun(string x)
{
     int num = 0;
     string c = "";
     for (int i = 0; i < correctWords.size(); i++)
     {
          int count = 0;
          for (int j = 0; j < correctWords[i].size(); j++)
          {
               for (int k = 0; k < x.size(); k++)
               {
                    if (correctWords[i][j] == x[k])
                    {
                         count++;
                    }
               }
          }
          if (count > num)
          {
               num = count;
               c = correctWords[i];
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
     correctWords.push_back("hello");
     correctWords.push_back("gammal");
     correctWords.push_back("website");

     // Receive word from user.
     string in;
     cout << "Please enter a word: ";
     cin >> in;

     // Check if word is from correct words or not.
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