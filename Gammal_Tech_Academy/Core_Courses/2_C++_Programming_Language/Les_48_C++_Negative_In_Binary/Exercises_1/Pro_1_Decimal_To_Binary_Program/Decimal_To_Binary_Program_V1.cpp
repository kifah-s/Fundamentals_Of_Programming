

/* >>> Decimal To Binary Program ( Version 1 ) <<< */

/* >>> Write a C++ program to convert a decimal number to a 8-bit two's complement binary number. <<< */

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
          << "You welcome in Decimal To Binary Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     int decNum;
     cout << "Enter a decimal number: ";
     cin >> decNum;

     cout << endl;

     if (decNum >= 0)
     {
          cout << "The binary representation of " << decNum << " is " << bitset<8>(decNum) << endl;
     }
     else
     {
          int twosComp = (1 << 8) + decNum;
          cout << "The two's complement binary representation of " << decNum << " is " << bitset<8>(twosComp) << endl;
     }

     cout << endl
          << endl;

     return 0;
}