

/* >>> Smart Pointer Program ( Version 1 ) <<< */

/* >>> Create a template class for a smart pointer that can manage the lifetime of an object,
with methods to create and destroy the object, and to access its members. <<< */

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
#include <numeric>

using namespace std;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Smart Pointer Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

// ... Classes ...
// Create template.
template <typename T>

// Create smart pointer / class.
class smartPointer
{
private:
     vector<T> myVec;

public:
     // Create object / method.
     smartPointer()
     {
          myVec = {10, 20, 30, 40, 50};

          // access to members.
          cout << "Members: ";
          for (int i = 0; i < myVec.size(); i++)
          {
               cout << myVec[i] << " ";
          }
     }

     ~smartPointer()
     {
          cout << "This object deleted .." << endl
               << endl;
     }
};

// ... End Classes ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create oject from smartPointer class.
     smartPointer<int> obj1;

     cout << endl
          << endl;

     return 0;
}