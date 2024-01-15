

/* >>> Reading Program ( Version 2 ) <<< */

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
     book.insert(pair<int, string>(500, "Book 5"));
     book.insert(pair<int, string>(200, "Book 2"));
     book.insert(pair<int, string>(400, "Book 4"));
     book.insert(pair<int, string>(300, "Book 3"));
     book.insert(pair<int, string>(100, "Book 1"));

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
          << "You welcome in Reading Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...