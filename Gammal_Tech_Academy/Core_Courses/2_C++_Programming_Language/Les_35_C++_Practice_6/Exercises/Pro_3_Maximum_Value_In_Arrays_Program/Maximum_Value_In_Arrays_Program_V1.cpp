
//* Maximum Value In Arrays Program (Version 1).

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
#include <cmath>

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
    cout << "\n\nYou welcome in Maximum Value In Arrays Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Maximum Value - Function.
T maximumValueFun(int size, T arr[])
{
    T max = arr[0];

    for (int i = 1; i < size; i++)
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
    // Declare Variables.
    int size = 5;
    int intArray[size] = {2, 5, 8, 10, 9};
    float floatArray[size] = {2.5, 5.8, 6.7, 1.1, 3.9};

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Maximum in integer array: " << maximumValueFun(size, intArray) << endl;
    cout << "Maximum in float array: " << maximumValueFun(size, floatArray) << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
