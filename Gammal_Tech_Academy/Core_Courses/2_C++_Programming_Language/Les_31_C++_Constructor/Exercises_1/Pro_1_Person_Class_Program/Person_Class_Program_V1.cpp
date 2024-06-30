

/* >>> Person Class Program ( Version 1 ) <<< */

/* >>> Write a C++ class named Person with a constructor that takes in two arguments,
name and age, and sets the corresponding member variables.
The class should also have a method called introduce that prints out a message with the person's name and age. <<< */

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
     Person(string name, int age)
     {
          this->name = name;
          this->age = age;
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
          << "You welcome in Person Class Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from "Person" class.
     Person P1("kifah", 26);
     P1.print();

     cout << endl
          << endl;

     return 0;
}