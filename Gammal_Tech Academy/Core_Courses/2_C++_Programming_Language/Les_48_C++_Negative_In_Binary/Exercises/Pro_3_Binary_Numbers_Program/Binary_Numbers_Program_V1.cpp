

/* >>> Binary Numbers Program ( Version 1 ) <<< */

/* >>> Write a C++ program to add two 8-bit two's complement binary numbers. <<< */

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
          << "You welcome in Binary Numbers Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string binStr1, binStr2;
     cout << "Enter two 8-bit binary numbers to add: ";
     cin >> binStr1 >> binStr2;

     int decNum1, decNum2;
     if (binStr1[0] == '0')
     {
          decNum1 = stoi(binStr1, nullptr, 2);
     }
     else
     {
          int twosComp = stoi(binStr1, nullptr, 2) - (1 << 8);
          decNum1 = twosComp;
     }

     if (binStr2[0] == '0')
     {
          decNum2 = stoi(binStr2, nullptr, 2);
     }
     else
     {
          int twosComp = stoi(binStr2, nullptr, 2) - (1 << 8);
          decNum2 = twosComp;
     }

     int sum = decNum1 + decNum2;
     if (sum >= 0)
     {
          cout << "The sum of " << binStr1 << " and " << binStr2 << " is " << bitset<8>(sum) << endl;
     }
     else
     {
          int twosComp = (1 << 8) + sum;
          cout << "The sum of " << binStr1 << " and " << binStr2 << " is " << bitset<8>(twosComp) << endl;
     }

     cout << endl
          << endl;

     return 0;
}