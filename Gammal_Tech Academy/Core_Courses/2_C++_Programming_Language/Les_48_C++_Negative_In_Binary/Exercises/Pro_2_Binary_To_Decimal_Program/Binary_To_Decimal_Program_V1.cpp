

/* >>> Binary To Decimal Program ( Version 1 ) <<< */

/* >>> Write a C++ program to convert an 8-bit two's complement binary number to a decimal number. <<< */

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
          << "You welcome in Binary To Decimal Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string binStr;
     cout << "Enter an 8-bit binary number: ";
     cin >> binStr;

     cout << endl;

     int decNum;
     
     if (binStr[0] == '0')
     {
          decNum = stoi(binStr, nullptr, 2);
     }
     else
     {
          int twosComp = stoi(binStr, nullptr, 2) - (1 << 8);
          decNum = twosComp;
     }

     cout << "The decimal representation of " << binStr << " is " << decNum << endl;

     cout << endl
          << endl;

     return 0;
}