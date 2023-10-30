

/* >>> Person Class 2 Program ( Version 4 ) <<< */

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
public:
     Person() : name_("Unknown"), age_(0)
     {
          cout << "Default constructor called" << endl;
     }

     Person(string name, int age) : name_(name), age_(age)
     {
          cout << "Parameterized constructor called" << endl;
     }

     ~Person() { cout << "Destructor called for " << name_ << endl; }

     void introduce()
     {
          cout << "My name is " << name_ << " and I am " << age_ << " years old."
               << endl;
     }

private:
     string name_;
     int age_;
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Person Class 2 Program ( Version 4 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Person john("John", 25);
     john.introduce();

     Person jane;
     jane.introduce();

     cout << endl
          << endl;

     return 0;
}