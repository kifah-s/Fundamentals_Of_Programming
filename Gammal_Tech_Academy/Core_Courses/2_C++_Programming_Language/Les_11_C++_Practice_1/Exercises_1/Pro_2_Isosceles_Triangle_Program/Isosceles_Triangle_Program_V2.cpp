

// >>> Isosceles Triangle Program ( Version 2 ) <<< */

/* >>> How do you print an isosceles triangle of stars in C++ with an odd number of rows? <<< */

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
void isoscelesTriangleFun(int h);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int height = 0;
     // ... End Variables ...

     cout << "Enter the height of the triangle: ";
     cin >> height;

     // ... Functions ...
     isoscelesTriangleFun(height);
     // ... End Functions ...

     cout << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Isosceles Triangle Program ( Version 2 ) .." << endl
          << endl;
}

// Isosceles triangle / Function.
void isoscelesTriangleFun(int h)
{
     for (int i = 1; i <= h; i++)
     {
          for (int j = 1; j <= h - i; j++)
          {
               cout << " ";
          }

          for (int k = 1; k <= 2 * i - 1; k++)
          {
               cout << "*";
          }
          cout << endl;
     }
}
// ... End Functions ...