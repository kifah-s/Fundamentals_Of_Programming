

// >>> Sum All Elements Program ( Version 1 ) <<< */

/* >>> Write a program that reads in an array of integers and calculates the sum of all the elements in the array. <<< */

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
int sumAllEleFun(int s, int arr[], int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sumEle = 0,
         myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
     // ... End Variables ...

     // ... Functions ...
     sumEle = sumAllEleFun(sumEle, myArray, myArrayLength);
     // ... End Functions ...

     cout << "Sum All Elements is: " << sumEle << endl
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
          << "You welcome in Sum All Elements Program ( Version 1 ) .." << endl
          << endl;
}

// Sum All elements / Function.
int sumAllEleFun(int s, int arr[], int l)
{
     for (int i = 0; i < l; i++)
     {
          s += arr[i];
     }

     return s;
}
// ... End Functions ...