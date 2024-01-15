

/* >>> Counter Class Program ( Version 4 ) <<< */

/* >>> Create a class called "Counter" that has a static member variable "count" and two member functions "increment" and "getCount".
The "increment" function should increment the "count" variable, and "getCount" should return the value of "count".
Write a simple main function to test the "Counter" class by creating several objects and calling the "increment" function. <<< */

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
// Create main class.
class Counter
{
private:
     static int count;

public:
     void increment()
     {
          count++;
     }

     int getCount()
     {
          return count;
     }
};
int Counter::count = 0;

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Counter Class Program ( Version 4 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Counter c1, c2;

     c1.increment();
     cout << "Count for c1: " << c1.getCount() << endl;

     c2.increment();
     c2.increment();
     cout << "Count for c2: " << c2.getCount() << endl;

     cout << "Count for c1 again: " << c1.getCount() << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}