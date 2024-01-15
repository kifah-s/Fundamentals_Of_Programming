

/* >>> Date String Input Program ( Version 1 ) <<< */

/* >>> Write a program that takes a date string input from the user in the format "dd/mm/yyyy"
and converts it into "yyyy-mm-dd" format using stringstream. <<< */

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

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Date String Input Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Read the date string from the user.
     string input;
     cout << "Enter a date in the format dd/mm/yyyy: ";
     getline(cin, input);

     // Parse the date string using stringstream.
     stringstream ss(input);
     int day, month, year;
     char delimiter;
     ss >> day >> delimiter >> month >> delimiter >> year;

     // Convert the date to the new format using stringstream.
     stringstream output_ss;
     output_ss << year << "-" << month << "-" << day;
     string output = output_ss.str();

     // Print the date in the new format.
     cout << endl
          << "The date in the format yyyy-mm-dd is: " << output << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}