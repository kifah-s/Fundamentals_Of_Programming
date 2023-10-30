

/* >>> Person Class Program ( Version 3 ) <<< */

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
public:
     Person(string name, int age) : name_(name), age_(age) {}

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
          << "You welcome in Person Class Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Person john("kifah", 26);
     john.introduce();

     cout << endl
          << endl;

     return 0;
}