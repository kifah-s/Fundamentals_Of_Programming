

/* >>> Add And Remove Program ( Version 2 ) <<< */

/* >>> Create a template class for a container that can hold elements of any type,
with methods to add and remove elements, and to get the size of the container. <<< */

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

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Add And Remove Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...

// ... Classes ...

// Create Template.
template <typename T>

class Container
{
private:
     vector<T> myVec;

public:
     // Add method.
     void addMethod(T arg)
     {
          myVec.push_back(arg);
     }

     // Remove method.
     void removeMethod()
     {
          myVec.pop_back();
     }

     // Get size method.
     void getSizeMeth()
     {
          cout << "Size = " << myVec.size();
     }
};
// ... End Classes ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat object from container class.
     Container<char> con1;

     // Add element.
     con1.addMethod('k');
     con1.addMethod('d');

     // Remove element.
     con1.removeMethod();

     // get the size.
     con1.getSizeMeth();

     cout << endl
          << endl;

     return 0;
}