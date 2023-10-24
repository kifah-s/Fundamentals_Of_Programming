

/* >>> Car Program ( Version 1 ) <<< */

/* >>> Create a class named Car with private attributes make and model,
and public methods setMake(), setModel(), getMake(), and getModel().
The setMake() and setModel() methods should take one parameter each and set the make and model attributes,
while the getMake() and getModel() methods should return the make and model attributes, respectively. <<< */

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
class Car
{
private:
     string make;
     string model;

public:
     string setMake(string ma)
     {
          make = ma;
          return make;
     }

     string setModel(string mo)
     {
          model = mo;
          return model;
     }

     void getMake()
     {
          cout << make << endl;
     }

     void getModel()
     {
          cout << model << endl;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Car Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create a copy of Car class.
     Car car;

     // Creat to variables.
     string ma, mo;

     // Receiving values from the user.
     cout << "Please enter a car make country: ";
     cin >> ma;
     // Assigning values to car class.
     car.setMake(ma);

     cout << "Please enter a car model: ";
     cin >> mo;
     // Assigning values to car class.
     car.setModel(mo);

     cout << endl;

     // Print values.
     cout << "The car make in: ";
     car.getMake();
     
     cout << "The car models is: ";
     car.getModel();

     cout << endl
          << endl;

     return 0;
}