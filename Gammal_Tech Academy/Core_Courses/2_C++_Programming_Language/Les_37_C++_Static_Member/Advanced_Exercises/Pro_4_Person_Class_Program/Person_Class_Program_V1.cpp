

/* >>> Person Class Program ( Version 1 ) <<< */

/* >>>  <<< */

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
class Person
{
private:
     static int numberOfPeople;
     string name;
     int age;

public:
     Person(string n, int a)
     {
          name = n;
          age = a;
          numberOfPeople++;
     }

     ~Person()
     {
          numberOfPeople--;
     }

     string getName()
     {
          return name;
     }

     int getAge()
     {
          return age;
     }

     static int getNumberOfPeople()
     {
          return numberOfPeople;
     }
};
int Person::numberOfPeople = 0;
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
     
     Person p1("Alice", 25), p2("Bob", 30);

     cout << "Current number of people: " << Person::getNumberOfPeople()
          << endl;

     {
          Person p3("Charlie", 35);
          cout << "Current number of people: " << Person::getNumberOfPeople()
               << endl;
     }

     cout << "Current number of people: " << Person::getNumberOfPeople()
          << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}