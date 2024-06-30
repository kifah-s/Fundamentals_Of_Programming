

// >>> First Character Program ( Version 2 ) <<< */

/* >>> Write a function that takes a pair of strings as input, and returns a new pair with the first character of each string. <<< */

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
pair<char, char> get_first_chars(pair<string, string> my_pair);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<string, string> my_pair("hello", "world");
     // ... End Variables ...

     // ... Functions ...
     pair<char, char> result = get_first_chars(my_pair);
     // ... End Functions ...

     cout << "First characters: " << result.first << ", " << result.second
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
          << "You welcome in First Character Program ( Version 2 ) .." << endl
          << endl;
}

// First Character / Function.
pair<char, char> get_first_chars(pair<string, string> my_pair)
{
     char first_char1 = my_pair.first.at(0);
     char first_char2 = my_pair.second.at(0);

     pair<char, char> result(first_char1, first_char2);

     return result;
}
// ... End Functions ...