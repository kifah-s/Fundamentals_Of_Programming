

/* >>> Animal Program ( Version 2 ) <<< */

/* >>> Create a base class called Animal.
The class should have a virtual function called speak() that returns "Unknown".
Create two derived classes called Dog and Cat that override the speak() function to return "Woof" and "Meow",
respectively. <<< */

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
// Animal / Class.
class Animal
{
public:
     virtual string speak()
     {
          return "Unknown";
     }
};

// Dog / Class.
class Dog : public Animal
{
public:
     string speak()
     {
          return "Woof";
     }
};

// Cat / Class.
class Cat : public Animal
{
public:
     string speak()
     {
          return "Meow";
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Animal Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Animal *animal;
     Dog dog;
     Cat cat;

     // Pointer to dog
     animal = &dog;
     cout << "Dog says: " << animal->speak() << endl;

     // Pointer to cat
     animal = &cat;
     cout << "Cat says: " << animal->speak() << endl;

     cout << endl
          << endl;

     return 0;
}