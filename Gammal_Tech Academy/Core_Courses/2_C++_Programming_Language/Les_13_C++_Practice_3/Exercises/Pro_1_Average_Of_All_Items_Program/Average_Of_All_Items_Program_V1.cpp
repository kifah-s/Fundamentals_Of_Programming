

// >>> Average Of All Items Program ( Version 1 ) <<< */

/* >>> Write a program that reads in an array of integers and calculates the average of all the elements in the array. <<< */

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
int averageOfAllItemsFun(int avg, int arr[], int l);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int myArray[] = {1, 2, 3, 4, 5}, avgEle = 0,
         myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
     // ... End Variables ...

     // ... Functions ...
     avgEle = averageOfAllItemsFun(avgEle, myArray, myArrayLength);
     // ... End Functions ...

     cout << "Average Of All Items is: " << avgEle << endl
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
          << "You welcome in Average Of All Items Program ( Version 1 ) .." << endl
          << endl;
}

// Average Of All Items / Function.
int averageOfAllItemsFun(int avg, int arr[], int l)
{
     for (int i = 0; i < l; i++)
     {
          avg += arr[i];
     }
     avg /= l;

     return avg;
}
// ... End Functions ...