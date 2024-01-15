

/* >>> Decimal To Binary 2 Program ( Version 1 ) <<< */

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
class T4Tutorials_Decimal_Constructor
{
protected:
     int i, j;
     int decimal, binary;
     int decimal1, binary1;
     int decimal2, binary2;

public:
     T4Tutorials_Decimal_Constructor(int n)
     {
          decimal = n;
          i = 1;
          j = n, binary = 0;
          for (j = n; j > 0; j = j / 2)
          {
               binary = binary + (n % 2) * i;
               i = i * 10;
               n = n / 2;
          }
          cout << "binary number = " << binary << endl;
     }

     T4Tutorials_Decimal_Constructor(int n1, int n2)
     {
          decimal1 = n1;
          decimal2 = n2;
          i = 1;
          for (j = n1; j > 0; j = j / 2)
          {
               binary1 = binary1 + (n1 % 2) * i;
               i = i * 10;
               n1 = n1 / 2;
          }
          cout << "binary number = " << binary1 << endl;
          i = 1;
          for (j = n2; j > 0; j = j / 2)
          {
               binary2 = binary2 + (n2 % 2) * i;
               i = i * 10;
               n2 = n2 / 2;
          }
          cout << "binary number = " << binary2 << endl;
     }
};

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Decimal To Binary 2 Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from T4Tutorials_Decimal_Number class.
     int option;
     cout << "Enter 1 FOR Single Parameter Constructor" << endl;
     cout << "Enter 2 FOR Multiple Parameter Constructor " << endl;
     cin >> option;

     if (option == 1)
     {
          cout << "You Have Selected Single Paramater  Constructor." << endl
               << endl;
          int n;
          cout << "Enter a Decimal Number to convert into BINARY Number : " << endl;
          cin >> n;
          T4Tutorials_Decimal_Constructor a(n);
     }
     else if (option == 2)
     {
          cout << "You Have Selected Multiple Paramater Constructor." << endl
               << endl;

          int n1, n2;
          cout << "Enter First Decimal no. to convert into BINARY no. : ";
          cin >> n1;
          cout << "Enter Second Decimal no. to convert into BINARY no. : ";
          cin >> n2;
          T4Tutorials_Decimal_Constructor a(n1, n2);
     }
     else
          cout << "invalid Input ";

     cout << endl
          << endl;

     return 0;
}