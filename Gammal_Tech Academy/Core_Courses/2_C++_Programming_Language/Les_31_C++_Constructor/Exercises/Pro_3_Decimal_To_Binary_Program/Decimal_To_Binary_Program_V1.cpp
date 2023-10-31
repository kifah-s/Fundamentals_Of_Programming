

/* >>> Decimal To Binary Program ( Version 1 ) <<< */

/* >>> Write a program in C++ to convert a decimal number into binary
without using an array and using the constructor and destructor. <<< */

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
// T4Tutorials_Decimal_Number / Class.
class T4Tutorials_Decimal_Number
{
public:
     T4Tutorials_Decimal_Number(int n)
     {
          int i = 1, j = n, T4Tutorials_Binary_Number = 0;
          cout << "Please enter Decimal  number : ";
          cin >> n;
          for (j = n; j > 0; j = j / 2)
          {
               T4Tutorials_Binary_Number = T4Tutorials_Binary_Number + (n % 2) * i;
               i = i * 10;
               n = n / 2;
          }
          cout << "binary number = " << T4Tutorials_Binary_Number;
     }
};
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

     // Create object from T4Tutorials_Decimal_Number class.
     T4Tutorials_Decimal_Number obj(4);

     cout << endl
          << endl;

     return 0;
}