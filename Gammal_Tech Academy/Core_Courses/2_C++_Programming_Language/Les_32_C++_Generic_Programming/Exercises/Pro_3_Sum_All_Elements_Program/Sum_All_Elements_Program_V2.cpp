

/* >>> Sum All Elements Program ( Version 2 ) <<< */

/* >>> Create a template function that takes a container as an argument
and returns the sum of all the elements in the container. <<< */

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
          << "You welcome in Sum All Elements Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

// ... Classes ...
// Create Template.
template <typename T>

// Create Container class.
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
     T getSizeMeth()
     {
          T size = myVec.size();
          return size;
     }

     // Sum of all elements method.
     int sumAllEle()
     {
          int sum = accumulate(myVec.begin(), myVec.end(), 0);
          return sum;
     }
};

// ... End Classes ...

// ... Functions ...
// Sum of all elements / Function.
int sumAllEle(Container<int> con)
{
     int sum = con.sumAllEle();
     return sum;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat object from container class.
     Container<int> con1;

     // Add element.
     con1.addMethod(10);
     con1.addMethod(20);
     con1.addMethod(30);
     con1.addMethod(40);
     con1.addMethod(50);
     con1.addMethod(60);

     // Remove element.
     con1.removeMethod();

     // get the size.
     cout << "Size the container = " << con1.getSizeMeth() << endl;

     // sum of all the elements in the container.
     cout << "Sum of all the elements in the container = " << sumAllEle(con1);

     cout << endl
          << endl;

     return 0;
}