

/* >>> Number Of Lines Program ( Version 2 ) <<< */

/* >>> A program that asks the person to enter a number and prints a number of lines equal to that number. In each line,
a symbol (*) is printed repeatedly equal to the row number (in two different ways) and it is repeated on its own without stopping. <<< */

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
void numberOfLinesFun(int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int numLines = 0;
     // ... End Variables ...

     // ... Functions ...
     numberOfLinesFun(numLines);
     // ... End Functions ...

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Number Of Lines Program ( Version 2 ) .." << endl
          << endl;
}

// Number Of Lines / Function.
void numberOfLinesFun(int l)
{
     /* string star = "";
     for (int i = 1; i <= l; i++)
     {
          cout << endl;
          star = star + "*" ;
          cout << star;
     } */

     while (true)
     {
          string star = "*";

          cout << "Please enter number of lines you need: ";
          cin >> l;

          for (int i = 1; i <= l; i++)
          {
               cout << endl;
               cout << star;
               star += "*";
          }
          cout << endl;
     }
}
// ... End Functions ...