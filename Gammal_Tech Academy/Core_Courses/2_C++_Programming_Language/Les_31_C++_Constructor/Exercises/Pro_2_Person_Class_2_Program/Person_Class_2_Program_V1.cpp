

/* >>> Person Class 2 Program ( Version 1 ) <<< */

/* >>> Modify the Person class to have a default constructor that sets the name to "Unknown" and the age to 0, if no arguments are provided.
Also, add a destructor that prints a message when the object is destroyed. <<< */

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
// Person / Class.
class Person
{
private:
     string name;
     int age;

public:
     // Create Constructor.
     Person()
     {
          name = "Unknown";
          age = 0;
     }

     // Create Destructor.
     ~Person()
     {
          cout << "The object was deleted successfully" << endl
               << endl;
     }

     // Create method for print person name and person age.
     void print()
     {
          cout << "- Person name: " << name << endl;
          cout << "- Person age: " << age;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Person Class 2 Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from "Person" class.
     Person P1;
     P1.print();
     // P1.~Person();

     cout << endl
          << endl;

     return 0;
}