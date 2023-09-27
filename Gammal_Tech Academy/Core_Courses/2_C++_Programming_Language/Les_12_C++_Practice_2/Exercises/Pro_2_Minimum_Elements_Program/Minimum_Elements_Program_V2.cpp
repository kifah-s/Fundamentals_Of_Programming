

// >>> Minimum Elements Program ( Version 2 ) <<< */

/* >>> Write a C++ program to find the Minimum elements in an array. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
int minimumElementsFun(int m, int arr[], int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int minEle = 0,
         myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
         myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
     // ... End Variables ...

     // ... Functions ...
     minEle = minimumElementsFun(minEle, myArray, myArrayLength);
     // ... End Functions ...

     cout << "Min Element is: " << minEle << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Minimum Elements Program ( Version 2 ) .." << endl
          << endl;
}

// find the Minimum elements / Function.
int minimumElementsFun(int m, int arr[], int l)
{
     int *pointerToMinEle = min_element(arr, arr + l);

     //* Important Note ..
     m = *pointerToMinEle;
     //* Important Note ..

     return m;
}
// ... End Functions ...