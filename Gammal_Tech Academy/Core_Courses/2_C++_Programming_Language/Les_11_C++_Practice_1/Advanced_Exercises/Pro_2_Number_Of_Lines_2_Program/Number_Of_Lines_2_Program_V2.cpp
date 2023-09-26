

/* >>> Number Of Lines 2 Program ( Version 2 ) <<< */

/* >>> A program that asks the person to enter a number and prints a number of lines equal to that number...
and in each line it prints numbers (starting from 1) with a frequency equal to the row number (meaning the first line prints 1, the second line 2, 3, the third line 4, 5, 6... and so on) And he repeats himself without stopping. <<< */

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
void numberOfLines_2Fun(int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int numLines = 0;
     // ... End Variables ...

     // ... Functions ...
     numberOfLines_2Fun(numLines);
     // ... End Functions ...

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Number Of Lines 2 Program ( Version 2 ) .." << endl
          << endl;
}

// Number Of Lines 2 / Function.
void numberOfLines_2Fun(int l)
{
     while (true)
     {
          int counter = 0;

          cout << "Please enter number of lines you need: ";
          cin >> l;

          for (int i = 1; i <= l; i++)
          {
               cout << endl;
               for (int j = 1; j <= i; j++)
               {
                    counter += 1;
                    cout << counter;
               }
          }
          cout << endl;
     }
}
// ... End Functions ...