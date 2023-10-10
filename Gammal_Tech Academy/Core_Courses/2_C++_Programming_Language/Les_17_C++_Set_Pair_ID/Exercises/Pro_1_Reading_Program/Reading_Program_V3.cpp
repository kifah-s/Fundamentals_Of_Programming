

/* >>> Reading Program ( Version 3 ) <<< */

/* >>> A program for reading lovers..
Many of us know the importance of reading and the extent of the benefits that will accrue to us from reading, but we are busy most of the time due to the large number of distractions.
To encourage reading, create a program that allows a person to write the names of his favorite books or the ones he wants to read and the number of pages for each. What is required of the program is to arrange the books on the basis of the least number of pages. <<< */

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

     // Create pair of set to storage some elements.
     set<pair<int, string>> book;

     // insert some elements to set.
     for (int i = 0; true; i++)
     {
          pair<int, string> p;

          cout << "Please enter book name OR (enter exit for exit): ";
          cin >> p.second;
          if (p.second == "exit")
          {
               break;
          }

          cout << "Please enter number of pages of the book: ";
          cin >> p.first;

          book.insert(p);

          cout << endl;
     }

     cout << endl;

     // Print set.
     for (auto k : book)
     {
          cout << k.second << " - " << k.first << endl;
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
          << "You welcome in Reading Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...