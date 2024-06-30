

/* >>> Car Program ( Version 2 ) <<< */

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
     void setMake(string make)
     {
          this->make = make;
     }
     void setModel(string model)
     {
          this->model = model;
     }
     
     string getMake()
     {
          return make;
     }
     string getModel()
     {
          return model;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Car Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Car myCar;

     myCar.setMake("Honda");
     myCar.setModel("Civic");

     cout << "Make: " << myCar.getMake() << endl;
     cout << "Model: " << myCar.getModel() << endl;

     cout << endl
          << endl;

     return 0;
}