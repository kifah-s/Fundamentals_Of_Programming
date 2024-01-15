

// >>> Isosceles Triangle Program ( Version 1 ) <<< */

/* >>> A program that asks the person to enter a number and prints a number of lines equal to that number. In each line, the symbol (*) is printed repeatedly in the form of an isosceles triangle, and the program repeats on its own without stopping. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void isoscelesTriangleFun(int n, string st, string sp);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     while (true)
     {
          // ... Variables ...
          int num = 0;
          string stars = "*", space = "";
          // ... End Variables ...

          cout << "Please enter a number: ";
          cin >> num;

          // ... Functions ...
          isoscelesTriangleFun(num, stars, space);
          // ... End Functions ...

          cout << endl;
     }

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Isosceles Triangle Program ( Version 1 ) .." << endl
          << endl;
}

// Isosceles Triangle / Function.
void isoscelesTriangleFun(int n, string st, string sp)
{
     for (int i = 0; i < n - 1; i++)
     {
          sp += " ";
     }

     for (int i = 0; i < n; i++)
     {
          cout << sp.substr(i) << st << endl;
          st += "**";
     }
}
// ... End Functions ...