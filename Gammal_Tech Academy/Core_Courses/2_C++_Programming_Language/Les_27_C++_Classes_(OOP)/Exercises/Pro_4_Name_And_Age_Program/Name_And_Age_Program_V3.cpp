

/* >>> Name And Age Program ( Version 3 ) <<< */

/* >>> Create a class named Person with private attributes name and age,
and public methods setName(), setAge(), getName(), and getAge().
The setName() and setAge() methods should take one parameter each and set the name and age attributes,
while the getName() and getAge() methods should return the name and age attributes, respectively. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>

using namespace std;

// ... Classes ...
class person
{
private:
     string name;
     int age;

public:
     void setName(string na)
     {
          name = na;
     }
     void setAge(int ag)
     {
          age = ag;
     }

     string getName()
     {
          return name;
     }
     int getAge()
     {
          return age;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Name And Age Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create a copy from person class.
     person p1;

     // Create variables.
     string name;
     int age;

     // Receive value from user.
     cout << "Please enter your name: ";
     cin >> name;
     
     cout << "Please enter your age: ";
     cin >> age;

     // Pass values to class.
     p1.setName(name);
     p1.setAge(age);

     // Print values.
     cout << "\nMy name is: " << p1.getName() << endl;
     cout << "My age is: " << p1.getAge() << endl;

     cout << endl
          << endl;

     return 0;
}