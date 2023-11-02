

/* >>> Add And Remove Program ( Version 3 ) <<< */

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
          << "You welcome in Add And Remove Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...

// ... Classes ...
template <typename T>
class Container
{
private:
     vector<T> data_;

public:
     void add(T value)
     {
          data_.push_back(value);
     }

     void remove(int index)
     {
          if (index >= 0 && index < size())
          {
               data_.erase(data_.begin() + index);
          }
     }

     int size() const
     {
          return data_.size();
     }
};

// ... End Classes ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Container<int> container;
     container.add(1);
     container.add(2);
     container.add(3);
     container.remove(1);

     cout << "container size = " << container.size() << endl;

     cout << endl
          << endl;

     return 0;
}