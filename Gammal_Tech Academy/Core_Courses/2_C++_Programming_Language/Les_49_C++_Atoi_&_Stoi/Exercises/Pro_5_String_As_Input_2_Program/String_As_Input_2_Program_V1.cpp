

/* >>> String As Input 2 Program ( Version 1 ) <<< */

/* >>> Handle invalid input using stod
Write a program that takes a string as input and converts it to a double using stod function.
The program should handle invalid input gracefully, by printing an error message and returning 0 if the input is not a valid double. <<< */

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
          << "You welcome in String As Input 2 Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string str = "3.14abc";
     
     try
     {
          double num = stod(str);
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