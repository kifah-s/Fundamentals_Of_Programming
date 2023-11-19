

/* >>> String As Input Program ( Version 1 ) <<< */

/* >>> Handle invalid input using stoi
Write a program that takes a string as input and converts it to an integer using stoi function.
The program should handle invalid input gracefully, by printing an error message and returning 0 if the input is not a valid integer. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>
#include <cstring>
#include <bitset>

using namespace std;

// ... Namespaces ...

// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in String As Input Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string str = "abcd";
     
     try
     {
          int num = stoi(str);
          cout << num << endl;
     }
     catch (const invalid_argument &e)
     {
          cout << "Invalid input" << endl;
     }

     cout << endl
          << endl;

     return 0;
}