

/* >>> Person Program ( Version 2 ) <<< */

/* >>> Create a base class called Person.
The class should have two private data members name and age.
Create a derived class called Student that inherits from Person.
The Student class should have an additional data member called grade
and a member function called display() that displays the name, age, and grade of the student. <<< */

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
// Person / class.
class Person
{
protected:
     string name;
     int age;

public:
     Person(string n, int a)
     {
          name = n;
          age = a;
     }
};

// Student / class.
class Student : public Person
{
private:
     int grade;

public:
     Student(string n, int a, int g) : Person(n, a) { grade = g; }
     void display()
     {
          cout << "Name: " << name << endl;
          cout << "Age: " << age << endl;
          cout << "Grade: " << grade << endl;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Person Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Student s("John Doe", 18, 12);
     s.display();

     cout << endl
          << endl;

     return 0;
}