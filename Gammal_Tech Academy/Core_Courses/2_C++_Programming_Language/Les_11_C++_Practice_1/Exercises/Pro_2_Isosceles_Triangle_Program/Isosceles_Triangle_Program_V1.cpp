

// >>> Isosceles Triangle Program ( Version 1 ) <<< */

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
void isoscelesTriangleFun(int h, int numSpa, int numSta);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int height = 0,
         numSpaces = height / 2,
         numStars = 1;
     // ... End Variables ...

     cout << "Enter the height of the triangle: ";
     cin >> height;

     // ... Functions ...
     isoscelesTriangleFun(height, numSpaces, numStars);
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
          << "You welcome in Isosceles Triangle Program ( Version 1 ) .." << endl
          << endl;
}

// Isosceles triangle / Function.
void isoscelesTriangleFun(int h, int numSpa, int numSta)
{
     if (h % 2 == 0)
     {
          h++; // Make the height odd
     }

     for (int i = 1; i <= h; i++)
     {
          for (int j = 1; j <= numSpa; j++)
          {
               cout << " ";
          }

          for (int j = 1; j <= numSta; j++)
          {
               cout << "*";
          }

          cout << endl;

          if (i <= h / 2)
          {
               numSpa--;
               numSta += 2;
          }
          else
          {
               numSpa++;
               numSta -= 2;
          }
     }
}
// ... End Functions ...