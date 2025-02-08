
//* Generic Function Maximum Value Program (Version 1).

/*
* Create a program that defines a generic function to find the maximum value in an array.
* Demonstrate the usage of the generic maximum function with an array of integers and an array of floats.
* Provide the program code and the output.

! Output:
! Maximum in integer array: 10
! Maximum in float array: 6.7
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Generic Function Maximum Value Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Maximum Value - Function.
T maximumValueFun(int s, T arr[])
{
    T max = arr[0];

    for (int i = 1; i < s; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    int myArray1[] = {2, 5, 8, 6, 10, 3, 4, 7, 9}, intMaximumValue;
    float myArray2[] = {2.2, 5.8, 8.1, 6.6, 10.5, 3.1, 4.8, 7.7, 9.6}, floatMaximumValue;
    int intSize = sizeof(myArray1) / sizeof(myArray1[0]);
    int floatSize = sizeof(myArray2) / sizeof(myArray2[0]);

    // Call Functions.
    intMaximumValue = maximumValueFun(intSize, myArray1);
    cout << "Maximum in integer array: " << intMaximumValue << endl;

    floatMaximumValue = maximumValueFun(floatSize, myArray2);
    cout << "Maximum in float array: " << floatMaximumValue << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
