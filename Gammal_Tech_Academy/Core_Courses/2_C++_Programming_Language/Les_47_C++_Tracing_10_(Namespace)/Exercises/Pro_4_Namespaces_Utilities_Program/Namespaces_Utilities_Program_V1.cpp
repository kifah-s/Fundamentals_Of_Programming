

/* >>> Namespaces Utilities Program ( Version 1 ) <<< */

/* >>> Define a namespace "utilities" that contains a function "printArray" that takes an array of integers and its size as arguments, and prints the contents of the array.
In the main function, define an array of integers and pass it to the "printArray" function using the namespace prefix. <<< */

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

// ... Namespaces ...
// Create namespace Utilities.
namespace utilities
{
     // Create print array / Function.
     void printArrayFun(int x[], int len)
     {
          for (int i = 0; i < len; i++)
          {
               cout << x[i] << "   ";
          }
     }
}
using namespace utilities;

// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Namespaces Utilities Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare array.
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int arrLength = sizeof(arr) / sizeof(arr[0]);

     printArrayFun(arr, arrLength);

     cout << endl
          << endl;

     return 0;
}